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
CMAKE_SOURCE_DIR = "/Users/tina/Documents/ITMO/CT/DM/Turing machine/G_less"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/tina/Documents/ITMO/CT/DM/Turing machine/G_less/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/G_less.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/G_less.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/G_less.dir/flags.make

CMakeFiles/G_less.dir/main.cpp.o: CMakeFiles/G_less.dir/flags.make
CMakeFiles/G_less.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/tina/Documents/ITMO/CT/DM/Turing machine/G_less/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/G_less.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G_less.dir/main.cpp.o -c "/Users/tina/Documents/ITMO/CT/DM/Turing machine/G_less/main.cpp"

CMakeFiles/G_less.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G_less.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/tina/Documents/ITMO/CT/DM/Turing machine/G_less/main.cpp" > CMakeFiles/G_less.dir/main.cpp.i

CMakeFiles/G_less.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G_less.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/tina/Documents/ITMO/CT/DM/Turing machine/G_less/main.cpp" -o CMakeFiles/G_less.dir/main.cpp.s

CMakeFiles/G_less.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/G_less.dir/main.cpp.o.requires

CMakeFiles/G_less.dir/main.cpp.o.provides: CMakeFiles/G_less.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/G_less.dir/build.make CMakeFiles/G_less.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/G_less.dir/main.cpp.o.provides

CMakeFiles/G_less.dir/main.cpp.o.provides.build: CMakeFiles/G_less.dir/main.cpp.o


# Object files for target G_less
G_less_OBJECTS = \
"CMakeFiles/G_less.dir/main.cpp.o"

# External object files for target G_less
G_less_EXTERNAL_OBJECTS =

G_less: CMakeFiles/G_less.dir/main.cpp.o
G_less: CMakeFiles/G_less.dir/build.make
G_less: CMakeFiles/G_less.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/tina/Documents/ITMO/CT/DM/Turing machine/G_less/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable G_less"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/G_less.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/G_less.dir/build: G_less

.PHONY : CMakeFiles/G_less.dir/build

CMakeFiles/G_less.dir/requires: CMakeFiles/G_less.dir/main.cpp.o.requires

.PHONY : CMakeFiles/G_less.dir/requires

CMakeFiles/G_less.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/G_less.dir/cmake_clean.cmake
.PHONY : CMakeFiles/G_less.dir/clean

CMakeFiles/G_less.dir/depend:
	cd "/Users/tina/Documents/ITMO/CT/DM/Turing machine/G_less/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/tina/Documents/ITMO/CT/DM/Turing machine/G_less" "/Users/tina/Documents/ITMO/CT/DM/Turing machine/G_less" "/Users/tina/Documents/ITMO/CT/DM/Turing machine/G_less/cmake-build-debug" "/Users/tina/Documents/ITMO/CT/DM/Turing machine/G_less/cmake-build-debug" "/Users/tina/Documents/ITMO/CT/DM/Turing machine/G_less/cmake-build-debug/CMakeFiles/G_less.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/G_less.dir/depend
