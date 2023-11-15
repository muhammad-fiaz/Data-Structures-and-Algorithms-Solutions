cmake_minimum_required(VERSION 3.26)
project(Data_Structures_and_Algorithms_Solutions)

set(CMAKE_CXX_STANDARD 23)

# Get a list of all .cpp files in the project
file(GLOB_RECURSE SRC_FILES
        "${CMAKE_SOURCE_DIR}/LeetCode/**/*.cpp"
        "${CMAKE_SOURCE_DIR}/src/**/*.cpp"
)

# Add all .cpp files to the executable
add_executable(Data_Structures_and_Algorithms_Solutions ${SRC_FILES})

