
#include <vector>
#include <string>

#include "CaesarCipher.hpp"


CaesarCipher::CaesarCipher(int thekey, CipherMode decrypt_mode)
  :alphabet_{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}, key_{thekey},mode_{decrypt_mode}
   {
   }
   
  //wrap the index so it won't go out of bounds
int CaesarCipher::wrapIt(int index){

    if(index < 0){ index += 26;}
    if(index > 25){ index -= 26;}

    return index;
  }

  //returns the character that is shifted
char CaesarCipher::shift(char input){

    int index{0};
    int shifter = key_;
 
    //decryption shifts the other way
    if(mode_ == CipherMode::Decrypt) { shifter = -key_;}

    //finds the index of the current char
    for(size_t i =0; i < alphabet_.size(); i++){
      if( input == alphabet_[i]){
	index = i;	
      }
    }
    
    //return the char from a shifted position
      return alphabet_[ wrapIt(index + shifter) ];
  }



  //applies shift for each char in a string
std::string CaesarCipher::applyCipher(std::string msg){

    std::string output{};
    
    for(size_t i=0; i < msg.length() ;i++){
      output += shift(msg[i]);
    }
    return output;
   }    










