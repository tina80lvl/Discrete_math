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
CMAKE_SOURCE_DIR = "/Users/tina/Documents/ITMO/CT/DM/Generating functions/B_classes"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/tina/Documents/ITMO/CT/DM/Generating functions/B_classes/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/B_classes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/B_classes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/B_classes.dir/flags.make

CMakeFiles/B_classes.dir/main.cpp.o: CMakeFiles/B_classes.dir/flags.make
CMakeFiles/B_classes.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/tina/Documents/ITMO/CT/DM/Generating functions/B_classes/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/B_classes.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/B_classes.dir/main.cpp.o -c "/Users/tina/Documents/ITMO/CT/DM/Generating functions/B_classes/main.cpp"

CMakeFiles/B_classes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/B_classes.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/tina/Documents/ITMO/CT/DM/Generating functions/B_classes/main.cpp" > CMakeFiles/B_classes.dir/main.cpp.i

CMakeFiles/B_classes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/B_classes.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/tina/Documents/ITMO/CT/DM/Generating functions/B_classes/main.cpp" -o CMakeFiles/B_classes.dir/main.cpp.s

CMakeFiles/B_classes.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/B_classes.dir/main.cpp.o.requires

CMakeFiles/B_classes.dir/main.cpp.o.provides: CMakeFiles/B_classes.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/B_classes.dir/build.make CMakeFiles/B_classes.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/B_classes.dir/main.cpp.o.provides

CMakeFiles/B_classes.dir/main.cpp.o.provides.build: CMakeFiles/B_classes.dir/main.cpp.o


# Object files for target B_classes
B_classes_OBJECTS = \
"CMakeFiles/B_classes.dir/main.cpp.o"

# External object files for target B_classes
B_classes_EXTERNAL_OBJECTS =

B_classes: CMakeFiles/B_classes.dir/main.cpp.o
B_classes: CMakeFiles/B_classes.dir/build.make
B_classes: CMakeFiles/B_classes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/tina/Documents/ITMO/CT/DM/Generating functions/B_classes/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable B_classes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/B_classes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/B_classes.dir/build: B_classes

.PHONY : CMakeFiles/B_classes.dir/build

CMakeFiles/B_classes.dir/requires: CMakeFiles/B_classes.dir/main.cpp.o.requires

.PHONY : CMakeFiles/B_classes.dir/requires

CMakeFiles/B_classes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/B_classes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/B_classes.dir/clean

CMakeFiles/B_classes.dir/depend:
	cd "/Users/tina/Documents/ITMO/CT/DM/Generating functions/B_classes/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/tina/Documents/ITMO/CT/DM/Generating functions/B_classes" "/Users/tina/Documents/ITMO/CT/DM/Generating functions/B_classes" "/Users/tina/Documents/ITMO/CT/DM/Generating functions/B_classes/cmake-build-debug" "/Users/tina/Documents/ITMO/CT/DM/Generating functions/B_classes/cmake-build-debug" "/Users/tina/Documents/ITMO/CT/DM/Generating functions/B_classes/cmake-build-debug/CMakeFiles/B_classes.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/B_classes.dir/depend

