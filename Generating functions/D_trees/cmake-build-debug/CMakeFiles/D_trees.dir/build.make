# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/tina/Documents/ITMO/CT/DM/Generating functions/D_trees"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/tina/Documents/ITMO/CT/DM/Generating functions/D_trees/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/D_trees.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/D_trees.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/D_trees.dir/flags.make

CMakeFiles/D_trees.dir/main.cpp.o: CMakeFiles/D_trees.dir/flags.make
CMakeFiles/D_trees.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/tina/Documents/ITMO/CT/DM/Generating functions/D_trees/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/D_trees.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/D_trees.dir/main.cpp.o -c "/Users/tina/Documents/ITMO/CT/DM/Generating functions/D_trees/main.cpp"

CMakeFiles/D_trees.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/D_trees.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/tina/Documents/ITMO/CT/DM/Generating functions/D_trees/main.cpp" > CMakeFiles/D_trees.dir/main.cpp.i

CMakeFiles/D_trees.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/D_trees.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/tina/Documents/ITMO/CT/DM/Generating functions/D_trees/main.cpp" -o CMakeFiles/D_trees.dir/main.cpp.s

CMakeFiles/D_trees.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/D_trees.dir/main.cpp.o.requires

CMakeFiles/D_trees.dir/main.cpp.o.provides: CMakeFiles/D_trees.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/D_trees.dir/build.make CMakeFiles/D_trees.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/D_trees.dir/main.cpp.o.provides

CMakeFiles/D_trees.dir/main.cpp.o.provides.build: CMakeFiles/D_trees.dir/main.cpp.o


# Object files for target D_trees
D_trees_OBJECTS = \
"CMakeFiles/D_trees.dir/main.cpp.o"

# External object files for target D_trees
D_trees_EXTERNAL_OBJECTS =

D_trees: CMakeFiles/D_trees.dir/main.cpp.o
D_trees: CMakeFiles/D_trees.dir/build.make
D_trees: CMakeFiles/D_trees.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/tina/Documents/ITMO/CT/DM/Generating functions/D_trees/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable D_trees"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/D_trees.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/D_trees.dir/build: D_trees

.PHONY : CMakeFiles/D_trees.dir/build

CMakeFiles/D_trees.dir/requires: CMakeFiles/D_trees.dir/main.cpp.o.requires

.PHONY : CMakeFiles/D_trees.dir/requires

CMakeFiles/D_trees.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/D_trees.dir/cmake_clean.cmake
.PHONY : CMakeFiles/D_trees.dir/clean

CMakeFiles/D_trees.dir/depend:
	cd "/Users/tina/Documents/ITMO/CT/DM/Generating functions/D_trees/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/tina/Documents/ITMO/CT/DM/Generating functions/D_trees" "/Users/tina/Documents/ITMO/CT/DM/Generating functions/D_trees" "/Users/tina/Documents/ITMO/CT/DM/Generating functions/D_trees/cmake-build-debug" "/Users/tina/Documents/ITMO/CT/DM/Generating functions/D_trees/cmake-build-debug" "/Users/tina/Documents/ITMO/CT/DM/Generating functions/D_trees/cmake-build-debug/CMakeFiles/D_trees.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/D_trees.dir/depend
