# Race-Optimization-with-Grip-Estimation
*Purdue VIP AI-Racing Senior Design Project. 2024 - 2025*

## Abstract:
Adapting to new environments is a critical challenge in autonomous driving, as the system must handle sudden changes at any speed, such as rain, snow, or black ice on highways. Professional racing drivers possess a deep understanding of vehicle dynamics and handling, a skill set mastered by only a select few worldwide. Driving at the limit demands analyzing thousands of inputs to estimate tire grip and navigate the fastest route through evolving conditions. In this work, we aim to optimize racing lines by accurately estimating tire grip and track surface conditions while minimizing the risk of losing traction. Our approach involves real-time grip estimation and continuous exploration of the racing line using sampling-based methods. This strategy reduces uncertainty and enables adaptation to continuously changing environments, resulting in a more robust racing line optimization algorithm.

## Project Milestones:
1. Suspension simulation with CAD model for suspension geometry calculation.
2. Tire grip estimation with CIP tire model from Simulink.
3. Generating velocity profile with tire model & test it with TUM Minimum curvature trajectory planning.  
[Heilmeier, A., Wischnewski, A., Hermansdorfer, L., Betz, J., Lienkamp, M., & Lohmann, B. (2019). Minimum curvature trajectory planning and control for an autonomous race car. Vehicle System Dynamics, 58(10), 1497–1527.](https://doi.org/10.1080/00423114.2019.1631455)
5. Generate racing line optimization algorithm with exploration behavior for adaptive planning.

### Author:
*Junyoung Kim @ Purdue University ECE*
