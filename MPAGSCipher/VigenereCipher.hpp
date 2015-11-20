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
 *VigenereCipher contains all possible 26 Caesar Ciphers and selects which to use based on the keyword stored in key_
 **/

class VigenereCipher : public Cipher{

  /// \param key_ the keyword
  std::string key_;

  public:

  /// \param cipher_Holder_ a vector of all Caesar Ciphers
  std::vector<CaesarCipher> cipher_Holder_;

  
    std::map<char, CaesarCipher>  char2ciph;
  

  /**Create a new Vigenere
   *
   * \param constructorkey the key to the cipher. \param mode whether to 'Encrypt' or 'Decrypt'
   **/
  
  VigenereCipher(std::string constructorkey);

  /// creates and fills the vector of CaesarCiphers
  void createCiphers();
  

  ///A function which isn't implemented but included to match other Cipher classes
 virtual  void makeItLookNice(std::string& msg) const override ;

  
  std::string applyCipher(const std::string& msg, CipherMode mode) const;

  
  /// \return the encrypted/decrypted string \param msg the message to be used
  std::string encrypt(const std::string& msg) const override;
  std::string decrypt(const std::string& msg) const override;
};

#endif
