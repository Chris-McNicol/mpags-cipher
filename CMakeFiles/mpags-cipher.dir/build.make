# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.3

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/user16/Software/cmake-3.3.2-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /home/user16/Software/cmake-3.3.2-Linux-x86_64/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user16/Documents/mpags-cpp/mpags-cipher.git

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user16/Documents/mpags-cpp/mpags-cipher.git

# Include any dependencies generated for this target.
include CMakeFiles/mpags-cipher.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mpags-cipher.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mpags-cipher.dir/flags.make

CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o: CMakeFiles/mpags-cipher.dir/flags.make
CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o: mpags-cipher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user16/Documents/mpags-cpp/mpags-cipher.git/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o"
	/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o -c /home/user16/Documents/mpags-cpp/mpags-cipher.git/mpags-cipher.cpp

CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.i"
	/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/user16/Documents/mpags-cpp/mpags-cipher.git/mpags-cipher.cpp > CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.i

CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.s"
	/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/user16/Documents/mpags-cpp/mpags-cipher.git/mpags-cipher.cpp -o CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.s

CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o.requires:

.PHONY : CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o.requires

CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o.provides: CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o.requires
	$(MAKE) -f CMakeFiles/mpags-cipher.dir/build.make CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o.provides.build
.PHONY : CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o.provides

CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o.provides.build: CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o


CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o: CMakeFiles/mpags-cipher.dir/flags.make
CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o: MPAGSCipher/CaesarCipher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user16/Documents/mpags-cpp/mpags-cipher.git/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o"
	/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o -c /home/user16/Documents/mpags-cpp/mpags-cipher.git/MPAGSCipher/CaesarCipher.cpp

CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.i"
	/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/user16/Documents/mpags-cpp/mpags-cipher.git/MPAGSCipher/CaesarCipher.cpp > CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.i

CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.s"
	/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/user16/Documents/mpags-cpp/mpags-cipher.git/MPAGSCipher/CaesarCipher.cpp -o CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.s

CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o.requires:

.PHONY : CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o.requires

CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o.provides: CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o.requires
	$(MAKE) -f CMakeFiles/mpags-cipher.dir/build.make CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o.provides.build
.PHONY : CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o.provides

CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o.provides.build: CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o


CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o: CMakeFiles/mpags-cipher.dir/flags.make
CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o: MPAGSCipher/ProcessCommandLine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user16/Documents/mpags-cpp/mpags-cipher.git/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o"
	/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o -c /home/user16/Documents/mpags-cpp/mpags-cipher.git/MPAGSCipher/ProcessCommandLine.cpp

CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.i"
	/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/user16/Documents/mpags-cpp/mpags-cipher.git/MPAGSCipher/ProcessCommandLine.cpp > CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.i

CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.s"
	/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/user16/Documents/mpags-cpp/mpags-cipher.git/MPAGSCipher/ProcessCommandLine.cpp -o CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.s

CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o.requires:

.PHONY : CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o.requires

CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o.provides: CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o.requires
	$(MAKE) -f CMakeFiles/mpags-cipher.dir/build.make CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o.provides.build
.PHONY : CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o.provides

CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o.provides.build: CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o


CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o: CMakeFiles/mpags-cipher.dir/flags.make
CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o: MPAGSCipher/TransformChar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user16/Documents/mpags-cpp/mpags-cipher.git/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o"
	/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o -c /home/user16/Documents/mpags-cpp/mpags-cipher.git/MPAGSCipher/TransformChar.cpp

CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.i"
	/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/user16/Documents/mpags-cpp/mpags-cipher.git/MPAGSCipher/TransformChar.cpp > CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.i

CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.s"
	/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/user16/Documents/mpags-cpp/mpags-cipher.git/MPAGSCipher/TransformChar.cpp -o CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.s

CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o.requires:

.PHONY : CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o.requires

CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o.provides: CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o.requires
	$(MAKE) -f CMakeFiles/mpags-cipher.dir/build.make CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o.provides.build
.PHONY : CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o.provides

CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o.provides.build: CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o


CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o: CMakeFiles/mpags-cipher.dir/flags.make
CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o: MPAGSCipher/CommandLineHelpers.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user16/Documents/mpags-cpp/mpags-cipher.git/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o"
	/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o -c /home/user16/Documents/mpags-cpp/mpags-cipher.git/MPAGSCipher/CommandLineHelpers.cpp

CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.i"
	/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/user16/Documents/mpags-cpp/mpags-cipher.git/MPAGSCipher/CommandLineHelpers.cpp > CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.i

CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.s"
	/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/user16/Documents/mpags-cpp/mpags-cipher.git/MPAGSCipher/CommandLineHelpers.cpp -o CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.s

CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o.requires:

.PHONY : CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o.requires

CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o.provides: CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o.requires
	$(MAKE) -f CMakeFiles/mpags-cipher.dir/build.make CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o.provides.build
.PHONY : CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o.provides

CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o.provides.build: CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o


# Object files for target mpags-cipher
mpags__cipher_OBJECTS = \
"CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o" \
"CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o" \
"CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o" \
"CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o" \
"CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o"

# External object files for target mpags-cipher
mpags__cipher_EXTERNAL_OBJECTS =

mpags-cipher: CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o
mpags-cipher: CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o
mpags-cipher: CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o
mpags-cipher: CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o
mpags-cipher: CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o
mpags-cipher: CMakeFiles/mpags-cipher.dir/build.make
mpags-cipher: CMakeFiles/mpags-cipher.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user16/Documents/mpags-cpp/mpags-cipher.git/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable mpags-cipher"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mpags-cipher.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mpags-cipher.dir/build: mpags-cipher

.PHONY : CMakeFiles/mpags-cipher.dir/build

CMakeFiles/mpags-cipher.dir/requires: CMakeFiles/mpags-cipher.dir/mpags-cipher.cpp.o.requires
CMakeFiles/mpags-cipher.dir/requires: CMakeFiles/mpags-cipher.dir/MPAGSCipher/CaesarCipher.cpp.o.requires
CMakeFiles/mpags-cipher.dir/requires: CMakeFiles/mpags-cipher.dir/MPAGSCipher/ProcessCommandLine.cpp.o.requires
CMakeFiles/mpags-cipher.dir/requires: CMakeFiles/mpags-cipher.dir/MPAGSCipher/TransformChar.cpp.o.requires
CMakeFiles/mpags-cipher.dir/requires: CMakeFiles/mpags-cipher.dir/MPAGSCipher/CommandLineHelpers.cpp.o.requires

.PHONY : CMakeFiles/mpags-cipher.dir/requires

CMakeFiles/mpags-cipher.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mpags-cipher.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mpags-cipher.dir/clean

CMakeFiles/mpags-cipher.dir/depend:
	cd /home/user16/Documents/mpags-cpp/mpags-cipher.git && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user16/Documents/mpags-cpp/mpags-cipher.git /home/user16/Documents/mpags-cpp/mpags-cipher.git /home/user16/Documents/mpags-cpp/mpags-cipher.git /home/user16/Documents/mpags-cpp/mpags-cipher.git /home/user16/Documents/mpags-cpp/mpags-cipher.git/CMakeFiles/mpags-cipher.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mpags-cipher.dir/depend
