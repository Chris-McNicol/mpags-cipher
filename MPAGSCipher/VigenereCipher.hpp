#ifndef INC_VIGENERECIPHER_H
#define INC_VIGENERECIPHER_H

#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <map>

#include "ProcessCommandLine.hpp"
#include "CaesarCipher.hpp"
#include "TransformChar.hpp"

/**
 *VigenereCipher contains the all 26 possible Caesar Ciphers based on the key_ word
 **/

class VigenereCipher{


  std::string key_;
  CipherMode mode_ = CipherMode::Encrypt;

  public:

  
  std::vector<CaesarCipher> cipher_Holder_;


  /**Create a new Vigenere
   *
   * \param constructorkey the key to the cipher. \param mode whether to 'Encrypt' or 'Decrypt'
   **/
  
  VigenereCipher(std::string constructorkey, CipherMode mode);


  void createCiphers();

  CipherMode getMode();
  

  ///A function which takes a decrypted message and removes the added 'X's and 'Z's
  void makeItLookNice(std::string& msg);

  
  /// \return the encrypted/decrypted string \param msg the message to be used
  std::string encrypt(std::string msg);

};

#endif
