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
CMAKE_COMMAND = "E:\aaaaaa\CLion\CLion 2020.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\aaaaaa\CLion\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\CPlae\NativeTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\CPlae\NativeTest\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/APP_SRC3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/APP_SRC3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/APP_SRC3.dir/flags.make

CMakeFiles/APP_SRC3.dir/cplus/yinyong2.cpp.obj: CMakeFiles/APP_SRC3.dir/flags.make
CMakeFiles/APP_SRC3.dir/cplus/yinyong2.cpp.obj: ../cplus/yinyong2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CPlae\NativeTest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/APP_SRC3.dir/cplus/yinyong2.cpp.obj"
	E:\aaaaaa\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\APP_SRC3.dir\cplus\yinyong2.cpp.obj -c E:\CPlae\NativeTest\cplus\yinyong2.cpp

CMakeFiles/APP_SRC3.dir/cplus/yinyong2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APP_SRC3.dir/cplus/yinyong2.cpp.i"
	E:\aaaaaa\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\CPlae\NativeTest\cplus\yinyong2.cpp > CMakeFiles\APP_SRC3.dir\cplus\yinyong2.cpp.i

CMakeFiles/APP_SRC3.dir/cplus/yinyong2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APP_SRC3.dir/cplus/yinyong2.cpp.s"
	E:\aaaaaa\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\CPlae\NativeTest\cplus\yinyong2.cpp -o CMakeFiles\APP_SRC3.dir\cplus\yinyong2.cpp.s

# Object files for target APP_SRC3
APP_SRC3_OBJECTS = \
"CMakeFiles/APP_SRC3.dir/cplus/yinyong2.cpp.obj"

# External object files for target APP_SRC3
APP_SRC3_EXTERNAL_OBJECTS =

APP_SRC3.exe: CMakeFiles/APP_SRC3.dir/cplus/yinyong2.cpp.obj
APP_SRC3.exe: CMakeFiles/APP_SRC3.dir/build.make
APP_SRC3.exe: CMakeFiles/APP_SRC3.dir/linklibs.rsp
APP_SRC3.exe: CMakeFiles/APP_SRC3.dir/objects1.rsp
APP_SRC3.exe: CMakeFiles/APP_SRC3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CPlae\NativeTest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable APP_SRC3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\APP_SRC3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/APP_SRC3.dir/build: APP_SRC3.exe

.PHONY : CMakeFiles/APP_SRC3.dir/build

CMakeFiles/APP_SRC3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\APP_SRC3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/APP_SRC3.dir/clean

CMakeFiles/APP_SRC3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CPlae\NativeTest E:\CPlae\NativeTest E:\CPlae\NativeTest\cmake-build-debug E:\CPlae\NativeTest\cmake-build-debug E:\CPlae\NativeTest\cmake-build-debug\CMakeFiles\APP_SRC3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/APP_SRC3.dir/depend
