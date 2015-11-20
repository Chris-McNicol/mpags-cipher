#ifndef INC_PLAYFAIRCIPHER_H
#define INC_PLAYFAIRCIPHER_H

#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <map>

#include "ProcessCommandLine.hpp"
#include "Cipher.hpp"

/**
 *PlayfairCaesarCipher contains the a mapping of characters to coordinates and vice-versa, the key of the cipher
 * and a flag for decryption
 **/

class PlayfairCipher : public Cipher{

  /// \param key_ the keyword
  std::string key_;

  
  public:

  /// \param str2intMap mapping of character to coordinates
  std::map<char, std::pair<int,int>> str2intMap;

  /// \param int2strMap mapping of coordinates to character
  std::map<std::pair<int,int>,char> int2strMap;

  /**Create a new PlayfairCipher
   *
   * \param constructorkey the key to the cipher. \param mode whether to 'Encrypt' or 'Decrypt'
   **/
  
  PlayfairCipher(std::string constructorkey);


  /// Creates the mapping from the keyword \param keyToSet the keyword
  void setKey(const std::string keyToSet);

  ///A helper function to ensure coordinates are in the 5x5 square. \param index the index to be wrapped
  int playWrap(int index) const ;
  
  ///A function which takes a decrypted message and removes the added 'X's and 'Z's
  virtual void makeItLookNice(std::string& msg) const override;

  std::string applyCipher(const std::string& msg, CipherMode mode) const;
  
  /// \return the encrypted/decrypted string \param msg the message to be used
  std::string encrypt(const std::string& msg) const override;
  std::string decrypt(const std::string& msg) const override;

};

#endif
