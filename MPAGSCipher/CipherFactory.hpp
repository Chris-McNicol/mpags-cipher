#ifndef CIPHER_FACTORY_HPP
#define CIPHER_FACTORY_HPP

#include <memory>

#include "CaesarCipher.hpp"
#include "VigenereCipher.hpp"
#include "PlayfairCipher.hpp"

std::unique_ptr<Cipher> cipherFactory(const CipherType type, const std::string key);

#endif
