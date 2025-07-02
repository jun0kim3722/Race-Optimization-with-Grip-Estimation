from TUM_code.reftrack_functions import load_reftrack, calc_trackboundaries, calc_refline_normvecs
import scipy.interpolate
import numpy as np
import matplotlib.pyplot as plt

import json
import configparser
import warnings
warnings.simplefilter('ignore', np.RankWarning)

# ***************************** Helper Functions *****************************
def calculate_curvature(waypoints):
    num_points = len(waypoints)
    curvatures = np.zeros(num_points)

    if num_points < 3:
        return curvatures # curvature is undefined for less than 3 points

    for i in range(-1, num_points - 1):
        x1, y1 = waypoints[i - 1]
        x2, y2 = waypoints[i]
        x3, y3 = waypoints[i + 1]

        a = np.array([x2 - x1, y2 - y1])
        b = np.array([x3 - x2, y3 - y2])

        cross_product = np.cross(a, b)

        a_length = np.linalg.norm(a)
        b_length = np.linalg.norm(b)

        # Calculate the angle between the vectors
        sin_theta = cross_product / (a_length * b_length)

        # Calculate the curvature
        if a_length * b_length > 0: #avoid division by zero.
            curvatures[i] = 2 * sin_theta / (a_length + b_length)
        else:
            curvatures[i] = 0

    return curvatures

def get_apex_idx(reftrack):
    waypoints = reftrack[:, :2]
    curvatures = np.abs(calculate_curvature(waypoints))
    return np.argmax(curvatures)

def move_point_inside(point, left_bound, right_bound):
    """Moves a point inside track boundaries if it's outside without distorting the racing line."""
    direction = np.array(right_bound) - np.array(left_bound)
    direction /= np.linalg.norm(direction)  # Normalize direction vector
    projection = np.dot(point - left_bound, direction) / np.dot(direction, direction)
    new_point = left_bound + projection * direction
    
    # Ensure point remains within bounds
    new_point[0] = min(max(new_point[0], left_bound[0]), right_bound[0])
    new_point[1] = min(max(new_point[1], left_bound[1]), right_bound[1])
    return new_point

def is_point_inside_track(point, left_bound, right_bound):
    polygon = np.concatenate((right_bound, left_bound[::-1]))
    
    x, y = point
    n = len(polygon)
    inside = False
    
    p1x, p1y = polygon[0]
    for i in range(n + 1):
        p2x, p2y = polygon[i % n]
        
        if min(p1y, p2y) < y <= max(p1y, p2y) and x <= max(p1x, p2x):
            if p1y != p2y:
                xinters = (y - p1y) * (p2x - p1x) / (p2y - p1y) + p1x
            if p1x == p2x or x <= xinters:
                inside = not inside
        
        p1x, p1y = p2x, p2y

    return inside

# ***************************** Racing Line Generation *****************************
def segment_racing_line(reftrack, curvature_threshold=0.02, size_threshold=5):
    """
    Segments a reference line into corners.

    Inputs:
        reftrack:               reference racing line [x_m, y_m, trackwidth_right_m, trackwidth_left_m]

    Outputs:
        combined_corners:       corners extracted from reference line
        combined_corners_idxs:  start and end index of the corners 

    """

    waypoints = reftrack[:, :2]
    curvatures = calculate_curvature(waypoints)
    corners = []
    corners_idxs = []
    in_corner = False
    current_corner = []
    current_corner_idxs = []

    for i, curvature in enumerate(curvatures):
        if abs(curvature) > curvature_threshold:
            if not in_corner:
                in_corner = True
            current_corner.append(waypoints[i])
            current_corner_idxs.append(i)
            
        elif in_corner:
            current_corner.append(waypoints[i])
            corners.append(np.array(current_corner))
            current_corner_idxs.append(i)
            corners_idxs.append(current_corner_idxs)
            in_corner = False
            current_corner = []
            current_corner_idxs = []

    if in_corner:
        corners.append(np.array(current_corner))
        corners_idxs.append(current_corner_idxs)

    # Combine close corners
    combined_corners = []
    combined_corners_idxs = []
    if corners:
        combined_corners.append(corners[0])
        combined_corners_idxs.append(corners_idxs[0])

        for i in range(1, len(corners)):
            last_corner = combined_corners[-1]
            current_corner = corners[i]

            # Calculate distance between the end of the last corner and the start of the current corner
            dist = np.linalg.norm(last_corner[-1] - current_corner[0])
            if dist <= size_threshold:
                combined_corners[-1] = np.concatenate((last_corner, current_corner))
                combined_corners_idxs[-1][-1] = corners_idxs[i][-1]
            else:
                if np.linalg.norm(last_corner[0] - last_corner[-1]) < size_threshold:
                    combined_corners.pop(-1)
                    combined_corners_idxs.pop(-1)

                # Add the current corner as a new segment
                combined_corners.append(current_corner)
                combined_corners_idxs.append(corners_idxs[i])

    return combined_corners, combined_corners_idxs

def generate_racing_line(reftrack, vec, left_bound, right_bound, start_point, end_point, apex_point):
    """
    Generate smooth racing line based on given start point, end point, and apex_point.

    Inputs:
        reftrack:               reference racing line from turn in to turn out point
        vec:                    normal vector pointing apex move direction from turn in to turn out point
        left_bound:             x,y coordinates of left trackboundary (from reference line in driving direction)
        right_bound:            x,y coordinates of right trackboundary (from reference line in driving direction)
        start_point:            x,y coordinates of turn in point of the corner
        end_point:              x,y coordinates of turn out point of the corner
        apex_point:             x,y coordinates of apex point (maximum turning point) of the corner

    Outputs:
        smooth_points:          generated racing line formed with 2d points
    """

    for _ in range(10):  # Try multiple iterations to fit the track
        points = np.array([start_point, apex_point, end_point])
        t = np.linspace(0, 1, len(points))
        coeffs_x = np.polyfit(t, points[:, 0], deg=3)
        coeffs_y = np.polyfit(t, points[:, 1], deg=3)
        poly_x = np.poly1d(coeffs_x)
        poly_y = np.poly1d(coeffs_y)

        t_smooth = np.linspace(0, 1, len(reftrack))
        smooth_x = poly_x(t_smooth)
        smooth_y = poly_y(t_smooth)
        smooth_points = np.column_stack((smooth_x, smooth_y))

        # Check if all points stay within the track bounds
        valid = True
        for point_idx, point in enumerate(smooth_points):
            if not is_point_inside_track(point, left_bound, right_bound):
                valid = False
                break
        
        if valid:
            return smooth_points
        
        apex_point = apex_point + vec * 0.1 # Adjust apex point slightly

    return None

def turn_collections(reftrack, normvec, left_bound, right_bound, start_point=None, end_point=None, num_lines=3, viz=False):
    """
    Generate different start, end, apex points for each corner to create different racing line.

    Inputs:
        reftrack:               reference racing line in given corner segment
        normvec:                reference line normal vectors in given corner segment
        left_bound:             x,y coordinates of left trackboundary (from reference line in driving direction)
        right_bound:            x,y coordinates of right trackboundary (from reference line in driving direction)
        start_point:            given turn in point to connect with previous corner racing line
        end_point:              given turn out point to connect with next corner racing line
        num_lines:              maximum number of racing line generated per corner
        viz:                    plots generated racing lines

    Outputs:
        racing_lines:           collection of racing line of given corner 
    """

    racing_lines = []
    for i in range(num_lines):
        turn_in_idx = int(len(reftrack) * (0.1 + i * 0.05))
        turn_out_idx = int(len(reftrack) * (0.9 - i * 0.05))

        # reference track info
        ref_start = reftrack[turn_in_idx][:2]
        ref_mid = reftrack[(turn_in_idx + turn_out_idx)//2]
        ref_end = reftrack[turn_out_idx][:2]

        norm_start = normvec[turn_in_idx][:2]
        norm_end = normvec[turn_out_idx][:2]
        
        turn_direction = (ref_mid[0] - ref_start[0]) * (ref_end[1] - ref_start[1]) - \
                         (ref_mid[1] - ref_start[1]) * (ref_end[0] - ref_start[0])
        apex_idx = get_apex_idx(reftrack) - 5 + 5 * i # Earlier or later apex variation Needs to be fixed

        if turn_direction < 0:  # Right turn, entry & exit on left
            if start_point is not None:
                turnIn_point = start_point
                turn_in_idx = 0
            else:
                turnIn_point = ref_start - norm_start * reftrack[turn_in_idx][3] * 0.9
            
            if end_point is not None:
                turnOut_point = end_point
                turn_out_idx = -2
            else:
                turnOut_point = ref_end - norm_end * reftrack[turn_out_idx][3] * 0.9

            if i == 1:
                apex_point = left_bound[apex_idx] + normvec[apex_idx][:2]
                vec = normvec[apex_idx + 5 - 5*i][:2] * sum(reftrack[apex_idx][2:])
            else:
                apex_point = right_bound[apex_idx] - normvec[apex_idx][:2]
                vec = -normvec[apex_idx + 5 - 5*i][:2] * sum(reftrack[apex_idx][2:])

        else:  # Left turn, entry & exit
            if start_point is not None:
                turnIn_point = start_point
                turn_in_idx = 0
            else:
                turnIn_point = ref_start + norm_start * reftrack[turn_in_idx][2] * 0.9
                
            if end_point is not None:
                turnOut_point = end_point
                turn_out_idx = -2
            else:
                turnOut_point = ref_end + norm_end * reftrack[turn_out_idx][2] * 0.9
            
            if i == 1:
                apex_point = right_bound[apex_idx] + normvec[apex_idx][:2]
                vec = -normvec[apex_idx + 5 - 5*i][:2] * sum(reftrack[apex_idx][2:])
            else:
                apex_point = left_bound[apex_idx] + normvec[apex_idx][:2]
                vec = normvec[apex_idx + 5 - 5*i][:2] * sum(reftrack[apex_idx][2:])
        
        racing_line = generate_racing_line(reftrack[turn_in_idx:turn_out_idx+1],
                                           vec,
                                           left_bound,
                                           right_bound, 
                                           turnIn_point, turnOut_point, apex_point)

        if racing_line is not None:
            racing_lines.append(racing_line)

            # plt.figure()
            # plt.axis('equal')
            # plt.grid()
            # plt.plot(left_bound[:,0], left_bound[:,1], color='black')
            # plt.plot(right_bound[:,0], right_bound[:,1], color='black')
            # plt.plot(racing_line[:,0], racing_line[:,1], color="cyan", linewidth=1.5)
            # plt.plot(racing_line[-1][0], racing_line[-1][1], "^", color="r", linewidth=5.5, label="Exit")
            # plt.plot(racing_line[0][0], racing_line[0][1], "o", color="b", linewidth=5.5, label="Entry")
            # plt.plot(apex_point[0], apex_point[1], "^", color="cyan", linewidth=5.5)
            # plt.plot(apex_point[0] + vec[0], apex_point[1] + vec[1], "^", color="pink", linewidth=5.5)
            # plt.legend()
            # plt.show()
    
    if len(racing_lines) == 0:
        racing_lines.append(reftrack[:, :2])

    if viz:
        plt.figure()
        for i in range(len(racing_lines)):
            plt.subplot(1, num_lines, i+1)
            plt.axis('equal')
            plt.grid()
            plt.plot(left_bound[:,0], left_bound[:,1], color='black')
            plt.plot(right_bound[:,0], right_bound[:,1], color='black')
            plt.plot(racing_lines[i][:,0], racing_lines[i][:,1], color="cyan", linewidth=1.5)
            plt.plot(racing_lines[i][-1][0], racing_lines[i][-1][1], "^", color="r", linewidth=5.5, label="Exit")
            plt.plot(racing_lines[i][0][0], racing_lines[i][0][1], "o", color="b", linewidth=5.5, label="Entry")
            plt.plot(apex_point[0], apex_point[1], "^", color="cyan", linewidth=5.5)
        plt.legend()
        plt.show()
    
    return racing_lines

def connect_racing_lines(racing_lines, left_bound, right_bound):
    """
    Connect corner racing lines into a complete racing line.

    Inputs:
        racing_lines:           colection of racing lines generated per corner segments
        left_bound:             x,y coordinates of left trackboundary (from reference line in driving direction)
        right_bound:            x,y coordinates of right trackboundary (from reference line in driving direction)

    Outputs:
        final_line:             complete racing line formed with given racing_lines
    """

    complete_racing_line = []
    for i in range(len(racing_lines)):
        segment1 = racing_lines[i - 1]
        segment2 = racing_lines[i]
        
        # Ensure continuity by smoothly transitioning between segments
        transition = np.linspace(segment1[-1], segment2[0], num=10)
        
        valid_transition = []
        for point in transition:
            if is_point_inside_track(point, left_bound, right_bound):
                valid_transition.append(point)
            else:
                closest_idx = np.argmin(np.linalg.norm(left_bound - point, axis=1))
                valid_transition.append(move_point_inside(point, left_bound[closest_idx], right_bound[closest_idx]))
        
        complete_racing_line.extend(segment1)
        complete_racing_line.extend(valid_transition)
    
    complete_racing_line.extend(racing_lines[-1])  # Add the final segment
    
    # Apply final smoothing to entire connected racing line
    final_t = np.linspace(0, 1, len(complete_racing_line))
    complete_racing_line = np.array(complete_racing_line)

    final_spline_x = scipy.interpolate.CubicSpline(final_t, complete_racing_line[:, 0])
    final_spline_y = scipy.interpolate.CubicSpline(final_t, complete_racing_line[:, 1])

    final_smooth_x = final_spline_x(final_t)
    final_smooth_y = final_spline_y(final_t)

    
    final_line = np.column_stack((final_smooth_x, final_smooth_y))
    return final_line

def racing_line_generator(path2reftrack_file, safety_margin=0.0, num_lines=3, viz_corners=False, viz_lines=False):
    """
    Load track info and generate complete racing line.

    Inputs:
        path2reftrack_file:     absolute path to reference track file
        safety_margin:          safetly margin from the track boundaries
        num_lines:              total number of lines to generate
        viz_corners:            plots generated racing lines for each corners
        viz_lines:              plots all of the racing lines generated

    Outputs:
        complete_lines:         complete racing lines generated
    """

    # load track info
    reftrack = load_reftrack(path2track=path2reftrack_file)
    right_bound, left_bound = calc_trackboundaries(reftrack=reftrack, safety_margin=safety_margin)
    reftnormvec = calc_refline_normvecs(reftrack)
    _, corner_idx = segment_racing_line(reftrack)

    # generate corner by corner racing line
    lines_per_corner = []
    num_corners = len(corner_idx)
    len_ref = len(reftrack)
    for i in range(0, num_corners):

        prev_corner_idx = corner_idx[i-1][1] - len_ref if i-1 < 0 else corner_idx[i-1][1]
        nxt_corner_idx = corner_idx[0][0] + len_ref if i+1 >= num_corners else corner_idx[i+1][0]

        # connect end point to start point
        if corner_idx[i][0] - 100 < prev_corner_idx:
            start_idx = prev_corner_idx
            start_point = lines_per_corner[i-1][0][-1]
        else:
            start_idx = corner_idx[i][0] - 50
            start_point = None
        
        if corner_idx[i][-1] + 100 > nxt_corner_idx:
            end_idx = nxt_corner_idx % len_ref
            end_point = reftrack[nxt_corner_idx][:2]
        else:
            end_idx = (corner_idx[i][-1] + 50) % len_ref
            end_point = None

        lines = turn_collections(reftrack[start_idx:end_idx],
                                 reftnormvec[start_idx:end_idx],
                                 left_bound[start_idx:end_idx],
                                 right_bound[start_idx:end_idx],
                                 start_point=start_point,
                                 end_point=end_point,
                                 viz=viz_corners,
                                 num_lines=num_lines)
        lines_per_corner.append(lines)
    
    # combine racing lines
    max_line = [len(i) for i in lines_per_corner]
    print("Number of Corner Generated: ", max_line)

    complete_lines = []
    for i in range(num_lines):
        line = [lines_per_corner[c][min(max_line[c]-1, i)] for c in range(num_corners)]
        full_line = connect_racing_lines(line, left_bound, right_bound)
        complete_lines.append(full_line)

    print("Number of Racingline Generated: ", len(complete_lines))

    if viz_lines:
        plt.figure()
        plt.axis('equal')
        plt.plot(right_bound[:,0], right_bound[:,1], color='black')
        plt.plot(left_bound[:,0], left_bound[:,1], color='black')
        for i in range(len(complete_lines)):
            plt.plot(complete_lines[i][:,0], complete_lines[i][:,1])
        plt.show()

    return complete_lines

if __name__ == "__main__":
    # init params
    path2reftrack_file = "friction_maps/tracks/berlin_2018.csv"
    parser = configparser.ConfigParser()
    pars = {}
    if not parser.read("assets/vehicle_info.ini"):
        raise ValueError('Specified config file does not exist!')
    safety_margin = json.loads(parser.get('GENERAL_OPTIONS','racing_line_params'))['safety_margin']

    # Gen Racingline
    racling_lines = racing_line_generator(path2reftrack_file, safety_margin=safety_margin, viz_lines=True, viz_corners=False)
