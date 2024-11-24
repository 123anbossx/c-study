cmake_minimum_required (VERSION 3.26)
set(CMAKE_CXX_FLAGS "-std=c++17") 
project (main)
add_executable(main main.cpp workerManager.cpp employee.cpp manager.cpp boss.cpp)


