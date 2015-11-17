# - Main CMake buildscript for mpags-cipher
# Comments in a CMake Script are lines begining with a '#'

# - Set CMake requirements then declare project
cmake_minimum_required(VERSION 3.2)
project(MPAGSCipher VERSION 0.1.0)

# - When Makefiles are generated, output all command lines by default
#   Do this to begin with so it's easy to see what compiler command/flags
#   are used. This can also be done by removing the 'set' command and
#   running make as 'make VERBOSE=1'.
set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_CXX_EXTENSIONS OFF)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang|AppleClang")
  set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -Wfatal-errors -Wshadow -pedantic")
endif()

add_subdirectory(MPAGSCipher)

enable_testing()
add_subdirectory(Testing)

#Declare the build of the mpags-cipher main program
add_executable(mpags-cipher mpags-cipher.cpp MPAGSCipher/CustomExceptions.cpp MPAGSCipher/VigenereCipher.hpp MPAGSCipher/VigenereCipher.cpp MPAGSCipher/PlayfairCipher.hpp MPAGSCipher/PlayfairCipher.cpp MPAGSCipher/CaesarCipher.cpp MPAGSCipher/CaesarCipher.hpp MPAGSCipher/TransformChar.hpp MPAGSCipher/ProcessCommandLine.cpp MPAGSCipher/ProcessCommandLine.hpp MPAGSCipher/CommandLineHelpers.hpp MPAGSCipher/TransformChar.cpp MPAGSCipher/CommandLineHelpers.cpp)

target_include_directories(mpags-cipher
  PRIVATE MPAGSCipher
  )

target_compile_features(mpags-cipher PRIVATE cxx_auto_type cxx_range_for cxx_uniform_initialization )

# - Install mpags-cipher using UNIX/GNU directory structure
include(GNUInstallDirs)
install(TARGETS mpags-cipher DESTINATION ${CMAKE_INSTALL_BINDIR})

# - Package mpags-cipher binaries and sources
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
include(CPack)
