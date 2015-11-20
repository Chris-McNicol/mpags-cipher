#ifndef HELPFUL_ENUMS_HPP
#define HELPFUL_ENUMS_HPP


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
  CipherMode mode = CipherMode::Encrypt;
  std::string key;
  bool cipher_err = false;
  CipherType ciphertype;
  
  std::string in_file_loc = "";
  std::string out_file_loc= "";

};

#endif
