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
include CMakeFiles/stringLib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stringLib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stringLib.dir/flags.make

CMakeFiles/stringLib.dir/jni/StringTest.c.obj: CMakeFiles/stringLib.dir/flags.make
CMakeFiles/stringLib.dir/jni/StringTest.c.obj: ../jni/StringTest.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CPlae\NativeTest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/stringLib.dir/jni/StringTest.c.obj"
	E:\aaaaaa\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\stringLib.dir\jni\StringTest.c.obj   -c E:\CPlae\NativeTest\jni\StringTest.c

CMakeFiles/stringLib.dir/jni/StringTest.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/stringLib.dir/jni/StringTest.c.i"
	E:\aaaaaa\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\CPlae\NativeTest\jni\StringTest.c > CMakeFiles\stringLib.dir\jni\StringTest.c.i

CMakeFiles/stringLib.dir/jni/StringTest.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/stringLib.dir/jni/StringTest.c.s"
	E:\aaaaaa\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\CPlae\NativeTest\jni\StringTest.c -o CMakeFiles\stringLib.dir\jni\StringTest.c.s

# Object files for target stringLib
stringLib_OBJECTS = \
"CMakeFiles/stringLib.dir/jni/StringTest.c.obj"

# External object files for target stringLib
stringLib_EXTERNAL_OBJECTS =

libstringLib.dll: CMakeFiles/stringLib.dir/jni/StringTest.c.obj
libstringLib.dll: CMakeFiles/stringLib.dir/build.make
libstringLib.dll: CMakeFiles/stringLib.dir/linklibs.rsp
libstringLib.dll: CMakeFiles/stringLib.dir/objects1.rsp
libstringLib.dll: CMakeFiles/stringLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CPlae\NativeTest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library libstringLib.dll"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\stringLib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stringLib.dir/build: libstringLib.dll

.PHONY : CMakeFiles/stringLib.dir/build

CMakeFiles/stringLib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\stringLib.dir\cmake_clean.cmake
.PHONY : CMakeFiles/stringLib.dir/clean

CMakeFiles/stringLib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CPlae\NativeTest E:\CPlae\NativeTest E:\CPlae\NativeTest\cmake-build-debug E:\CPlae\NativeTest\cmake-build-debug E:\CPlae\NativeTest\cmake-build-debug\CMakeFiles\stringLib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stringLib.dir/depend

