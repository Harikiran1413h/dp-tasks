cmake_minimum_required(VERSION 3.10)
project(day4_cmake)

add_library(kinematics src/kinematics.cpp)
target_include_directories(kinematics PUBLIC include)
target_compile_features(kinematics PUBLIC cxx_std_17)
target_compile_options(kinematics PRIVATE -Wall -Wextra -Werror)

add_executable(trajectory_simulation apps/main.cpp)
target_link_libraries(trajectory_simulation PRIVATE kinematics)
target_compile_options(trajectory_simulation PRIVATE -Wall -Wextra -Werror)
