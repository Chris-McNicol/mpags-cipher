#ifndef INC_CAESARCIPHER_H
#define INC_CAESARCIPHER_H

#include <vector>
#include <string>
#include <map>

#include "ProcessCommandLine.hpp"
#include "Cipher.hpp"

/**
 *CaesarCipher contains the alphabet, the key of the cipher
 * and a flag for decryption
 **/

class CaesarCipher : public Cipher{


  const std::vector<char> alphabet_;
  const int key_ = 0;
  

  public:

  /**Create a new CaesarCipher
   *
   * \param key the key to the cipher. \param decrypt the flag, true is decrypt
   **/
  
  CaesarCipher(const std::string constructorkey);

  /// \return an index in range [0,25] \param index the index to be wrapped
  int wrapIt(int index) const;

  /// \return the shifted character \param input the inputted character
  char shift(const char input,const CipherMode mode) const;

  /// applied the cipher depending on the CipherMode
  std::string applyCipher(const std::string& msg,const CipherMode mode) const;
  
  /// \return the encrypted \param msg string message to be used. Calls applyCipher
  virtual std::string encrypt(const std::string& msg) const override;

  /// \return the decrypted \param msg string message to be used.  Calls applyCipher
  virtual std::string decrypt(const std::string& msg) const override;


  virtual void makeItLookNice(std::string& msg) const override;
};

#endif
