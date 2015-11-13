#ifndef INC_PLAYFAIRCIPHER_H
#define INC_PLAYFAIRCIPHER_H

#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <map>

#include "ProcessCommandLine.hpp"

/**
 *PlayfairCaesarCipher contains the alphabet, the key of the cipher
 * and a flag for decryption
 **/

class PlayfairCipher{

  std::string key_;
  const CipherMode mode_ = CipherMode::Encrypt;

  public:

  std::map<char, std::pair<int,int>> str2intMap;
  std::map<std::pair<int,int>,char> int2strMap;

  /**Create a new PlayfairCipher
   *
   * \param key the key to the cipher. \param decrypt the flag, true is decrypt
   **/
  
  PlayfairCipher(std::string constructorkey, CipherMode mode);

  void setKey(std::string keyToSet);

  int playWrap(int index);
  
  
  

  
  /// \return the encrypted/decrypted string \param msg the message to be used
  std::string encrypt(std::string msg);

};

#endif
