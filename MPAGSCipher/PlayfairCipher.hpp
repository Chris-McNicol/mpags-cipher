#ifndef INC_PLAYFAIRCIPHER_H
#define INC_PLAYFAIRCIPHER_H

#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <map>

#include "ProcessCommandLine.hpp"

/**
 *PlayfairCaesarCipher contains the a mapping of characters to coordinates and vice-versa, the key of the cipher
 * and a flag for decryption
 **/

class PlayfairCipher{


  std::string key_;
  CipherMode mode_ = CipherMode::Encrypt;

  public:

  std::map<char, std::pair<int,int>> str2intMap;
  std::map<std::pair<int,int>,char> int2strMap;

  /**Create a new PlayfairCipher
   *
   * \param constructorkey the key to the cipher. \param mode whether to 'Encrypt' or 'Decrypt'
   **/
  
  PlayfairCipher(std::string constructorkey, CipherMode mode);


  /// Creates the mapping from the keyword \param keyToSet the keyword
  void setKey(std::string keyToSet);

  ///A helper function to ensure coordinates are in the 5x5 square. \param index the index to be wrapped
  int playWrap(int index);
  
  ///A function which takes a decrypted message and removes the added 'X's and 'Z's
  void makeItLookNice(std::string& msg);

  
  /// \return the encrypted/decrypted string \param msg the message to be used
  std::string encrypt(std::string msg);

};

#endif
