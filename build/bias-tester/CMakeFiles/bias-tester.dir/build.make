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
include bias-tester/CMakeFiles/bias-tester.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include bias-tester/CMakeFiles/bias-tester.dir/compiler_depend.make

# Include the progress variables for this target.
include bias-tester/CMakeFiles/bias-tester.dir/progress.make

# Include the compile flags for this target's objects.
include bias-tester/CMakeFiles/bias-tester.dir/flags.make

bias-tester/CMakeFiles/bias-tester.dir/biastester.cpp.obj: bias-tester/CMakeFiles/bias-tester.dir/flags.make
bias-tester/CMakeFiles/bias-tester.dir/biastester.cpp.obj: bias-tester/CMakeFiles/bias-tester.dir/includes_CXX.rsp
bias-tester/CMakeFiles/bias-tester.dir/biastester.cpp.obj: C:/Users/user/ProjeXt/pok-simulator/simulation/src/bias-tester/biastester.cpp
bias-tester/CMakeFiles/bias-tester.dir/biastester.cpp.obj: bias-tester/CMakeFiles/bias-tester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object bias-tester/CMakeFiles/bias-tester.dir/biastester.cpp.obj"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\bias-tester && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT bias-tester/CMakeFiles/bias-tester.dir/biastester.cpp.obj -MF CMakeFiles\bias-tester.dir\biastester.cpp.obj.d -o CMakeFiles\bias-tester.dir\biastester.cpp.obj -c C:\Users\user\ProjeXt\pok-simulator\simulation\src\bias-tester\biastester.cpp

bias-tester/CMakeFiles/bias-tester.dir/biastester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bias-tester.dir/biastester.cpp.i"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\bias-tester && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user\ProjeXt\pok-simulator\simulation\src\bias-tester\biastester.cpp > CMakeFiles\bias-tester.dir\biastester.cpp.i

bias-tester/CMakeFiles/bias-tester.dir/biastester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bias-tester.dir/biastester.cpp.s"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\bias-tester && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user\ProjeXt\pok-simulator\simulation\src\bias-tester\biastester.cpp -o CMakeFiles\bias-tester.dir\biastester.cpp.s

# Object files for target bias-tester
bias__tester_OBJECTS = \
"CMakeFiles/bias-tester.dir/biastester.cpp.obj"

# External object files for target bias-tester
bias__tester_EXTERNAL_OBJECTS =

bias-tester/libbias-tester.a: bias-tester/CMakeFiles/bias-tester.dir/biastester.cpp.obj
bias-tester/libbias-tester.a: bias-tester/CMakeFiles/bias-tester.dir/build.make
bias-tester/libbias-tester.a: bias-tester/CMakeFiles/bias-tester.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libbias-tester.a"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\bias-tester && $(CMAKE_COMMAND) -P CMakeFiles\bias-tester.dir\cmake_clean_target.cmake
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\bias-tester && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bias-tester.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
bias-tester/CMakeFiles/bias-tester.dir/build: bias-tester/libbias-tester.a
.PHONY : bias-tester/CMakeFiles/bias-tester.dir/build

bias-tester/CMakeFiles/bias-tester.dir/clean:
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\bias-tester && $(CMAKE_COMMAND) -P CMakeFiles\bias-tester.dir\cmake_clean.cmake
.PHONY : bias-tester/CMakeFiles/bias-tester.dir/clean

bias-tester/CMakeFiles/bias-tester.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\ProjeXt\pok-simulator\simulation\src C:\Users\user\ProjeXt\pok-simulator\simulation\src\bias-tester C:\Users\user\ProjeXt\pok-simulator\build C:\Users\user\ProjeXt\pok-simulator\build\bias-tester C:\Users\user\ProjeXt\pok-simulator\build\bias-tester\CMakeFiles\bias-tester.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : bias-tester/CMakeFiles/bias-tester.dir/depend

