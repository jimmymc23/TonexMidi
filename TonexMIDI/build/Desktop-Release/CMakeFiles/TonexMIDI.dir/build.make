# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/hgfs/DevShare/TonexMIDI

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release

# Include any dependencies generated for this target.
include CMakeFiles/TonexMIDI.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TonexMIDI.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TonexMIDI.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TonexMIDI.dir/flags.make

TonexMIDI_autogen/timestamp: /usr/lib/qt5/bin/moc
TonexMIDI_autogen/timestamp: /usr/lib/qt5/bin/uic
TonexMIDI_autogen/timestamp: CMakeFiles/TonexMIDI.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target TonexMIDI"
	/usr/bin/cmake -E cmake_autogen /mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release/CMakeFiles/TonexMIDI_autogen.dir/AutogenInfo.json Release
	/usr/bin/cmake -E touch /mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release/TonexMIDI_autogen/timestamp

CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.o: CMakeFiles/TonexMIDI.dir/flags.make
CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.o: TonexMIDI_autogen/mocs_compilation.cpp
CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.o: CMakeFiles/TonexMIDI.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.o -MF CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.o -c /mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release/TonexMIDI_autogen/mocs_compilation.cpp

CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release/TonexMIDI_autogen/mocs_compilation.cpp > CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.i

CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release/TonexMIDI_autogen/mocs_compilation.cpp -o CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.s

CMakeFiles/TonexMIDI.dir/main.cpp.o: CMakeFiles/TonexMIDI.dir/flags.make
CMakeFiles/TonexMIDI.dir/main.cpp.o: /mnt/hgfs/DevShare/TonexMIDI/main.cpp
CMakeFiles/TonexMIDI.dir/main.cpp.o: CMakeFiles/TonexMIDI.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TonexMIDI.dir/main.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TonexMIDI.dir/main.cpp.o -MF CMakeFiles/TonexMIDI.dir/main.cpp.o.d -o CMakeFiles/TonexMIDI.dir/main.cpp.o -c /mnt/hgfs/DevShare/TonexMIDI/main.cpp

CMakeFiles/TonexMIDI.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TonexMIDI.dir/main.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/hgfs/DevShare/TonexMIDI/main.cpp > CMakeFiles/TonexMIDI.dir/main.cpp.i

CMakeFiles/TonexMIDI.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TonexMIDI.dir/main.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/hgfs/DevShare/TonexMIDI/main.cpp -o CMakeFiles/TonexMIDI.dir/main.cpp.s

CMakeFiles/TonexMIDI.dir/mainwindow.cpp.o: CMakeFiles/TonexMIDI.dir/flags.make
CMakeFiles/TonexMIDI.dir/mainwindow.cpp.o: /mnt/hgfs/DevShare/TonexMIDI/mainwindow.cpp
CMakeFiles/TonexMIDI.dir/mainwindow.cpp.o: CMakeFiles/TonexMIDI.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/TonexMIDI.dir/mainwindow.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TonexMIDI.dir/mainwindow.cpp.o -MF CMakeFiles/TonexMIDI.dir/mainwindow.cpp.o.d -o CMakeFiles/TonexMIDI.dir/mainwindow.cpp.o -c /mnt/hgfs/DevShare/TonexMIDI/mainwindow.cpp

CMakeFiles/TonexMIDI.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TonexMIDI.dir/mainwindow.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/hgfs/DevShare/TonexMIDI/mainwindow.cpp > CMakeFiles/TonexMIDI.dir/mainwindow.cpp.i

CMakeFiles/TonexMIDI.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TonexMIDI.dir/mainwindow.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/hgfs/DevShare/TonexMIDI/mainwindow.cpp -o CMakeFiles/TonexMIDI.dir/mainwindow.cpp.s

# Object files for target TonexMIDI
TonexMIDI_OBJECTS = \
"CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/TonexMIDI.dir/main.cpp.o" \
"CMakeFiles/TonexMIDI.dir/mainwindow.cpp.o"

# External object files for target TonexMIDI
TonexMIDI_EXTERNAL_OBJECTS =

TonexMIDI: CMakeFiles/TonexMIDI.dir/TonexMIDI_autogen/mocs_compilation.cpp.o
TonexMIDI: CMakeFiles/TonexMIDI.dir/main.cpp.o
TonexMIDI: CMakeFiles/TonexMIDI.dir/mainwindow.cpp.o
TonexMIDI: CMakeFiles/TonexMIDI.dir/build.make
TonexMIDI: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.13
TonexMIDI: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.13
TonexMIDI: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.13
TonexMIDI: CMakeFiles/TonexMIDI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable TonexMIDI"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TonexMIDI.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TonexMIDI.dir/build: TonexMIDI
.PHONY : CMakeFiles/TonexMIDI.dir/build

CMakeFiles/TonexMIDI.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TonexMIDI.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TonexMIDI.dir/clean

CMakeFiles/TonexMIDI.dir/depend: TonexMIDI_autogen/timestamp
	cd /mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/hgfs/DevShare/TonexMIDI /mnt/hgfs/DevShare/TonexMIDI /mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release /mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release /mnt/hgfs/DevShare/TonexMIDI/build/Desktop-Release/CMakeFiles/TonexMIDI.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/TonexMIDI.dir/depend
