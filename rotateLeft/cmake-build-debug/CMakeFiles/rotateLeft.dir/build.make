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
CMAKE_SOURCE_DIR = "D:\University\Year 1\Spring\CoSc 121\rotateLeft"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\University\Year 1\Spring\CoSc 121\rotateLeft\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/rotateLeft.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rotateLeft.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rotateLeft.dir/flags.make

CMakeFiles/rotateLeft.dir/rotateLeft.cpp.obj: CMakeFiles/rotateLeft.dir/flags.make
CMakeFiles/rotateLeft.dir/rotateLeft.cpp.obj: ../rotateLeft.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\University\Year 1\Spring\CoSc 121\rotateLeft\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rotateLeft.dir/rotateLeft.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\rotateLeft.dir\rotateLeft.cpp.obj -c "D:\University\Year 1\Spring\CoSc 121\rotateLeft\rotateLeft.cpp"

CMakeFiles/rotateLeft.dir/rotateLeft.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rotateLeft.dir/rotateLeft.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\University\Year 1\Spring\CoSc 121\rotateLeft\rotateLeft.cpp" > CMakeFiles\rotateLeft.dir\rotateLeft.cpp.i

CMakeFiles/rotateLeft.dir/rotateLeft.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rotateLeft.dir/rotateLeft.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\University\Year 1\Spring\CoSc 121\rotateLeft\rotateLeft.cpp" -o CMakeFiles\rotateLeft.dir\rotateLeft.cpp.s

# Object files for target rotateLeft
rotateLeft_OBJECTS = \
"CMakeFiles/rotateLeft.dir/rotateLeft.cpp.obj"

# External object files for target rotateLeft
rotateLeft_EXTERNAL_OBJECTS =

rotateLeft.exe: CMakeFiles/rotateLeft.dir/rotateLeft.cpp.obj
rotateLeft.exe: CMakeFiles/rotateLeft.dir/build.make
rotateLeft.exe: CMakeFiles/rotateLeft.dir/linklibs.rsp
rotateLeft.exe: CMakeFiles/rotateLeft.dir/objects1.rsp
rotateLeft.exe: CMakeFiles/rotateLeft.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\University\Year 1\Spring\CoSc 121\rotateLeft\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rotateLeft.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\rotateLeft.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rotateLeft.dir/build: rotateLeft.exe

.PHONY : CMakeFiles/rotateLeft.dir/build

CMakeFiles/rotateLeft.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\rotateLeft.dir\cmake_clean.cmake
.PHONY : CMakeFiles/rotateLeft.dir/clean

CMakeFiles/rotateLeft.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\University\Year 1\Spring\CoSc 121\rotateLeft" "D:\University\Year 1\Spring\CoSc 121\rotateLeft" "D:\University\Year 1\Spring\CoSc 121\rotateLeft\cmake-build-debug" "D:\University\Year 1\Spring\CoSc 121\rotateLeft\cmake-build-debug" "D:\University\Year 1\Spring\CoSc 121\rotateLeft\cmake-build-debug\CMakeFiles\rotateLeft.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/rotateLeft.dir/depend

