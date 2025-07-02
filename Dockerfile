FROM osrf/ros:galactic-desktop

ENV DEBIAN_FRONTEND=noninteractive
WORKDIR /ROEG

# ---------- System & GUI deps ----------
RUN apt-get update && apt-get install -y --no-install-recommends \
    python3-pip python3-dev\
    python3-tk\
    libgl1-mesa-glx libxrender1\
    libsm6 libxext6\
    x11-apps\
 && rm -rf /var/lib/apt/lists/*

# ---------- Rosdep initialization and update ----------
# Initialize rosdep sources and update them.
# '|| true' is used to prevent the build from failing if rosdep init has already been run.
# RUN rosdep init || true \
#     && rosdep update

# ---------- Install ROS Galactic MCAP storage plugin ----------
RUN apt-get update && apt-get install -y ros-galactic-rosbag2-storage-mcap

# ---------- Python setup ----------
RUN pip3 install --no-cache-dir --upgrade pip

# Make 'python' and 'pip' aliases for 'python3' and 'pip3'
RUN ln -sf /usr/bin/python3 /usr/bin/python && \
    ln -sf /usr/bin/pip3 /usr/bin/pip

# ---------- Python dependencies ----------
COPY requirements.txt .
RUN pip install --no-cache-dir -r requirements.txt
RUN pip install --no-cache-dir mcap
RUN apt-get update && apt-get upgrade -y

# ---------- Default shell ----------
CMD ["/bin/bash"]
