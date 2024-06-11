
# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.26)

project(Data-Structures-and-Algorithms-Solutions)

set(CMAKE_CXX_STANDARD 23)

# Add each solution here to execute it
file(GLOB SOLUTION_SOURCES "LeetCode/CPlus/*.cpp")

foreach(SOURCE_FILE ${SOLUTION_SOURCES})
    get_filename_component(TARGET_NAME ${SOURCE_FILE} NAME_WE)
    add_executable(${TARGET_NAME} ${SOURCE_FILE})
endforeach()
