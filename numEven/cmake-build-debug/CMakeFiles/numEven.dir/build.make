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
CMAKE_SOURCE_DIR = "D:\University\Year 1\Spring\CoSc 121\numEven"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\University\Year 1\Spring\CoSc 121\numEven\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/numEven.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/numEven.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/numEven.dir/flags.make

CMakeFiles/numEven.dir/numEven.cpp.obj: CMakeFiles/numEven.dir/flags.make
CMakeFiles/numEven.dir/numEven.cpp.obj: ../numEven.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\University\Year 1\Spring\CoSc 121\numEven\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/numEven.dir/numEven.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\numEven.dir\numEven.cpp.obj -c "D:\University\Year 1\Spring\CoSc 121\numEven\numEven.cpp"

CMakeFiles/numEven.dir/numEven.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numEven.dir/numEven.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\University\Year 1\Spring\CoSc 121\numEven\numEven.cpp" > CMakeFiles\numEven.dir\numEven.cpp.i

CMakeFiles/numEven.dir/numEven.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numEven.dir/numEven.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\University\Year 1\Spring\CoSc 121\numEven\numEven.cpp" -o CMakeFiles\numEven.dir\numEven.cpp.s

# Object files for target numEven
numEven_OBJECTS = \
"CMakeFiles/numEven.dir/numEven.cpp.obj"

# External object files for target numEven
numEven_EXTERNAL_OBJECTS =

numEven.exe: CMakeFiles/numEven.dir/numEven.cpp.obj
numEven.exe: CMakeFiles/numEven.dir/build.make
numEven.exe: CMakeFiles/numEven.dir/linklibs.rsp
numEven.exe: CMakeFiles/numEven.dir/objects1.rsp
numEven.exe: CMakeFiles/numEven.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\University\Year 1\Spring\CoSc 121\numEven\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable numEven.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\numEven.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/numEven.dir/build: numEven.exe

.PHONY : CMakeFiles/numEven.dir/build

CMakeFiles/numEven.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\numEven.dir\cmake_clean.cmake
.PHONY : CMakeFiles/numEven.dir/clean

CMakeFiles/numEven.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\University\Year 1\Spring\CoSc 121\numEven" "D:\University\Year 1\Spring\CoSc 121\numEven" "D:\University\Year 1\Spring\CoSc 121\numEven\cmake-build-debug" "D:\University\Year 1\Spring\CoSc 121\numEven\cmake-build-debug" "D:\University\Year 1\Spring\CoSc 121\numEven\cmake-build-debug\CMakeFiles\numEven.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/numEven.dir/depend
