# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\cMake\bin\cmake.exe

# The command to remove a file.
RM = C:\cMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\user\ProjeXt\pok-simulator\simulation\src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\user\ProjeXt\pok-simulator\build

# Include any dependencies generated for this target.
include test/CMakeFiles/test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/test.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/test.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/test.dir/flags.make

test/CMakeFiles/test.dir/referencetest.cpp.obj: test/CMakeFiles/test.dir/flags.make
test/CMakeFiles/test.dir/referencetest.cpp.obj: test/CMakeFiles/test.dir/includes_CXX.rsp
test/CMakeFiles/test.dir/referencetest.cpp.obj: C:/Users/user/ProjeXt/pok-simulator/simulation/src/test/referencetest.cpp
test/CMakeFiles/test.dir/referencetest.cpp.obj: test/CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/test.dir/referencetest.cpp.obj"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\test && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/test.dir/referencetest.cpp.obj -MF CMakeFiles\test.dir\referencetest.cpp.obj.d -o CMakeFiles\test.dir\referencetest.cpp.obj -c C:\Users\user\ProjeXt\pok-simulator\simulation\src\test\referencetest.cpp

test/CMakeFiles/test.dir/referencetest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test.dir/referencetest.cpp.i"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\test && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user\ProjeXt\pok-simulator\simulation\src\test\referencetest.cpp > CMakeFiles\test.dir\referencetest.cpp.i

test/CMakeFiles/test.dir/referencetest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test.dir/referencetest.cpp.s"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\test && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user\ProjeXt\pok-simulator\simulation\src\test\referencetest.cpp -o CMakeFiles\test.dir\referencetest.cpp.s

test/CMakeFiles/test.dir/basetest.cpp.obj: test/CMakeFiles/test.dir/flags.make
test/CMakeFiles/test.dir/basetest.cpp.obj: test/CMakeFiles/test.dir/includes_CXX.rsp
test/CMakeFiles/test.dir/basetest.cpp.obj: C:/Users/user/ProjeXt/pok-simulator/simulation/src/test/basetest.cpp
test/CMakeFiles/test.dir/basetest.cpp.obj: test/CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/test.dir/basetest.cpp.obj"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\test && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/test.dir/basetest.cpp.obj -MF CMakeFiles\test.dir\basetest.cpp.obj.d -o CMakeFiles\test.dir\basetest.cpp.obj -c C:\Users\user\ProjeXt\pok-simulator\simulation\src\test\basetest.cpp

test/CMakeFiles/test.dir/basetest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test.dir/basetest.cpp.i"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\test && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user\ProjeXt\pok-simulator\simulation\src\test\basetest.cpp > CMakeFiles\test.dir\basetest.cpp.i

test/CMakeFiles/test.dir/basetest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test.dir/basetest.cpp.s"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\test && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user\ProjeXt\pok-simulator\simulation\src\test\basetest.cpp -o CMakeFiles\test.dir\basetest.cpp.s

# Object files for target test
test_OBJECTS = \
"CMakeFiles/test.dir/referencetest.cpp.obj" \
"CMakeFiles/test.dir/basetest.cpp.obj"

# External object files for target test
test_EXTERNAL_OBJECTS =

test/libtest.a: test/CMakeFiles/test.dir/referencetest.cpp.obj
test/libtest.a: test/CMakeFiles/test.dir/basetest.cpp.obj
test/libtest.a: test/CMakeFiles/test.dir/build.make
test/libtest.a: test/CMakeFiles/test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libtest.a"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\test && $(CMAKE_COMMAND) -P CMakeFiles\test.dir\cmake_clean_target.cmake
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/test.dir/build: test/libtest.a
.PHONY : test/CMakeFiles/test.dir/build

test/CMakeFiles/test.dir/clean:
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\test && $(CMAKE_COMMAND) -P CMakeFiles\test.dir\cmake_clean.cmake
.PHONY : test/CMakeFiles/test.dir/clean

test/CMakeFiles/test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\ProjeXt\pok-simulator\simulation\src C:\Users\user\ProjeXt\pok-simulator\simulation\src\test C:\Users\user\ProjeXt\pok-simulator\build C:\Users\user\ProjeXt\pok-simulator\build\test C:\Users\user\ProjeXt\pok-simulator\build\test\CMakeFiles\test.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/test.dir/depend

