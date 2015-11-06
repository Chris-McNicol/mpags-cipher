#ifndef INC_CAESARCIPHER_H
#define INC_CAESARCIPHER_H

#include <vector>
#include <string>

class CaesarCipher{

  const std::vector<char> alphabet_;
  const int key_ = 0;
  const bool decrypt_ = false;

  public:

  CaesarCipher(int constructorkey, bool constructordecrypt);

  int wrapIt(int index);

  char shift(char input);

  std::string applyCipher(std::string msg);

};

#endif
