#ifndef INC_CAESARCIPHER_H
#define INC_CAESARCIPHER_H

#include <vector>
#include <string>

#include "ProcessCommandLine.hpp"

/**
 *CaesarCipher contains the alphabet, the key of the cipher
 * and a flag for decryption
 **/

class CaesarCipher{

  const std::vector<char> alphabet_;
  const int key_ = 0;
  const CipherMode mode_ = CipherMode::Encrypt;

  public:

  /**Create a new CaesarCipher
   *
   * \param key the key to the cipher. \param decrypt the flag, true is decrypt
   **/
  
  CaesarCipher(int constructorkey, CipherMode mode);

  /// \return an index in range [0,25] \param index the index to be wrapped
  int wrapIt(int index);

  /// \return the shifted character \param input the inputted character
  char shift(char input);

  
  /// \return the encrypted/decrypted string \param msg the message to be used
  std::string applyCipher(std::string msg);

};

#endif
