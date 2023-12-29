cmake_minimum_required(VERSION 3.27)
project(ncmdumper)

set(CMAKE_CXX_STANDARD 20)

#add_library(ncmdumper src/AES.cpp src/ncm.cpp)

add_executable(dumper src/main.cpp src/AES.cpp src/ncm.cpp)
#target_link_libraries(dumper ncmdumper)