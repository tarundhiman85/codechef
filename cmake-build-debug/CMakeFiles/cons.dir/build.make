# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Tarun Dhiman\OneDrive\Programming\Codechef"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Tarun Dhiman\OneDrive\Programming\Codechef\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/cons.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cons.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cons.dir/flags.make

CMakeFiles/cons.dir/consecutiveAdding.cpp.obj: CMakeFiles/cons.dir/flags.make
CMakeFiles/cons.dir/consecutiveAdding.cpp.obj: ../consecutiveAdding.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Tarun Dhiman\OneDrive\Programming\Codechef\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cons.dir/consecutiveAdding.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cons.dir\consecutiveAdding.cpp.obj -c "C:\Users\Tarun Dhiman\OneDrive\Programming\Codechef\consecutiveAdding.cpp"

CMakeFiles/cons.dir/consecutiveAdding.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cons.dir/consecutiveAdding.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Tarun Dhiman\OneDrive\Programming\Codechef\consecutiveAdding.cpp" > CMakeFiles\cons.dir\consecutiveAdding.cpp.i

CMakeFiles/cons.dir/consecutiveAdding.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cons.dir/consecutiveAdding.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Tarun Dhiman\OneDrive\Programming\Codechef\consecutiveAdding.cpp" -o CMakeFiles\cons.dir\consecutiveAdding.cpp.s

# Object files for target cons
cons_OBJECTS = \
"CMakeFiles/cons.dir/consecutiveAdding.cpp.obj"

# External object files for target cons
cons_EXTERNAL_OBJECTS =

cons.exe: CMakeFiles/cons.dir/consecutiveAdding.cpp.obj
cons.exe: CMakeFiles/cons.dir/build.make
cons.exe: CMakeFiles/cons.dir/linklibs.rsp
cons.exe: CMakeFiles/cons.dir/objects1.rsp
cons.exe: CMakeFiles/cons.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Tarun Dhiman\OneDrive\Programming\Codechef\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cons.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cons.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cons.dir/build: cons.exe

.PHONY : CMakeFiles/cons.dir/build

CMakeFiles/cons.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cons.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cons.dir/clean

CMakeFiles/cons.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Tarun Dhiman\OneDrive\Programming\Codechef" "C:\Users\Tarun Dhiman\OneDrive\Programming\Codechef" "C:\Users\Tarun Dhiman\OneDrive\Programming\Codechef\cmake-build-debug" "C:\Users\Tarun Dhiman\OneDrive\Programming\Codechef\cmake-build-debug" "C:\Users\Tarun Dhiman\OneDrive\Programming\Codechef\cmake-build-debug\CMakeFiles\cons.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/cons.dir/depend
