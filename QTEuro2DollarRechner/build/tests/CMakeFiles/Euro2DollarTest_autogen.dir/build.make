# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\JoachimWagner\git\Atlas\atlas-tdd-cpp-mai-2022\QTEuro2DollarRechner

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\JoachimWagner\git\Atlas\atlas-tdd-cpp-mai-2022\QTEuro2DollarRechner\build

# Utility rule file for Euro2DollarTest_autogen.

# Include any custom commands dependencies for this target.
include tests/CMakeFiles/Euro2DollarTest_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/Euro2DollarTest_autogen.dir/progress.make

tests/CMakeFiles/Euro2DollarTest_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\JoachimWagner\git\Atlas\atlas-tdd-cpp-mai-2022\QTEuro2DollarRechner\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Euro2DollarTest"
	cd /d C:\Users\JoachimWagner\git\Atlas\atlas-tdd-cpp-mai-2022\QTEuro2DollarRechner\build\tests && "C:\Program Files\CMake\bin\cmake.exe" -E cmake_autogen C:/Users/JoachimWagner/git/Atlas/atlas-tdd-cpp-mai-2022/QTEuro2DollarRechner/build/tests/CMakeFiles/Euro2DollarTest_autogen.dir/AutogenInfo.json ""

Euro2DollarTest_autogen: tests/CMakeFiles/Euro2DollarTest_autogen
Euro2DollarTest_autogen: tests/CMakeFiles/Euro2DollarTest_autogen.dir/build.make
.PHONY : Euro2DollarTest_autogen

# Rule to build all files generated by this target.
tests/CMakeFiles/Euro2DollarTest_autogen.dir/build: Euro2DollarTest_autogen
.PHONY : tests/CMakeFiles/Euro2DollarTest_autogen.dir/build

tests/CMakeFiles/Euro2DollarTest_autogen.dir/clean:
	cd /d C:\Users\JoachimWagner\git\Atlas\atlas-tdd-cpp-mai-2022\QTEuro2DollarRechner\build\tests && $(CMAKE_COMMAND) -P CMakeFiles\Euro2DollarTest_autogen.dir\cmake_clean.cmake
.PHONY : tests/CMakeFiles/Euro2DollarTest_autogen.dir/clean

tests/CMakeFiles/Euro2DollarTest_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\JoachimWagner\git\Atlas\atlas-tdd-cpp-mai-2022\QTEuro2DollarRechner C:\Users\JoachimWagner\git\Atlas\atlas-tdd-cpp-mai-2022\QTEuro2DollarRechner\tests C:\Users\JoachimWagner\git\Atlas\atlas-tdd-cpp-mai-2022\QTEuro2DollarRechner\build C:\Users\JoachimWagner\git\Atlas\atlas-tdd-cpp-mai-2022\QTEuro2DollarRechner\build\tests C:\Users\JoachimWagner\git\Atlas\atlas-tdd-cpp-mai-2022\QTEuro2DollarRechner\build\tests\CMakeFiles\Euro2DollarTest_autogen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/Euro2DollarTest_autogen.dir/depend

