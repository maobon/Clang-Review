# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/xin/workspace-clang/EndOfTermReview

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/xin/workspace-clang/EndOfTermReview/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/EndOfTermReview.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EndOfTermReview.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EndOfTermReview.dir/flags.make

CMakeFiles/EndOfTermReview.dir/main.c.o: CMakeFiles/EndOfTermReview.dir/flags.make
CMakeFiles/EndOfTermReview.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xin/workspace-clang/EndOfTermReview/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/EndOfTermReview.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/EndOfTermReview.dir/main.c.o   -c /Users/xin/workspace-clang/EndOfTermReview/main.c

CMakeFiles/EndOfTermReview.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/EndOfTermReview.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/xin/workspace-clang/EndOfTermReview/main.c > CMakeFiles/EndOfTermReview.dir/main.c.i

CMakeFiles/EndOfTermReview.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/EndOfTermReview.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/xin/workspace-clang/EndOfTermReview/main.c -o CMakeFiles/EndOfTermReview.dir/main.c.s

# Object files for target EndOfTermReview
EndOfTermReview_OBJECTS = \
"CMakeFiles/EndOfTermReview.dir/main.c.o"

# External object files for target EndOfTermReview
EndOfTermReview_EXTERNAL_OBJECTS =

EndOfTermReview: CMakeFiles/EndOfTermReview.dir/main.c.o
EndOfTermReview: CMakeFiles/EndOfTermReview.dir/build.make
EndOfTermReview: CMakeFiles/EndOfTermReview.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/xin/workspace-clang/EndOfTermReview/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable EndOfTermReview"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EndOfTermReview.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EndOfTermReview.dir/build: EndOfTermReview

.PHONY : CMakeFiles/EndOfTermReview.dir/build

CMakeFiles/EndOfTermReview.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EndOfTermReview.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EndOfTermReview.dir/clean

CMakeFiles/EndOfTermReview.dir/depend:
	cd /Users/xin/workspace-clang/EndOfTermReview/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/xin/workspace-clang/EndOfTermReview /Users/xin/workspace-clang/EndOfTermReview /Users/xin/workspace-clang/EndOfTermReview/cmake-build-debug /Users/xin/workspace-clang/EndOfTermReview/cmake-build-debug /Users/xin/workspace-clang/EndOfTermReview/cmake-build-debug/CMakeFiles/EndOfTermReview.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EndOfTermReview.dir/depend

