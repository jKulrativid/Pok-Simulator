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
include finance/CMakeFiles/finance.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include finance/CMakeFiles/finance.dir/compiler_depend.make

# Include the progress variables for this target.
include finance/CMakeFiles/finance.dir/progress.make

# Include the compile flags for this target's objects.
include finance/CMakeFiles/finance.dir/flags.make

finance/CMakeFiles/finance.dir/finance.cpp.obj: finance/CMakeFiles/finance.dir/flags.make
finance/CMakeFiles/finance.dir/finance.cpp.obj: finance/CMakeFiles/finance.dir/includes_CXX.rsp
finance/CMakeFiles/finance.dir/finance.cpp.obj: C:/Users/user/ProjeXt/pok-simulator/simulation/src/finance/finance.cpp
finance/CMakeFiles/finance.dir/finance.cpp.obj: finance/CMakeFiles/finance.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object finance/CMakeFiles/finance.dir/finance.cpp.obj"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\finance && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT finance/CMakeFiles/finance.dir/finance.cpp.obj -MF CMakeFiles\finance.dir\finance.cpp.obj.d -o CMakeFiles\finance.dir\finance.cpp.obj -c C:\Users\user\ProjeXt\pok-simulator\simulation\src\finance\finance.cpp

finance/CMakeFiles/finance.dir/finance.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/finance.dir/finance.cpp.i"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\finance && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user\ProjeXt\pok-simulator\simulation\src\finance\finance.cpp > CMakeFiles\finance.dir\finance.cpp.i

finance/CMakeFiles/finance.dir/finance.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/finance.dir/finance.cpp.s"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\finance && C:\Mingw_64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user\ProjeXt\pok-simulator\simulation\src\finance\finance.cpp -o CMakeFiles\finance.dir\finance.cpp.s

# Object files for target finance
finance_OBJECTS = \
"CMakeFiles/finance.dir/finance.cpp.obj"

# External object files for target finance
finance_EXTERNAL_OBJECTS =

finance/libfinance.a: finance/CMakeFiles/finance.dir/finance.cpp.obj
finance/libfinance.a: finance/CMakeFiles/finance.dir/build.make
finance/libfinance.a: finance/CMakeFiles/finance.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\ProjeXt\pok-simulator\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libfinance.a"
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\finance && $(CMAKE_COMMAND) -P CMakeFiles\finance.dir\cmake_clean_target.cmake
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\finance && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\finance.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
finance/CMakeFiles/finance.dir/build: finance/libfinance.a
.PHONY : finance/CMakeFiles/finance.dir/build

finance/CMakeFiles/finance.dir/clean:
	cd /d C:\Users\user\ProjeXt\pok-simulator\build\finance && $(CMAKE_COMMAND) -P CMakeFiles\finance.dir\cmake_clean.cmake
.PHONY : finance/CMakeFiles/finance.dir/clean

finance/CMakeFiles/finance.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\ProjeXt\pok-simulator\simulation\src C:\Users\user\ProjeXt\pok-simulator\simulation\src\finance C:\Users\user\ProjeXt\pok-simulator\build C:\Users\user\ProjeXt\pok-simulator\build\finance C:\Users\user\ProjeXt\pok-simulator\build\finance\CMakeFiles\finance.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : finance/CMakeFiles/finance.dir/depend

