# - Build sub-script for the MPAGSCipher library


#Declare the build of the static MPAGSCipher library
add_library( MPAGSCipher STATIC
	      CaesarCipher.hpp
	      CaesarCipher.cpp
	      ProcessCommandLine.hpp
	      ProcessCommandLine.cpp
	      TransformChar.hpp
	      TransformChar.cpp
	      CommandLineHelpers.hpp
	      CommandLineHelpers.cpp
	      PlayfairCipher.hpp
	      PlayfairCipher.cpp
	      VigenereCipher.hpp
	      VigenereCipher.cpp
	      CustomExceptions.cpp
	      Cipher.hpp
	      CipherFactory.hpp
	      CipherFactory.cpp
	      HelpfulEnums.hpp
 )

target_include_directories(MPAGSCipher
	PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
	)

target_compile_features(MPAGSCipher
	PUBLIC cxx_auto_type cxx_range_for cxx_uniform_initialization cxx_binary_literals
	)
