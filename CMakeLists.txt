cmake_minimum_required(VERSION 3.5)
project(learning-cplusplus)

##### For C++ #####
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall")
##### For C++ #####

##### For SDL #####
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
##### For SDL #####

add_executable(hello-sdl cplusplus-sdl/lazy-foo-tutorial/01-hello-sdl.cpp)
target_link_libraries(hello-sdl ${SDL2_LIBRARIES})

add_executable(image-screen cplusplus-sdl/lazy-foo-tutorial/02-image-screen.cpp)
target_link_libraries(image-screen ${SDL2_LIBRARIES})