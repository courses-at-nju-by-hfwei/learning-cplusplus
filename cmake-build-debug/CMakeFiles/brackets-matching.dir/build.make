# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/hengxin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.3870.21/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/hengxin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.3870.21/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hengxin/github-projects/learning-cplusplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hengxin/github-projects/learning-cplusplus/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/brackets-matching.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/brackets-matching.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/brackets-matching.dir/flags.make

CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o: CMakeFiles/brackets-matching.dir/flags.make
CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o: ../nju-oj/exams/brackets-matching/problem/brackets-matching.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hengxin/github-projects/learning-cplusplus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o -c /home/hengxin/github-projects/learning-cplusplus/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp

CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hengxin/github-projects/learning-cplusplus/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp > CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.i

CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hengxin/github-projects/learning-cplusplus/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp -o CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.s

CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o.requires:

.PHONY : CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o.requires

CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o.provides: CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o.requires
	$(MAKE) -f CMakeFiles/brackets-matching.dir/build.make CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o.provides.build
.PHONY : CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o.provides

CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o.provides.build: CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o


# Object files for target brackets-matching
brackets__matching_OBJECTS = \
"CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o"

# External object files for target brackets-matching
brackets__matching_EXTERNAL_OBJECTS =

brackets-matching: CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o
brackets-matching: CMakeFiles/brackets-matching.dir/build.make
brackets-matching: CMakeFiles/brackets-matching.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hengxin/github-projects/learning-cplusplus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable brackets-matching"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/brackets-matching.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/brackets-matching.dir/build: brackets-matching

.PHONY : CMakeFiles/brackets-matching.dir/build

CMakeFiles/brackets-matching.dir/requires: CMakeFiles/brackets-matching.dir/nju-oj/exams/brackets-matching/problem/brackets-matching.cpp.o.requires

.PHONY : CMakeFiles/brackets-matching.dir/requires

CMakeFiles/brackets-matching.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/brackets-matching.dir/cmake_clean.cmake
.PHONY : CMakeFiles/brackets-matching.dir/clean

CMakeFiles/brackets-matching.dir/depend:
	cd /home/hengxin/github-projects/learning-cplusplus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hengxin/github-projects/learning-cplusplus /home/hengxin/github-projects/learning-cplusplus /home/hengxin/github-projects/learning-cplusplus/cmake-build-debug /home/hengxin/github-projects/learning-cplusplus/cmake-build-debug /home/hengxin/github-projects/learning-cplusplus/cmake-build-debug/CMakeFiles/brackets-matching.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/brackets-matching.dir/depend

