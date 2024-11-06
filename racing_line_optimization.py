import matplotlib.pyplot as plt
import matplotlib.image as img 
import numpy as np
import csv
import pdb
  
# reading png image file 

def read_csv(file_name):
    center_line = []
    inner_line = []
    outer_line = []
    with open(file_name, mode ='r')as file:
        csvFile = csv.reader(file)
        i = 0
        for lines in csvFile:
            if i==0: 
                i+=1
                continue
            print(lines)
            x = float(lines[0])
            y = float(lines[1])
            if i > 2:
                x_, y_ = center_line[-1]
                vec = np.array([x - x_, y - y_])
                uni_v = vec / np.linalg.norm(vec)
                v_90 = uni_v @ np.array([[0, -1], [1,  0]])
                outer_v = v_90 * float(lines[2]) + [x, y]
                inner_v = -v_90 * float(lines[3]) + [x, y]
                outer_line.append(outer_v)
                inner_line.append(inner_v)
            center_line.append([x, y])
            i+=1

    x, y = center_line[0]
    x_, y_ = center_line[-1]
    vec = np.array([x - x_, y - y_])
    uni_v = vec / np.linalg.norm(vec)
    v_90 = uni_v @ np.array([[0, -1], [1,  0]])
    outer_v = v_90 * float(lines[2]) + [x, y]
    inner_v = -v_90 * float(lines[3]) + [x, y]
    outer_line.insert(0, outer_v)
    inner_line.insert(0, inner_v)

    outer_line.append(outer_v)
    inner_line.append(inner_v)
    center_line.append(center_line[0])

    center_line = np.array(center_line)
    inner_line = np.array(inner_line)
    outer_line = np.array(outer_line)
    return center_line, inner_line, outer_line


if __name__ == '__main__':
    center_line, inner_line, outer_line = read_csv("Indy/Indy_centerline.csv")
    # im = img.imread('Indy/Indy_map.png')
    # plt.figure(figsize=(10,10))
    fig, ax = plt.subplots()
    ax.set_aspect(1)
    # plt.imshow(im)
    ax.plot(center_line[:,0], center_line[:,1], color='black')
    ax.plot(inner_line[:,0], inner_line[:,1], color='blue')
    ax.plot(outer_line[:,0], outer_line[:,1], color='red')
    plt.show()