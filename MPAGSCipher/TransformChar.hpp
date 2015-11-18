#ifndef MPAGSCIPHER_TRANSFORMCHAR_HPP
#define MPAGSCIPHER_TRANSFORMCHAR_HPP



#include <string>

/** \param c the character to be transformed
 * \return an upper case character, as a string. Numbers are spelled out.
 **/
std::string transformChar(char c);

std::string transformChar(std::string str);

#endif // MPAGSCIPHER_TRANSFORMCHAR_HPP
