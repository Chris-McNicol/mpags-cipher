#include <iostream>
#include <string>
#include <fstream>


// Our program headers
#include "TransformChar.hpp"
#include "CommandLineHelpers.hpp"
#include "ProcessCommandLine.hpp"
#include "CaesarCipher.hpp"
#include "PlayfairCipher.hpp"
#include "VigenereCipher.hpp"




//template for reading textstream
template <typename T, typename S>
void readStream(T& input, S& msg_string){
  input >> msg_string ;
}

//template for using Cipher

template <typename C, typename S>
std::string applyCipher(C& Cipher, S& input_string){
  std::string encrypted = Cipher.encrypt(input_string);
  Cipher.makeItLookNice(encrypted);

  return encrypted;
}
 

//function to get input text from file
void get_in_file(std::string location, std::string& msg_string, bool& ok_read){

  std::ifstream in_file {location};
  if (in_file.good())
    { ok_read = true;
      readStream(in_file, msg_string);  }
  }


//function to request input text from user
void get_command_text(std::string& msg_string){
  readStream(std::cin, msg_string);}


//function to output string to file
void put_out_file(std::string location, std::string& msg, bool& ok_write){
  std::ofstream out_file(location);
  out_file << msg ;
  if (out_file.good()) { ok_write = true;}
}



  





//Here is the main function
int main(int argc, char* argv[]){  
 
  
  std::string msg{};
  std::string input{};
 
  bool ok_write{false};
  bool ok_read{false};

  
  
  CommandLineInfo Info;
  bool blah{false};
 
  blah = processCommandLine(argc,argv,Info);
  
  if(Info.help) {    help_called();       return -1;}
  if(Info.version) { version_called();    return -1;}
 

  if(blah) { std::cout << "Command Line entry satisfactory" << std::endl;}
  else{ std::cout << "Error Reading Command Line input" << std::endl; }
  
  


  if(Info.in_file_loc != ""){
         get_in_file(Info.in_file_loc, input, ok_read);}
    
  else{    
    std::cout << "Text to encrypt, [ENTER] to submit text   :  " << std::endl;
    get_command_text(input);
  }
  
  if(Info.key == ""){
    std::cout << "No key selected, no encryption performed!" << std::endl;

    return -1;}
    

  char in_char{'x'};  
  for(size_t pos=0 ; pos < input.length(); pos++){
    
    /* Check if character is an alphabetic 
       letter, force it to be uppercase */

    in_char = input.at(pos);
    msg += transformChar(in_char); 
       }

  


  //run the Cipher
  std::string encrypted{""};
  if(Info.ciphertype == CipherType::Vigenere){
    VigenereCipher my_cipher = VigenereCipher{Info.key, Info.mode};
    encrypted = applyCipher(my_cipher,msg); }

 else if(Info.ciphertype == CipherType::Playfair){
   PlayfairCipher my_cipher = PlayfairCipher(Info.key, Info.mode);
   encrypted = applyCipher(my_cipher,msg);
 }

 else if(Info.ciphertype == CipherType::Caesar){
   CaesarCipher my_cipher = CaesarCipher(Info.key, Info.mode); 
   encrypted = applyCipher(my_cipher, msg); }





  //output the results
  if(Info.out_file_loc != ""){put_out_file(Info.out_file_loc, encrypted, ok_write);}
  else{std::cout << encrypted << std::endl;}


  if(ok_write && ok_read){ std::cout << "everything went well" << std::endl;}
}

  
  
