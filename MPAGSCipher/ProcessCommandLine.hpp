#ifndef INC_PROCCMDLINE_H
#define INC_PROCCMDLINE_H


#include <iostream>
#include <string>
#include <fstream>

#include "CommandLineHelpers.hpp"


/// \enum Describes whether the Cipher should encrypt or decrypt
enum class CipherMode {

  Decrypt,
  Encrypt

    };

enum class CipherType {

  Caesar,
  Playfair,
  Vigenere

    };

///Structure to hold the information passed into the command line by the user.
struct CommandLineInfo {

  bool help = false;
  bool version = false ;
  bool in_err = false;
  bool out_err = false;
  CipherMode mode = CipherMode::Encrypt;
  std::string key;
  bool cipher_err = false;
  CipherType ciphertype;
  
  std::string in_file_loc = "";
  std::string out_file_loc= "";

};




/**
 *Takes command line arguments and sets the options stored in the CommandLineInfo struct.
 * \param argc \param argv  command line arguments
 * \param Info and instance of the CommandLineInfo structure
 * \returns a boolean 'success' flag
 **/
bool processCommandLine(const int argc, char* argv[], CommandLineInfo& Info);

#endif
