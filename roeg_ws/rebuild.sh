#!/bin/bash

cd /ROEG/roeg_ws
rm -rf install build log
# rosdep update
rosdep install -i --from-path src --rosdistro galactic -y
colcon build