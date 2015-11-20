# - Build sub-script for the MPAGSCipher library unit tests


# Most basic test
add_executable(testHello testHello.cpp)
add_test(NAME test-hello COMMAND testHello)

add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CMAKE_CURRENT_LIST_DIR})

add_executable(testCatch testCatch.cpp)
target_include_directories(testCatch PRIVATE ${CMAKE_CURRENT_LIST_DIR})
add_test(NAME test-catch COMMAND testCatch)

#Test TransformChar
add_executable(testTransformChar testTransformChar.cpp)
target_link_libraries(testTransformChar MPAGSCipher Catch)
add_test(NAME test-transformChar COMMAND testTransformChar)

#Test ProcessCommandLine
add_executable(testProcessCommandLine testProcessCommandLine.cpp)
target_link_libraries(testProcessCommandLine MPAGSCipher Catch)
add_test(NAME test-ProcessCommandLine COMMAND testProcessCommandLine)

#Test CaesarCipher
add_executable(testCaesarCipher testCaesarCipher.cpp)
target_link_libraries(testCaesarCipher MPAGSCipher Catch)
add_test(NAME test-CaesarCipher COMMAND testCaesarCipher)

#Test VigenereCipher
add_executable(testVigenereCipher testVigenereCipher.cpp)
target_link_libraries(testVigenereCipher MPAGSCipher Catch)
add_test(NAME test-VigenereCipher COMMAND testVigenereCipher)

#Test PlayfairCipher
add_executable(testPlayfairCipher testPlayfairCipher.cpp)
target_link_libraries(testPlayfairCipher MPAGSCipher Catch)
add_test(NAME test-PlayfairCipher COMMAND testPlayfairCipher)

#Test Encryption
add_executable(testEncryption testEncryption.cpp)
target_link_libraries(testEncryption MPAGSCipher Catch)
add_test(NAME test-Encryption COMMAND testEncryption)

