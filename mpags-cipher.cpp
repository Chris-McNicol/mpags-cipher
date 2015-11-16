#include <iostream>
#include <string>
#include <fstream>


// Our program headers
#include "TransformChar.hpp"
#include "CommandLineHelpers.hpp"
#include "CaesarCipher.hpp"
#include "ProcessCommandLine.hpp"
#include "PlayfairCipher.hpp"



//template for reading textstream
template <typename T, typename S>
void readStream(T& input, S& msg_string){
  input >> msg_string ;
}

//template for using Cipher

template <typename C, typename S>
std::string applyCipher(C& Cipher, S& input_string){
  return Cipher.encrypt(input_string);
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
  bool blah = processCommandLine(argc,argv,Info);


  if(blah) { std::cout << "Command Line entry satisfactory" << std::endl;}
  if(Info.help) { help_called();}
  if(Info.version) {version_called();}
  if(Info.in_err) {input_error_called();}
  if(Info.out_err){output_error_called();}
  if(!(Info.in_err) && Info.in_select){
         get_in_file(Info.in_file_loc, input, ok_read);}
    
  if(!Info.in_select){    
    std::cout << "Text to encrypt, [ENTER] to submit text   :  " << std::endl;
    get_command_text(input);
  }
  
  if(!Info.key_select){std::cout << "No key selected, no encryption performed!" << std::endl;}
    

  char in_char{'x'};
  
  for(size_t pos=0 ; pos < input.length(); pos++){
    
    /* Check if character is an alphabetic 
       letter, force it to be uppercase */

    in_char = input.at(pos);
    msg += transformChar(in_char); 
       }



  //run the Cipher
PlayfairCipher my_cipher = PlayfairCipher{Info.key, Info.mode};

 
std::string encrypted = my_cipher.encrypt(msg);

 my_cipher.makeItLookNice(encrypted);



  //output the results
  if(Info.out_select){put_out_file(Info.out_file_loc, encrypted, ok_write);}
  else{std::cout << encrypted << std::endl;}


  if(ok_write && ok_read){ std::cout << "everything went well" << std::endl;}
}

  
  
