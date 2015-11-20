
#include <vector>
#include <string>

#include "CaesarCipher.hpp"



CaesarCipher::CaesarCipher(const std::string thekey)
  :alphabet_{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}, key_{std::stoi(thekey)}
 {
   }


   
  //wrap the index so it won't go out of bounds
int CaesarCipher::wrapIt(int index) const{

    if(index < 0){ index += 26;}
    if(index > 25){ index -= 26;}

    return index;
  }

  //returns the character that is shifted
char CaesarCipher::shift(const char input,const CipherMode mode) const{

    int index{0};
    int shifter = key_;
 
    //decryption shifts the other way
    if(mode == CipherMode::Decrypt) {
      shifter = -key_;}

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
std::string CaesarCipher::applyCipher(const std::string& msg,const CipherMode mode)const{

    std::string output{};
    
    for(size_t i=0; i < msg.length() ;i++){
      output += shift(msg[i], mode);
    }
    return output;
   }    


//Encrypt Function
std::string CaesarCipher::encrypt(const std::string& msg) const{
  return this->applyCipher(msg, CipherMode::Encrypt);
}

//Decrypt Function
std::string CaesarCipher::decrypt(const std::string& msg) const{
  return this->applyCipher(msg, CipherMode::Decrypt);
		     }

    

void CaesarCipher::makeItLookNice(std::string& msg) const{
  msg+="";
}







