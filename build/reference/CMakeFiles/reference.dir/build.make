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
include reference/CMakeFiles/reference.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include reference/CMakeFiles/reference.dir/compiler_depend.make

# Include the progress variables for this target.
include reference/CMakeFiles/reference.dir/progress.make

# Include the compile flags for this target's objects.
include reference/CMakeFiles/reference.dir/flags.make

reference/CMakeFiles/reference.dir/rank.cpp.obj: reference/CMakeFiles/reference.dir/flags.make
reference/CMakeFiles/reference.dir/rank.cpp.obj: reference/CMakeFiles/reference.dir/includes_CXX.rsp
reference/CMakeFiles/reference.dir/rank.cpp.obj: C:/Users/user/ProjeXt/pok-simulator/simulation/src/reference/rank.cpp
reference/CMakeFiles/reference.dir/rank.cpp.obj: reference/CMakeFiles/reference.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object reference/CMakeFiles/reference.dir/rank.cpp.obj"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\reference && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT reference/CMakeFiles/reference.dir/rank.cpp.obj -MF CMakeFiles\reference.dir\rank.cpp.obj.d -o CMakeFiles\reference.dir\rank.cpp.obj -c C:\Users\user\ProjeXt\pok-simulator\simulation\src\reference\rank.cpp

reference/CMakeFiles/reference.dir/rank.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reference.dir/rank.cpp.i"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\reference && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user\ProjeXt\pok-simulator\simulation\src\reference\rank.cpp > CMakeFiles\reference.dir\rank.cpp.i

reference/CMakeFiles/reference.dir/rank.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reference.dir/rank.cpp.s"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\reference && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user\ProjeXt\pok-simulator\simulation\src\reference\rank.cpp -o CMakeFiles\reference.dir\rank.cpp.s

# Object files for target reference
reference_OBJECTS = \
"CMakeFiles/reference.dir/rank.cpp.obj"

# External object files for target reference
reference_EXTERNAL_OBJECTS =

reference/libreference.a: reference/CMakeFiles/reference.dir/rank.cpp.obj
reference/libreference.a: reference/CMakeFiles/reference.dir/build.make
reference/libreference.a: reference/CMakeFiles/reference.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libreference.a"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\reference && $(CMAKE_COMMAND) -P CMakeFiles\reference.dir\cmake_clean_target.cmake
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\reference && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\reference.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
reference/CMakeFiles/reference.dir/build: reference/libreference.a
.PHONY : reference/CMakeFiles/reference.dir/build

reference/CMakeFiles/reference.dir/clean:
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\reference && $(CMAKE_COMMAND) -P CMakeFiles\reference.dir\cmake_clean.cmake
.PHONY : reference/CMakeFiles/reference.dir/clean

reference/CMakeFiles/reference.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\ProjeXt\pok-simulator\simulation\src C:\Users\user\ProjeXt\pok-simulator\simulation\src\reference C:\Users\user\ProjeXt\pok-simulator\build C:\Users\user\ProjeXt\pok-simulator\build\reference C:\Users\user\ProjeXt\pok-simulator\build\reference\CMakeFiles\reference.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : reference/CMakeFiles/reference.dir/depend

