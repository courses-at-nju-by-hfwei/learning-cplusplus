cmake_minimum_required(VERSION 3.5)
project(learning-cplusplus)

##### For C++ #####
set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall")
##### For C++ #####

add_executable(static-class-member the-cplusplus-pl/concrete-classes/static-class-member.cpp)
add_executable(for-statements the-cplusplus-pl/statements/for-statements.cpp)
add_executable(constructor the-cplusplus-pl/class-lifecycle/constructor.cpp)

# ##### For SDL #####
# find_package(SDL2 REQUIRED)
# include_directories(${SDL2_INCLUDE_DIRS})
# ##### For SDL #####
#
# add_executable(hello-sdl cplusplus-sdl/lazy-foo-tutorial/01-hello-sdl.cpp)
# target_link_libraries(hello-sdl ${SDL2_LIBRARIES})
#
# add_executable(image-screen cplusplus-sdl/lazy-foo-tutorial/02-image-screen.cpp)
# target_link_libraries(image-screen ${SDL2_LIBRARIES})
#
# add_executable(event-driven cplusplus-sdl/lazy-foo-tutorial/03-event-driven.cpp)
# target_link_libraries(event-driven ${SDL2_LIBRARIES})

# add_executable(key-presses cplusplus-sdl/lazy-foo-tutorial/04-key-presses.cpp)
# target_link_libraries(key-presses ${SDL2_LIBRARIES})

add_executable(brackets-matching nju-oj/exams/brackets-matching/problem/brackets-matching.cpp)
add_executable(brackets-matching-tutorial nju-programming-tutorial/brackets-matching-tutorial.cpp)
add_executable(josephus nju-programming-tutorial/josephus.cpp)
add_executable(josephus-tutorial nju-programming-tutorial/josephus-tutorial.cpp)

add_executable(dynamic-array cplusplus-test/dynamic-array.cpp)

add_executable(linkedlist debugging/from-students/linkedlist.cpp)
add_executable(matching-0543 debugging/from-students/matching-0543.cpp)

add_executable(if-declaration the-cplusplus-pl/statements/if-declaration.cpp)

add_executable(bm-171860575 nju-oj/exams/brackets-matching/from-students/bm-171860575.cpp)
# add_executable(bm-171860538 nju-oj/exams/brackets-matching/from-students/bm-171860538.c)
add_executable(bm-171860599 nju-oj/exams/brackets-matching/from-students/bm-171860599.cpp)
add_executable(bm-171860639 nju-oj/exams/brackets-matching/from-students/bm-171860639.cpp)
add_executable(bm-171250630 nju-oj/exams/brackets-matching/from-students/bm-171250630.cpp)
add_executable(bm-171240536 nju-oj/exams/brackets-matching/from-students/bm-171240536.cpp)
add_executable(bm-171240542 nju-oj/exams/brackets-matching/from-students/bm-171240542.cpp)
add_executable(bm-171180589 nju-oj/exams/brackets-matching/from-students/bm-171180589.cpp)
add_executable(bm-171240011 nju-oj/exams/brackets-matching/from-students/bm-171240011.c)
add_executable(bm-171240513 nju-oj/exams/brackets-matching/from-students/bm-171240513.cpp)
add_executable(bm-171240543 nju-oj/exams/brackets-matching/from-students/bm-171240543.cpp)
add_executable(bm-161180204 nju-oj/exams/brackets-matching/from-students/bm-161180204.cpp)
