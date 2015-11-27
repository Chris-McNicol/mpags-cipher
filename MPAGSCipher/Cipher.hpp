#ifndef CIPHER_HPP
#define CIPHER_HPP

/**

Cipher is an abstract class which is encapsulates the information about a Cipher.

Inheritance should work like this
\code{.cpp}
class CaesarCipher : Cipher {
}
\endcode


 **/

class Cipher {

public:

  Cipher() = default;
  Cipher(const Cipher& rhs) = default;
  Cipher(Cipher&& rhs) = default;
  Cipher& operator=(const Cipher& rhs) = default;
  Cipher& operator=(Cipher& rhs) = default;
  virtual ~Cipher() = default;

  

  ///A virtual encrypt function \param msg Input String \return The encrypted String
  virtual std::string encrypt(const std::string& msg) const  = 0;

  ///A virtual decrypt function \param msg Input String \return The decrypted String
  virtual std::string decrypt(const std::string& msg) const = 0;


  ///virtual function that is only implemented in Playfair Cipher, removing extra Xs and Zs
  virtual void makeItLookNice(std::string& msg) const = 0;




};

#endif
