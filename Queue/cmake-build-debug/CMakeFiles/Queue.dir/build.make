# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\University\Year 1\Spring\CoSc 121\Queue"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\University\Year 1\Spring\CoSc 121\Queue\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Queue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Queue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Queue.dir/flags.make

CMakeFiles/Queue.dir/main.cpp.obj: CMakeFiles/Queue.dir/flags.make
CMakeFiles/Queue.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\University\Year 1\Spring\CoSc 121\Queue\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Queue.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Queue.dir\main.cpp.obj -c "D:\University\Year 1\Spring\CoSc 121\Queue\main.cpp"

CMakeFiles/Queue.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Queue.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\University\Year 1\Spring\CoSc 121\Queue\main.cpp" > CMakeFiles\Queue.dir\main.cpp.i

CMakeFiles/Queue.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Queue.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\University\Year 1\Spring\CoSc 121\Queue\main.cpp" -o CMakeFiles\Queue.dir\main.cpp.s

# Object files for target Queue
Queue_OBJECTS = \
"CMakeFiles/Queue.dir/main.cpp.obj"

# External object files for target Queue
Queue_EXTERNAL_OBJECTS =

Queue.exe: CMakeFiles/Queue.dir/main.cpp.obj
Queue.exe: CMakeFiles/Queue.dir/build.make
Queue.exe: CMakeFiles/Queue.dir/linklibs.rsp
Queue.exe: CMakeFiles/Queue.dir/objects1.rsp
Queue.exe: CMakeFiles/Queue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\University\Year 1\Spring\CoSc 121\Queue\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Queue.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Queue.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Queue.dir/build: Queue.exe

.PHONY : CMakeFiles/Queue.dir/build

CMakeFiles/Queue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Queue.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Queue.dir/clean

CMakeFiles/Queue.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\University\Year 1\Spring\CoSc 121\Queue" "D:\University\Year 1\Spring\CoSc 121\Queue" "D:\University\Year 1\Spring\CoSc 121\Queue\cmake-build-debug" "D:\University\Year 1\Spring\CoSc 121\Queue\cmake-build-debug" "D:\University\Year 1\Spring\CoSc 121\Queue\cmake-build-debug\CMakeFiles\Queue.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Queue.dir/depend

