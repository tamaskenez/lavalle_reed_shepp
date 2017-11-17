cmake_minimum_required(VERSION 3.1)
project(lavalle_reed_shepp)

add_library(reed_shepp rs.cpp rs.h)
target_include_directories(reed_shepp PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>)
install(TARGETS reed_shepp DESTINATION lib EXPORT reed_shepp-targets)
install(EXPORT reed_shepp-targets
    DESTINATION lib/cmake/lavalle
    NAMESPACE lavalle::
    FILE lavalle_reed_shepp-config.cmake)
install(FILES rs.h DESTINATION include/lavalle)

add_executable(main main.cpp)
target_link_libraries(main reed_shepp)
