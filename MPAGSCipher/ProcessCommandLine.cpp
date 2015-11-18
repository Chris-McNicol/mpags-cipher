#include <iostream>
#include <string>
#include <fstream>

#include "CommandLineHelpers.hpp"
#include "ProcessCommandLine.hpp"

//function to process the Command Line inputs, looking for flags etc.
bool processCommandLine(const int argc,char* argv[], CommandLineInfo& Info){

  std::string argument{};
  std::string temp{};
  std::string othertemp{};

 
  for(int arg_check = 1; arg_check < argc; arg_check++){
    argument = argv[arg_check];

    //Check arguments for help flag
    if(argument == "--help" or argument == "-h"){
      Info.help = true;
      
    }
    //Check arguments for version flag
    if(argument == "--version"){
      Info.version = true;
      
    }
    //Check arguments for input file flag
    if(argument == "-i"){
      if(arg_check == argc -1){std::cout <<"i " << '\n'; return false;}
      else{ Info.in_file_loc = argv[arg_check +1];}
    }

    //Check arguments for output file flag
    if(argument == "-o"){
      if(arg_check == argc-1){std::cout <<"o" << std::endl; return false;}
      else{Info.out_file_loc = argv[arg_check +1];}
    }   

    if(argument == "-cipher"){
      std::string next_arg = argv[arg_check +1];

      if(arg_check == argc-1){std::cout <<"argcheckc" <<std::endl;	return false;}
      

      else if (next_arg == "playfair" || next_arg == "Playfair"){
	Info.ciphertype = CipherType::Playfair;}
      else if (next_arg == "vigenere" || next_arg == "Vigenere"){
	Info.ciphertype = CipherType::Vigenere; }
      else if (next_arg == "caesar" || next_arg == "Caesar"){
	Info.ciphertype = CipherType::Caesar;}

      else{std::cout << "cipher else" << std::endl; return false;}
    }
    
    //check for key, default is 0 which won't encrypt
    if(argument == "-key" || argument == "-k" ){
     
      if(arg_check != argc-1){
	Info.key = argv[arg_check + 1];
	if( Info.key == ""){ std::cout <<"k" << std::endl; return false;}
	
      }
    }
    
    //check to see if message should be decrypted, default is encryption
    if(argument == "-decrypt"){
      Info.mode = CipherMode::Decrypt;
   }
    
  }

  /*
  if(argc > 1){

    
    //Add all arguments that aren't control options as the input to the cipher
    for(int arg_no = 1; arg_no < argc; arg_no++){

      temp = argv[arg_no];
      
      if(temp!="--help"&&temp!="-h"&&temp!="--version"&&temp!="-i"&&temp!="-o"){
	othertemp = argv[arg_no - 1];
	if(othertemp !="-i" && othertemp !="-o"){
	  stuff += temp;}}
	  }
    
  }*/
  return true;
}
