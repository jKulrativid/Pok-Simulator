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
include test/CMakeFiles/shuffle-test-efficiency.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/shuffle-test-efficiency.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/shuffle-test-efficiency.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/shuffle-test-efficiency.dir/flags.make

test/CMakeFiles/shuffle-test-efficiency.dir/shuffle_eff_test.cpp.obj: test/CMakeFiles/shuffle-test-efficiency.dir/flags.make
test/CMakeFiles/shuffle-test-efficiency.dir/shuffle_eff_test.cpp.obj: test/CMakeFiles/shuffle-test-efficiency.dir/includes_CXX.rsp
test/CMakeFiles/shuffle-test-efficiency.dir/shuffle_eff_test.cpp.obj: C:/Users/user/ProjeXt/pok-simulator/simulation/src/test/shuffle_eff_test.cpp
test/CMakeFiles/shuffle-test-efficiency.dir/shuffle_eff_test.cpp.obj: test/CMakeFiles/shuffle-test-efficiency.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/shuffle-test-efficiency.dir/shuffle_eff_test.cpp.obj"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\test && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/shuffle-test-efficiency.dir/shuffle_eff_test.cpp.obj -MF CMakeFiles\shuffle-test-efficiency.dir\shuffle_eff_test.cpp.obj.d -o CMakeFiles\shuffle-test-efficiency.dir\shuffle_eff_test.cpp.obj -c C:\Users\user\ProjeXt\pok-simulator\simulation\src\test\shuffle_eff_test.cpp

test/CMakeFiles/shuffle-test-efficiency.dir/shuffle_eff_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shuffle-test-efficiency.dir/shuffle_eff_test.cpp.i"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\test && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user\ProjeXt\pok-simulator\simulation\src\test\shuffle_eff_test.cpp > CMakeFiles\shuffle-test-efficiency.dir\shuffle_eff_test.cpp.i

test/CMakeFiles/shuffle-test-efficiency.dir/shuffle_eff_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shuffle-test-efficiency.dir/shuffle_eff_test.cpp.s"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\test && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user\ProjeXt\pok-simulator\simulation\src\test\shuffle_eff_test.cpp -o CMakeFiles\shuffle-test-efficiency.dir\shuffle_eff_test.cpp.s

# Object files for target shuffle-test-efficiency
shuffle__test__efficiency_OBJECTS = \
"CMakeFiles/shuffle-test-efficiency.dir/shuffle_eff_test.cpp.obj"

# External object files for target shuffle-test-efficiency
shuffle__test__efficiency_EXTERNAL_OBJECTS =

test/shuffle-test-efficiency.exe: test/CMakeFiles/shuffle-test-efficiency.dir/shuffle_eff_test.cpp.obj
test/shuffle-test-efficiency.exe: test/CMakeFiles/shuffle-test-efficiency.dir/build.make
test/shuffle-test-efficiency.exe: base/libbase.a
test/shuffle-test-efficiency.exe: factory/libdeckfactory.a
test/shuffle-test-efficiency.exe: base/libbase.a
test/shuffle-test-efficiency.exe: test/CMakeFiles/shuffle-test-efficiency.dir/linklibs.rsp
test/shuffle-test-efficiency.exe: test/CMakeFiles/shuffle-test-efficiency.dir/objects1.rsp
test/shuffle-test-efficiency.exe: test/CMakeFiles/shuffle-test-efficiency.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable shuffle-test-efficiency.exe"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\shuffle-test-efficiency.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/shuffle-test-efficiency.dir/build: test/shuffle-test-efficiency.exe
.PHONY : test/CMakeFiles/shuffle-test-efficiency.dir/build

test/CMakeFiles/shuffle-test-efficiency.dir/clean:
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\test && $(CMAKE_COMMAND) -P CMakeFiles\shuffle-test-efficiency.dir\cmake_clean.cmake
.PHONY : test/CMakeFiles/shuffle-test-efficiency.dir/clean

test/CMakeFiles/shuffle-test-efficiency.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\ProjeXt\pok-simulator\simulation\src C:\Users\user\ProjeXt\pok-simulator\simulation\src\test C:\Users\user\ProjeXt\pok-simulator\build C:\Users\user\ProjeXt\pok-simulator\build\test C:\Users\user\ProjeXt\pok-simulator\build\test\CMakeFiles\shuffle-test-efficiency.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/shuffle-test-efficiency.dir/depend

