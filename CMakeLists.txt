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
add_executable(Two_Sum LeetCode/CPlus/Easy/Two Sum/Solution.cpp)
