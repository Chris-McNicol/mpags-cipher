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

class VigenereCipher{

  /// \param key_ the keyword
  std::string key_;

  /// \param mode_ the encryption mode Encrypt/Decrypt, default Encrypt
  CipherMode mode_ = CipherMode::Encrypt;

  public:

  /// \param cipher_Holder_ a vector of all Caesar Ciphers
  std::vector<CaesarCipher> cipher_Holder_;


  /**Create a new Vigenere
   *
   * \param constructorkey the key to the cipher. \param mode whether to 'Encrypt' or 'Decrypt'
   **/
  
  VigenereCipher(std::string constructorkey, CipherMode mode);

  /// creates and fills the vector of CaesarCiphers
  void createCiphers();

  ///returns the CipherMode of the Vigenere Cipher
  CipherMode getMode();
  

  ///A function which isn't implemented but included to match other Cipher classes
  void makeItLookNice(std::string& msg);

  
  /// \return the encrypted/decrypted string \param msg the message to be used
  std::string encrypt(std::string msg);

};

#endif
