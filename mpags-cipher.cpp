#include <iostream>
#include <string>
#include <fstream>


// Our program headers
#include "TransformChar.hpp"
#include "CommandLineHelpers.hpp"
#include "Cipher.cpp"


//template for reading textstream
template <typename T, typename S>
void readStream(T& input, S& msg_string){
  input >> msg_string ;
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
  if (out_file.good()) { ok_write = false;}
}

//function that sets up a cipher and uses it
std::string CaesarCipher(std::string msg, int key, bool decrypt){

  Cipher my_cipher = Cipher();
  return my_cipher.apply_cipher(msg, key, decrypt);
}

//function to process the Command Line inputs, looking for flags etc.
bool processCommandLine(const int argc,char* argv[], bool& help, bool& version,bool& in_select, bool& out_select, bool& in_err,bool& out_err, std::string& in_file_loc, std::string& out_file_loc, bool& decrypt, int& key, bool& key_select){

  std::string argument{};
  std::string temp{};
  std::string othertemp{};

 
  for(int arg_check = 1; arg_check < argc; arg_check++){
    argument = argv[arg_check];

    //Check arguments for help flag
    if(argument == "--help" or argument == "-h"){
      help = true;
      
    }
    //Check arguments for version flag
    if(argument == "--version"){
      version = true;
      
    }
    //Check arguments for input file flag
    if(argument == "-i"){
      in_select = true;
      if(arg_check == argc -1){in_err = true;}
      else{ in_file_loc = argv[arg_check +1];}
    }

    //Check arguments for output file flag
    if(argument == "-o"){
      out_select = true;
      if(arg_check == argc-1){out_err = true;}
      else{out_file_loc = argv[arg_check +1];}
    }   

    //check for key, default is 0 which won't encrypt
    if(argument == "-key"){
     
      if(arg_check != argc-1){
	key = atoi(argv[arg_check + 1]);
	if( key != 0){ key_select = true;}
	
      }
    }
    
    //check to see if message should be decrypted, default is encryption
    if(argument == "-decrypt"){
      decrypt = true;
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
  





//Here is the main function
int main(int argc, char* argv[]){  
 
  
  std::string msg{};
  std::string input{};
 
  std::string in_file_loc{};
  std::string out_file_loc{};
  
  

  bool help{false};
  bool version{false};
  bool in_err{false};
  bool out_err{false};
  bool in_select{false};
  bool out_select{false};
  
  bool ok_read{false};
  bool ok_write{false};
  bool decrypt{false};
  bool key_select{false};
  int key{0};
  
  bool blah = processCommandLine(argc,argv,help,version,in_select, out_select, in_err,out_err, in_file_loc, out_file_loc, decrypt, key, key_select);

  if(blah) { std::cout << "Command Line entry satisfactory" << std::endl;}
  if(help) { help_called();}
  if(version) {version_called();}
  if(in_err) {input_error_called();}
  if(out_err){output_error_called();}
  
  if(!(in_err) && in_select){get_in_file(in_file_loc, input, ok_read);}
    
  if(!in_select){    
    std::cout << "Text to encrypt, [ENTER] to submit text,  CTRL + D to run program   :  " << std::endl;
    get_command_text(input);
  }
  
  if(!key_select){std::cout << "No key selected, no encryption performed!" << std::endl;}
    
  //read in characters
  char in_char{'x'};


  
  for(size_t pos=0 ; pos < input.length(); pos++){
    
    /* Check if character is an alphabetic 
       letter, force it to be uppercase */

    in_char = input.at(pos);
    msg += transformChar(in_char); 
       }

  //run the Cipher
  std::string encrypted = CaesarCipher(msg, key, decrypt);

  //output the results
  if(out_select){put_out_file(out_file_loc, encrypted, ok_write);}
  else{std::cout << encrypted << std::endl;}

  
  if(ok_write && ok_read){ std::cout << "everything went well" << std::endl;}
}

  
  
