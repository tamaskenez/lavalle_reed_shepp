cmake_minimum_required(VERSION 3.1)
project(lavalle_rs)

add_library(lavalle_rs rs.cpp rs.h)
add_executable(main main.cpp)
target_link_libraries(main lavalle_rs)
