#ifndef CIPHER_HPP
#define CIPHER_HPP

class Cipher {

public:

  Cipher() = default;
  Cipher(const Cipher& rhs) = default;
  Cipher(Cipher&& rhs) = default;
  Cipher& operator=(const Cipher& rhs) = default;
  Cipher& operator=(Cipher& rhs) = default;
  virtual ~Cipher() = default;

  
  
  virtual std::string encrypt(const std::string& msg) const  = 0;
  virtual std::string decrypt(const std::string& msg) const = 0;

  virtual void makeItLookNice(std::string& msg) const = 0;




};

#endif
