# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspaces/learn-git

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/learn-git/build

# Include any dependencies generated for this target.
include CMakeFiles/basics_in_Cpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/basics_in_Cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/basics_in_Cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/basics_in_Cpp.dir/flags.make

CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.o: CMakeFiles/basics_in_Cpp.dir/flags.make
CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.o: /workspaces/learn-git/c++/HA3.cpp
CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.o: CMakeFiles/basics_in_Cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/learn-git/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.o -MF CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.o.d -o CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.o -c /workspaces/learn-git/c++/HA3.cpp

CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/learn-git/c++/HA3.cpp > CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.i

CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/learn-git/c++/HA3.cpp -o CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.s

# Object files for target basics_in_Cpp
basics_in_Cpp_OBJECTS = \
"CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.o"

# External object files for target basics_in_Cpp
basics_in_Cpp_EXTERNAL_OBJECTS =

basics_in_Cpp: CMakeFiles/basics_in_Cpp.dir/c++/HA3.cpp.o
basics_in_Cpp: CMakeFiles/basics_in_Cpp.dir/build.make
basics_in_Cpp: CMakeFiles/basics_in_Cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/learn-git/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable basics_in_Cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/basics_in_Cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/basics_in_Cpp.dir/build: basics_in_Cpp
.PHONY : CMakeFiles/basics_in_Cpp.dir/build

CMakeFiles/basics_in_Cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/basics_in_Cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/basics_in_Cpp.dir/clean

CMakeFiles/basics_in_Cpp.dir/depend:
	cd /workspaces/learn-git/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/learn-git /workspaces/learn-git /workspaces/learn-git/build /workspaces/learn-git/build /workspaces/learn-git/build/CMakeFiles/basics_in_Cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/basics_in_Cpp.dir/depend

