#!/bin/bash
DATA_PATH="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
xhost +local:root

docker run -it --rm \
    -e DISPLAY=$DISPLAY \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    -v ${DATA_PATH}/requirements.txt:/ROEG/requirements.txt\
    -v ${DATA_PATH}/roeg_ws:/ROEG/roeg_ws\
    ros2-roeg