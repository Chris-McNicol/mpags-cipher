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
include Testing/CMakeFiles/testTransformChar.dir/depend.make

# Include the progress variables for this target.
include Testing/CMakeFiles/testTransformChar.dir/progress.make

# Include the compile flags for this target's objects.
include Testing/CMakeFiles/testTransformChar.dir/flags.make

Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o: Testing/CMakeFiles/testTransformChar.dir/flags.make
Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o: Testing/testTransformChar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user16/Documents/mpags-cpp/mpags-cipher.git/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o"
	cd /home/user16/Documents/mpags-cpp/mpags-cipher.git/Testing && /bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o -c /home/user16/Documents/mpags-cpp/mpags-cipher.git/Testing/testTransformChar.cpp

Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testTransformChar.dir/testTransformChar.cpp.i"
	cd /home/user16/Documents/mpags-cpp/mpags-cipher.git/Testing && /bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/user16/Documents/mpags-cpp/mpags-cipher.git/Testing/testTransformChar.cpp > CMakeFiles/testTransformChar.dir/testTransformChar.cpp.i

Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testTransformChar.dir/testTransformChar.cpp.s"
	cd /home/user16/Documents/mpags-cpp/mpags-cipher.git/Testing && /bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/user16/Documents/mpags-cpp/mpags-cipher.git/Testing/testTransformChar.cpp -o CMakeFiles/testTransformChar.dir/testTransformChar.cpp.s

Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o.requires:

.PHONY : Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o.requires

Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o.provides: Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o.requires
	$(MAKE) -f Testing/CMakeFiles/testTransformChar.dir/build.make Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o.provides.build
.PHONY : Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o.provides

Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o.provides.build: Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o


# Object files for target testTransformChar
testTransformChar_OBJECTS = \
"CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o"

# External object files for target testTransformChar
testTransformChar_EXTERNAL_OBJECTS =

Testing/testTransformChar: Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o
Testing/testTransformChar: Testing/CMakeFiles/testTransformChar.dir/build.make
Testing/testTransformChar: MPAGSCipher/libMPAGSCipher.a
Testing/testTransformChar: Testing/CMakeFiles/testTransformChar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user16/Documents/mpags-cpp/mpags-cipher.git/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testTransformChar"
	cd /home/user16/Documents/mpags-cpp/mpags-cipher.git/Testing && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testTransformChar.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Testing/CMakeFiles/testTransformChar.dir/build: Testing/testTransformChar

.PHONY : Testing/CMakeFiles/testTransformChar.dir/build

Testing/CMakeFiles/testTransformChar.dir/requires: Testing/CMakeFiles/testTransformChar.dir/testTransformChar.cpp.o.requires

.PHONY : Testing/CMakeFiles/testTransformChar.dir/requires

Testing/CMakeFiles/testTransformChar.dir/clean:
	cd /home/user16/Documents/mpags-cpp/mpags-cipher.git/Testing && $(CMAKE_COMMAND) -P CMakeFiles/testTransformChar.dir/cmake_clean.cmake
.PHONY : Testing/CMakeFiles/testTransformChar.dir/clean

Testing/CMakeFiles/testTransformChar.dir/depend:
	cd /home/user16/Documents/mpags-cpp/mpags-cipher.git && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user16/Documents/mpags-cpp/mpags-cipher.git /home/user16/Documents/mpags-cpp/mpags-cipher.git/Testing /home/user16/Documents/mpags-cpp/mpags-cipher.git /home/user16/Documents/mpags-cpp/mpags-cipher.git/Testing /home/user16/Documents/mpags-cpp/mpags-cipher.git/Testing/CMakeFiles/testTransformChar.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Testing/CMakeFiles/testTransformChar.dir/depend

