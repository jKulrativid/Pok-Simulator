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
include base/CMakeFiles/base.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include base/CMakeFiles/base.dir/compiler_depend.make

# Include the progress variables for this target.
include base/CMakeFiles/base.dir/progress.make

# Include the compile flags for this target's objects.
include base/CMakeFiles/base.dir/flags.make

base/CMakeFiles/base.dir/card.cpp.obj: base/CMakeFiles/base.dir/flags.make
base/CMakeFiles/base.dir/card.cpp.obj: base/CMakeFiles/base.dir/includes_CXX.rsp
base/CMakeFiles/base.dir/card.cpp.obj: C:/Users/user/ProjeXt/pok-simulator/simulation/src/base/card.cpp
base/CMakeFiles/base.dir/card.cpp.obj: base/CMakeFiles/base.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object base/CMakeFiles/base.dir/card.cpp.obj"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\base && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT base/CMakeFiles/base.dir/card.cpp.obj -MF CMakeFiles\base.dir\card.cpp.obj.d -o CMakeFiles\base.dir\card.cpp.obj -c C:\Users\user\ProjeXt\pok-simulator\simulation\src\base\card.cpp

base/CMakeFiles/base.dir/card.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base.dir/card.cpp.i"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\base && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user\ProjeXt\pok-simulator\simulation\src\base\card.cpp > CMakeFiles\base.dir\card.cpp.i

base/CMakeFiles/base.dir/card.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base.dir/card.cpp.s"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\base && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user\ProjeXt\pok-simulator\simulation\src\base\card.cpp -o CMakeFiles\base.dir\card.cpp.s

# Object files for target base
base_OBJECTS = \
"CMakeFiles/base.dir/card.cpp.obj"

# External object files for target base
base_EXTERNAL_OBJECTS =

base/libbase.a: base/CMakeFiles/base.dir/card.cpp.obj
base/libbase.a: base/CMakeFiles/base.dir/build.make
base/libbase.a: base/CMakeFiles/base.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libbase.a"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\base && $(CMAKE_COMMAND) -P CMakeFiles\base.dir\cmake_clean_target.cmake
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\base && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\base.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
base/CMakeFiles/base.dir/build: base/libbase.a
.PHONY : base/CMakeFiles/base.dir/build

base/CMakeFiles/base.dir/clean:
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\base && $(CMAKE_COMMAND) -P CMakeFiles\base.dir\cmake_clean.cmake
.PHONY : base/CMakeFiles/base.dir/clean

base/CMakeFiles/base.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\ProjeXt\pok-simulator\simulation\src C:\Users\user\ProjeXt\pok-simulator\simulation\src\base C:\Users\user\ProjeXt\pok-simulator\build C:\Users\user\ProjeXt\pok-simulator\build\base C:\Users\user\ProjeXt\pok-simulator\build\base\CMakeFiles\base.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : base/CMakeFiles/base.dir/depend

