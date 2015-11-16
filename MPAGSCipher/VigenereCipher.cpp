
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <map>
#include <iostream>

#include "VigenereCipher.hpp"
#include "CaesarCipher.hpp"


VigenereCipher::VigenereCipher(std::string thekey, CipherMode decrypt_mode)
  :key_{thekey},mode_{decrypt_mode}
   {
     createMaps();
       }
   
CipherMode VigenereCipher::getMode(){
  return mode_;
}

void VigenereCipher::createMaps(){

  char index{};
  for(int i = 65; i < 91; i++){
    index = char(i);
    std::string thiskey = std::to_string(i-64);
    CaesarCipher this_Cipher = CaesarCipher{thiskey, getMode()};
    std::pair<char, CaesarCipher> iLikePears = std::make_pair(index,this_Cipher);
    char2Cipher.insert(iLikePears);
  }
}

std::string VigenereCipher::encrypt(std::string msg){

  //generate keyphrase of the right length

  std::string keyphrase{""};

  while(keyphrase.length() < msg.length() ){

    keyphrase += key_;
  }
  size_t need_to_erase = keyphrase.length() - msg.length();

  keyphrase.erase(msg.length() - 1, need_to_erase);


  std::string encrypted{""};

  for(size_t pos; pos < msg.length(); pos++){

    auto find_iter = char2Cipher.find(keyphrase[pos]);
    encrypted += (*find_iter).second.encrypt(std::to_string(msg[pos]));

 
   }
  return encrypted;
}


void VigenereCipher::makeItLookNice(std::string& msg){

  if( msg[msg.length() - 1] == 'Z'){

    msg.erase(msg.length()-1, 1);
  }


  for(size_t pos=0; pos < msg.length() -1; pos++){

    if( (msg[pos] == 'X') && (msg[pos+1] == msg[pos-1])){
      msg.erase(pos, 1);
    }
  }
}






