# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\-Pc-\CLionProjects\BSTree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\-Pc-\CLionProjects\BSTree\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BSTree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BSTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BSTree.dir/flags.make

CMakeFiles/BSTree.dir/main.c.obj: CMakeFiles/BSTree.dir/flags.make
CMakeFiles/BSTree.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\-Pc-\CLionProjects\BSTree\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BSTree.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\BSTree.dir\main.c.obj   -c C:\Users\-Pc-\CLionProjects\BSTree\main.c

CMakeFiles/BSTree.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BSTree.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\-Pc-\CLionProjects\BSTree\main.c > CMakeFiles\BSTree.dir\main.c.i

CMakeFiles/BSTree.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BSTree.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\-Pc-\CLionProjects\BSTree\main.c -o CMakeFiles\BSTree.dir\main.c.s

CMakeFiles/BSTree.dir/main.c.obj.requires:

.PHONY : CMakeFiles/BSTree.dir/main.c.obj.requires

CMakeFiles/BSTree.dir/main.c.obj.provides: CMakeFiles/BSTree.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\BSTree.dir\build.make CMakeFiles/BSTree.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/BSTree.dir/main.c.obj.provides

CMakeFiles/BSTree.dir/main.c.obj.provides.build: CMakeFiles/BSTree.dir/main.c.obj


# Object files for target BSTree
BSTree_OBJECTS = \
"CMakeFiles/BSTree.dir/main.c.obj"

# External object files for target BSTree
BSTree_EXTERNAL_OBJECTS =

BSTree.exe: CMakeFiles/BSTree.dir/main.c.obj
BSTree.exe: CMakeFiles/BSTree.dir/build.make
BSTree.exe: CMakeFiles/BSTree.dir/linklibs.rsp
BSTree.exe: CMakeFiles/BSTree.dir/objects1.rsp
BSTree.exe: CMakeFiles/BSTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\-Pc-\CLionProjects\BSTree\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BSTree.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BSTree.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BSTree.dir/build: BSTree.exe

.PHONY : CMakeFiles/BSTree.dir/build

CMakeFiles/BSTree.dir/requires: CMakeFiles/BSTree.dir/main.c.obj.requires

.PHONY : CMakeFiles/BSTree.dir/requires

CMakeFiles/BSTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BSTree.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BSTree.dir/clean

CMakeFiles/BSTree.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\-Pc-\CLionProjects\BSTree C:\Users\-Pc-\CLionProjects\BSTree C:\Users\-Pc-\CLionProjects\BSTree\cmake-build-debug C:\Users\-Pc-\CLionProjects\BSTree\cmake-build-debug C:\Users\-Pc-\CLionProjects\BSTree\cmake-build-debug\CMakeFiles\BSTree.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BSTree.dir/depend

