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
CMAKE_COMMAND = /cygdrive/c/Users/wwalt/.CLion2017.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/wwalt/.CLion2017.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/wwalt/CLionProjects/CodingH2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/wwalt/CLionProjects/CodingH2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CodingH2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CodingH2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CodingH2.dir/flags.make

CMakeFiles/CodingH2.dir/main.cpp.o: CMakeFiles/CodingH2.dir/flags.make
CMakeFiles/CodingH2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/wwalt/CLionProjects/CodingH2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CodingH2.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodingH2.dir/main.cpp.o -c /cygdrive/c/Users/wwalt/CLionProjects/CodingH2/main.cpp

CMakeFiles/CodingH2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodingH2.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/wwalt/CLionProjects/CodingH2/main.cpp > CMakeFiles/CodingH2.dir/main.cpp.i

CMakeFiles/CodingH2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodingH2.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/wwalt/CLionProjects/CodingH2/main.cpp -o CMakeFiles/CodingH2.dir/main.cpp.s

CMakeFiles/CodingH2.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/CodingH2.dir/main.cpp.o.requires

CMakeFiles/CodingH2.dir/main.cpp.o.provides: CMakeFiles/CodingH2.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/CodingH2.dir/build.make CMakeFiles/CodingH2.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/CodingH2.dir/main.cpp.o.provides

CMakeFiles/CodingH2.dir/main.cpp.o.provides.build: CMakeFiles/CodingH2.dir/main.cpp.o


# Object files for target CodingH2
CodingH2_OBJECTS = \
"CMakeFiles/CodingH2.dir/main.cpp.o"

# External object files for target CodingH2
CodingH2_EXTERNAL_OBJECTS =

CodingH2.exe: CMakeFiles/CodingH2.dir/main.cpp.o
CodingH2.exe: CMakeFiles/CodingH2.dir/build.make
CodingH2.exe: CMakeFiles/CodingH2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/wwalt/CLionProjects/CodingH2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CodingH2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CodingH2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CodingH2.dir/build: CodingH2.exe

.PHONY : CMakeFiles/CodingH2.dir/build

CMakeFiles/CodingH2.dir/requires: CMakeFiles/CodingH2.dir/main.cpp.o.requires

.PHONY : CMakeFiles/CodingH2.dir/requires

CMakeFiles/CodingH2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CodingH2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CodingH2.dir/clean

CMakeFiles/CodingH2.dir/depend:
	cd /cygdrive/c/Users/wwalt/CLionProjects/CodingH2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/wwalt/CLionProjects/CodingH2 /cygdrive/c/Users/wwalt/CLionProjects/CodingH2 /cygdrive/c/Users/wwalt/CLionProjects/CodingH2/cmake-build-debug /cygdrive/c/Users/wwalt/CLionProjects/CodingH2/cmake-build-debug /cygdrive/c/Users/wwalt/CLionProjects/CodingH2/cmake-build-debug/CMakeFiles/CodingH2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CodingH2.dir/depend
