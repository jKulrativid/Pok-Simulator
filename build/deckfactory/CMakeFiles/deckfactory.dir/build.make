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
include deckfactory/CMakeFiles/deckfactory.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include deckfactory/CMakeFiles/deckfactory.dir/compiler_depend.make

# Include the progress variables for this target.
include deckfactory/CMakeFiles/deckfactory.dir/progress.make

# Include the compile flags for this target's objects.
include deckfactory/CMakeFiles/deckfactory.dir/flags.make

deckfactory/CMakeFiles/deckfactory.dir/deckfactory.cpp.obj: deckfactory/CMakeFiles/deckfactory.dir/flags.make
deckfactory/CMakeFiles/deckfactory.dir/deckfactory.cpp.obj: deckfactory/CMakeFiles/deckfactory.dir/includes_CXX.rsp
deckfactory/CMakeFiles/deckfactory.dir/deckfactory.cpp.obj: C:/Users/user/ProjeXt/pok-simulator/simulation/src/deckfactory/deckfactory.cpp
deckfactory/CMakeFiles/deckfactory.dir/deckfactory.cpp.obj: deckfactory/CMakeFiles/deckfactory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object deckfactory/CMakeFiles/deckfactory.dir/deckfactory.cpp.obj"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\deckfactory && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT deckfactory/CMakeFiles/deckfactory.dir/deckfactory.cpp.obj -MF CMakeFiles\deckfactory.dir\deckfactory.cpp.obj.d -o CMakeFiles\deckfactory.dir\deckfactory.cpp.obj -c C:\Users\user\ProjeXt\pok-simulator\simulation\src\deckfactory\deckfactory.cpp

deckfactory/CMakeFiles/deckfactory.dir/deckfactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/deckfactory.dir/deckfactory.cpp.i"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\deckfactory && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user\ProjeXt\pok-simulator\simulation\src\deckfactory\deckfactory.cpp > CMakeFiles\deckfactory.dir\deckfactory.cpp.i

deckfactory/CMakeFiles/deckfactory.dir/deckfactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/deckfactory.dir/deckfactory.cpp.s"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\deckfactory && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user\ProjeXt\pok-simulator\simulation\src\deckfactory\deckfactory.cpp -o CMakeFiles\deckfactory.dir\deckfactory.cpp.s

# Object files for target deckfactory
deckfactory_OBJECTS = \
"CMakeFiles/deckfactory.dir/deckfactory.cpp.obj"

# External object files for target deckfactory
deckfactory_EXTERNAL_OBJECTS =

deckfactory/libdeckfactory.a: deckfactory/CMakeFiles/deckfactory.dir/deckfactory.cpp.obj
deckfactory/libdeckfactory.a: deckfactory/CMakeFiles/deckfactory.dir/build.make
deckfactory/libdeckfactory.a: deckfactory/CMakeFiles/deckfactory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libdeckfactory.a"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\deckfactory && $(CMAKE_COMMAND) -P CMakeFiles\deckfactory.dir\cmake_clean_target.cmake
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\deckfactory && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\deckfactory.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
deckfactory/CMakeFiles/deckfactory.dir/build: deckfactory/libdeckfactory.a
.PHONY : deckfactory/CMakeFiles/deckfactory.dir/build

deckfactory/CMakeFiles/deckfactory.dir/clean:
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\deckfactory && $(CMAKE_COMMAND) -P CMakeFiles\deckfactory.dir\cmake_clean.cmake
.PHONY : deckfactory/CMakeFiles/deckfactory.dir/clean

deckfactory/CMakeFiles/deckfactory.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\ProjeXt\pok-simulator\simulation\src C:\Users\user\ProjeXt\pok-simulator\simulation\src\deckfactory C:\Users\user\ProjeXt\pok-simulator\build C:\Users\user\ProjeXt\pok-simulator\build\deckfactory C:\Users\user\ProjeXt\pok-simulator\build\deckfactory\CMakeFiles\deckfactory.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : deckfactory/CMakeFiles/deckfactory.dir/depend

