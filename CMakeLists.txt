cmake_minimum_required(VERSION 2.9.0)

project(Project1MasterMind)

set(SOURCE_DIR "Project1MasterMind")

include_directories(${SOURCE_DIR}/src)

set(CMAKE_CXX_STANDARD 11) #enables C++11 standard

add_executable(Project1Executable main.cpp mastermind.cpp response.cpp)
