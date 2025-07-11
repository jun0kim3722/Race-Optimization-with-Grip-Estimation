# Race-Optimization-with-Grip-Estimation
*Purdue VIP AI-Racing Senior Design Project. 2024 - 2025*

## Abstract:
Adapting to new environments is a critical challenge in autonomous driving, as the system must handle sudden changes at any speed, such as rain, snow, or black ice on highways. Professional racing drivers possess a deep understanding of vehicle dynamics and handling, a skill set mastered by only a select few worldwide. Driving at the limit demands analyzing thousands of inputs to estimate tire grip and navigate the fastest route through evolving conditions. In this work, we aim to optimize racing lines by accurately estimating tire grip and track surface conditions while minimizing the risk of losing traction. Our approach involves real-time grip estimation and continuous exploration of the racing line using sampling-based methods. This strategy reduces uncertainty and enables adaptation to continuously changing environments, resulting in a more robust racing line optimization algorithm.

## Project Description:
<img width="1985" height="944" alt="AI_racing drawio" src="https://github.com/user-attachments/assets/91efcf9a-0ec8-4684-9c49-32d205b344df" />

1. **Suspension Simulation**: Utilized a CAD-based simulation to compute suspension geometry under varying vehicle dynamic conditions.
2. **Tire Grip Estimation**: Implement the Magic Tire Model to estimate tire grip & friction coefficient.
3. **Runtime Friction Map Framework**: Develop a real-time system for dynamically updating the track surface friction map based on tire behavior.
4. **Exploration Line Generation**: Generate exploratory racing lines to support initial friction map learning and updates.
5. **Racing Line Optimization**: Optimize the racing line in real time using the updated friction map data. (In progress)

## Install / Setup


### Author:
*Junyoung Kim @ Purdue University ECE*
