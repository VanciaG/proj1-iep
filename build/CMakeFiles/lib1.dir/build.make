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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gabi/Desktop/proj1-iep

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gabi/Desktop/proj1-iep/build

# Include any dependencies generated for this target.
include CMakeFiles/lib1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lib1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lib1.dir/flags.make

CMakeFiles/lib1.dir/src/device.cpp.o: CMakeFiles/lib1.dir/flags.make
CMakeFiles/lib1.dir/src/device.cpp.o: ../src/device.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabi/Desktop/proj1-iep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lib1.dir/src/device.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib1.dir/src/device.cpp.o -c /home/gabi/Desktop/proj1-iep/src/device.cpp

CMakeFiles/lib1.dir/src/device.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib1.dir/src/device.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabi/Desktop/proj1-iep/src/device.cpp > CMakeFiles/lib1.dir/src/device.cpp.i

CMakeFiles/lib1.dir/src/device.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib1.dir/src/device.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabi/Desktop/proj1-iep/src/device.cpp -o CMakeFiles/lib1.dir/src/device.cpp.s

# Object files for target lib1
lib1_OBJECTS = \
"CMakeFiles/lib1.dir/src/device.cpp.o"

# External object files for target lib1
lib1_EXTERNAL_OBJECTS =

liblib1.a: CMakeFiles/lib1.dir/src/device.cpp.o
liblib1.a: CMakeFiles/lib1.dir/build.make
liblib1.a: CMakeFiles/lib1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gabi/Desktop/proj1-iep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblib1.a"
	$(CMAKE_COMMAND) -P CMakeFiles/lib1.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lib1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lib1.dir/build: liblib1.a

.PHONY : CMakeFiles/lib1.dir/build

CMakeFiles/lib1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lib1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lib1.dir/clean

CMakeFiles/lib1.dir/depend:
	cd /home/gabi/Desktop/proj1-iep/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gabi/Desktop/proj1-iep /home/gabi/Desktop/proj1-iep /home/gabi/Desktop/proj1-iep/build /home/gabi/Desktop/proj1-iep/build /home/gabi/Desktop/proj1-iep/build/CMakeFiles/lib1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lib1.dir/depend

