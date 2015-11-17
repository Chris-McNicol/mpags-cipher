
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <map>
#include <iostream>

#include "VigenereCipher.hpp"
#include "CaesarCipher.hpp"


VigenereCipher::VigenereCipher(std::string thekey, CipherMode decrypt_mode)
  :mode_{decrypt_mode}
   {
     std::string transformedKey{""};
     char in_char{'x'};
     for(size_t pos=0; pos < thekey.length(); pos++){
       in_char = thekey.at(pos);
       transformedKey += transformChar(in_char);
     }
     key_ = transformedKey;
     createCiphers();
       }
   
CipherMode VigenereCipher::getMode(){
  return mode_;
}

void VigenereCipher::createCiphers(){

  

  for(int i =0; i <26; ++i){

    cipher_Holder_.push_back(CaesarCipher(std::to_string(i+1), mode_));
  }

    




  }


std::string VigenereCipher::encrypt(std::string msg){

  //generate keyphrase of the right length
  

  std::string keyphrase{""};

  while(keyphrase.length() < msg.length() ){

    keyphrase += key_;
  }
  size_t need_to_erase = keyphrase.length() - msg.length();

  keyphrase.erase(msg.length(), need_to_erase);

  std::cout << "keyphrase: " << keyphrase << std::endl;

  std::string encrypted{""};



  for(size_t pos=0; pos < msg.length(); pos++){

    
    char fowl = (keyphrase.c_str())[pos];
    int ming = int(fowl);
    ming -= 65;
    std::string doodah = msg.substr(pos, size_t(1));
     encrypted += cipher_Holder_[ming].encrypt(doodah);

   }
  return encrypted;
}


void VigenereCipher::makeItLookNice(std::string& msg){

  msg+="";
}






