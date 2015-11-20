
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <map>
#include <iostream>

#include "VigenereCipher.hpp"
#include "CaesarCipher.hpp"


VigenereCipher::VigenereCipher(std::string thekey)
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
   

//create the vector of Caesar Ciphers
void VigenereCipher::createCiphers(){

  for(int i =0; i <26; ++i){
  // cipher_Holder_.push_back(CaesarCipher(std::to_string(i+1)));
    
    char2ciph.insert(std::make_pair(char(i+65),CaesarCipher(std::to_string(i+1))));
     

    
  }  
 }


std::string VigenereCipher::applyCipher(const std::string& msg, CipherMode mode)const {

  //generate keyphrase of the right length
  

  std::string keyphrase{""};

  while(keyphrase.length() < msg.length() ){
    keyphrase += key_;
  }
  
  size_t need_to_erase = keyphrase.length() - msg.length();
  keyphrase.erase(msg.length(), need_to_erase);
  
  std::string encrypted{""};

  for(size_t pos=0; pos < msg.length(); pos++){
    
    char fowl = (keyphrase.c_str())[pos];
    int ming = int(fowl);
    ming -= 65;
    std::string doodah = msg.substr(pos, size_t(1));

    if(mode == CipherMode::Encrypt){
      

	auto iter2 = char2ciph.find(keyphrase[pos]);
	encrypted += (*iter2).second.encrypt(doodah);
	


       


      
	//encrypted += cipher_Holder_[ming].encrypt(doodah);
    }
    else if(mode == CipherMode::Decrypt){
      //encrypted += cipher_Holder_[ming].decrypt(doodah);

      
      auto iter3 = char2ciph.find(keyphrase[pos]);
      encrypted += iter3->second.decrypt(doodah);
      
      
    }
   }
  return encrypted;
}


//Encrypt Function
std::string VigenereCipher::encrypt(const std::string& msg) const {
  return applyCipher(msg, CipherMode::Encrypt);}


//Decrypt Function
std::string VigenereCipher::decrypt(const std::string& msg) const {
  return applyCipher(msg, CipherMode::Decrypt);}

//Make it look nice function does nothing
void VigenereCipher::makeItLookNice(std::string& msg) const{
  msg+="";
}






