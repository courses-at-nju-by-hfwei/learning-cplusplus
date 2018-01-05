cmake_minimum_required(VERSION 3.5)
project(learning-cplusplus)

##### For C++ #####
set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF)

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

add_executable(event-driven cplusplus-sdl/lazy-foo-tutorial/03-event-driven.cpp)
target_link_libraries(event-driven ${SDL2_LIBRARIES})

add_executable(key-presses cplusplus-sdl/lazy-foo-tutorial/04-key-presses.cpp)
target_link_libraries(key-presses ${SDL2_LIBRARIES})

add_executable(brackets-matching nju-oj/exams/brackets-matching.cpp)

add_executable(dynamic-array cplusplus-test/dynamic-array.cpp)

add_executable(linkedlist debugging/from-students/linkedlist.cpp)
add_executable(matching-0543 debugging/from-students/matching-0543.cpp)
