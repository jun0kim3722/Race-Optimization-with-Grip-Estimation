# Race-Optimization-with-Grip-Estimation
*Purdue VIP AI-Racing Senior Design Project, 2024–2025*

## Abstract:
Adapting to new environments is a critical challenge in autonomous driving, as the system must handle sudden changes at any speed, such as rain, snow, or black ice on highways. Professional racing drivers possess a deep understanding of vehicle dynamics and handling, a skill set mastered by only a select few worldwide. Driving at the limit demands analyzing thousands of inputs to estimate tire grip and navigate the fastest route through evolving conditions. In this work, we aim to optimize racing lines by accurately estimating tire grip and track surface conditions while minimizing the risk of losing traction. Our approach involves real-time grip estimation and continuous exploration of the racing line using sampling-based methods. This strategy reduces uncertainty and enables adaptation to continuously changing environments, resulting in a more robust racing line optimization algorithm.

## Project Description:
<img width="1985" height="944" alt="AI_racing drawio" src="https://github.com/user-attachments/assets/91efcf9a-0ec8-4684-9c49-32d205b344df" />

1. **Suspension Simulation**: Utilize a CAD-based simulation to compute suspension geometry under varying vehicle dynamic conditions.
2. **Tire Grip Estimation**: Implement the Magic Tire Model to estimate tire grip and the friction coefficient.
3. **Runtime Friction Map Framework**: Develop a real-time system for dynamically updating the track surface friction map based on tire behavior.
4. **Exploration Line Generation**: Generate exploratory racing lines to support initial friction map learning and updates.
5. **Racing Line Optimization**: Optimize the racing line in real time using the updated friction map data. (In progress)

## Install

### Docker Setup
> If you do not have Docker on your device, please install from the [Docker Website](https://docs.docker.com/engine/install/)

Build Docker Image:
```
docker build -t ros2-roeg .
```

Run Docker Container:
```
./run_roeg_docker.sh
```

### Run ROS Programs In Docker
To Run Friction Map Framework:
```
cd roeg_ws
source install/setup.bash
ros2 run roeg friction_reading

# or

ros2 run roeg friction_reading <track name>
```
> Track names can be found under `/ROEG/roeg_ws/src/roeg/roeg/friction_maps/tracks/track_list.txt`

<br>

To open more terminals under the same Docker container:
```
# Find `CONTAINER ID` or `NAMES` from:
docker ps

# open new docker terminal by:
docker exec -it <name or #id> bash
cd roeg_ws
source install/setup.bash
```
<br>

To run rosbag from previous event:
```
cd /ROEG/roeg_ws/src/roeg/roeg
./run_rosbag.sh
```
> Download the rosbag from [here](https://drive.google.com/drive/folders/10GNZyyOYT4gA7wkYwOiH5h6wgzUU5jFs?usp=drive_link),
> and place it in: `/ROEG/roeg_ws/src/roeg/roeg/assets/rosbag`


## To Do List
- [x] Build simple magic tire model
- [x] Analyze suspension geometry
- [x] Implement and test *Exploration Line Generation*
- [x] Set up Docker environment
- [x] Implement and test *Friction Map Framework*
- [ ] Integrate suspension model into the Friction Map Framework
- [ ] Refine *Exploration Line Generation* — explore better approaches
- [ ] Add publisher for racing line planning
- [ ] **MAIN**: *Racing Line Optimization*

## Authors:
***Junyoung Kim @ Purdue University ECE***
- Email: kim3722@purdue.edu
- LinkedIn: [Junyoung (Jun) Kim](https://www.linkedin.com/in/jun0kim0329/)
<br>

***Christian Choi @ Purdue University FYE***
- Email: choi953@purdue.edu
- LinkedIn: [Christian Choi](https://www.linkedin.com/in/christian-choi-456a332b9/?external_page=LPC.Immersive&external_control=ViewProfileLink&external_app_instance=13fe13b6-86b5-40e4-9dbf-e88fdf119ee1&external_page_instance=e6868a05-7089-4586-80ec-e8e3ce12e0ed&experiment=displayLinkedInDataPrebind)
<br>

***Aroldo Lugo Quintanilla @ Purdue University AE***
- Email: alugoqui@purdue.edu
- LinkedIn: [Aroldo Lugo Quintanilla](https://www.linkedin.com/in/aroldolugoq/?external_page=LPC.Immersive&external_control=ViewProfileLink&external_app_instance=13fe13b6-86b5-40e4-9dbf-e88fdf119ee1&external_page_instance=85f5d4d5-b45b-476a-baba-1c001d1f84d4&experiment=displayLinkedInDataPrebind)
  

