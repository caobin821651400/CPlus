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
include CMakeFiles/android.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/android.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/android.dir/flags.make

CMakeFiles/android.dir/com_example_cb_test_NativeClass.c.obj: CMakeFiles/android.dir/flags.make
CMakeFiles/android.dir/com_example_cb_test_NativeClass.c.obj: ../com_example_cb_test_NativeClass.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CPlae\NativeTest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/android.dir/com_example_cb_test_NativeClass.c.obj"
	E:\aaaaaa\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\android.dir\com_example_cb_test_NativeClass.c.obj   -c E:\CPlae\NativeTest\com_example_cb_test_NativeClass.c

CMakeFiles/android.dir/com_example_cb_test_NativeClass.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/android.dir/com_example_cb_test_NativeClass.c.i"
	E:\aaaaaa\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\CPlae\NativeTest\com_example_cb_test_NativeClass.c > CMakeFiles\android.dir\com_example_cb_test_NativeClass.c.i

CMakeFiles/android.dir/com_example_cb_test_NativeClass.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/android.dir/com_example_cb_test_NativeClass.c.s"
	E:\aaaaaa\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\CPlae\NativeTest\com_example_cb_test_NativeClass.c -o CMakeFiles\android.dir\com_example_cb_test_NativeClass.c.s

# Object files for target android
android_OBJECTS = \
"CMakeFiles/android.dir/com_example_cb_test_NativeClass.c.obj"

# External object files for target android
android_EXTERNAL_OBJECTS =

libandroid.dll: CMakeFiles/android.dir/com_example_cb_test_NativeClass.c.obj
libandroid.dll: CMakeFiles/android.dir/build.make
libandroid.dll: CMakeFiles/android.dir/linklibs.rsp
libandroid.dll: CMakeFiles/android.dir/objects1.rsp
libandroid.dll: CMakeFiles/android.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CPlae\NativeTest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library libandroid.dll"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\android.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/android.dir/build: libandroid.dll

.PHONY : CMakeFiles/android.dir/build

CMakeFiles/android.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\android.dir\cmake_clean.cmake
.PHONY : CMakeFiles/android.dir/clean

CMakeFiles/android.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CPlae\NativeTest E:\CPlae\NativeTest E:\CPlae\NativeTest\cmake-build-debug E:\CPlae\NativeTest\cmake-build-debug E:\CPlae\NativeTest\cmake-build-debug\CMakeFiles\android.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/android.dir/depend

