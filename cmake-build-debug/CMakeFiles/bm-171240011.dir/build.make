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
include CMakeFiles/bm-171240011.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bm-171240011.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bm-171240011.dir/flags.make

CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o: CMakeFiles/bm-171240011.dir/flags.make
CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o: ../nju-oj/exams/brackets-matching/from-students/bm-171240011.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hengxin/github-projects/learning-cplusplus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o   -c /home/hengxin/github-projects/learning-cplusplus/nju-oj/exams/brackets-matching/from-students/bm-171240011.c

CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hengxin/github-projects/learning-cplusplus/nju-oj/exams/brackets-matching/from-students/bm-171240011.c > CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.i

CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hengxin/github-projects/learning-cplusplus/nju-oj/exams/brackets-matching/from-students/bm-171240011.c -o CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.s

CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o.requires:

.PHONY : CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o.requires

CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o.provides: CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o.requires
	$(MAKE) -f CMakeFiles/bm-171240011.dir/build.make CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o.provides.build
.PHONY : CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o.provides

CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o.provides.build: CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o


# Object files for target bm-171240011
bm__171240011_OBJECTS = \
"CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o"

# External object files for target bm-171240011
bm__171240011_EXTERNAL_OBJECTS =

bm-171240011: CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o
bm-171240011: CMakeFiles/bm-171240011.dir/build.make
bm-171240011: CMakeFiles/bm-171240011.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hengxin/github-projects/learning-cplusplus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bm-171240011"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bm-171240011.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bm-171240011.dir/build: bm-171240011

.PHONY : CMakeFiles/bm-171240011.dir/build

CMakeFiles/bm-171240011.dir/requires: CMakeFiles/bm-171240011.dir/nju-oj/exams/brackets-matching/from-students/bm-171240011.c.o.requires

.PHONY : CMakeFiles/bm-171240011.dir/requires

CMakeFiles/bm-171240011.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bm-171240011.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bm-171240011.dir/clean

CMakeFiles/bm-171240011.dir/depend:
	cd /home/hengxin/github-projects/learning-cplusplus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hengxin/github-projects/learning-cplusplus /home/hengxin/github-projects/learning-cplusplus /home/hengxin/github-projects/learning-cplusplus/cmake-build-debug /home/hengxin/github-projects/learning-cplusplus/cmake-build-debug /home/hengxin/github-projects/learning-cplusplus/cmake-build-debug/CMakeFiles/bm-171240011.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bm-171240011.dir/depend

