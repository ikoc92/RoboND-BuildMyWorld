#!/bin/bash
echo "Make sure you are in the project file directory"
export project_path=$(pwd) && printenv
cd $project_path
rm -rf build && mkdir build && cd build/ && cmake ../
make

export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:$project_path/build
export GAZEBO_MODEL_PATH=${GAZEBO_MODEL_PATH}:$project_path/models
cd $project_path
gazebo world/myworld.world -u #--verbose
