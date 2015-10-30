#include <iostream>
#include <string>
#include <fstream>


//ichange
// Our program headers
#include "TransformChar.hpp"
#include "CommandLineHelpers.hpp"

void get_in_file(std::string location, std::string& input, bool& ok_read){

  std::ifstream in_file {location};
  if (in_file.good()) { ok_read = true;
    in_file >> input;}
  
}

void put_out_file(std::string location, std::string& msg, bool& ok_write){
  std::ofstream out_file(location);
  out_file << msg ;
  if (out_file.good()) { ok_write = false;}
}


bool processCommandLine(const int argc,char* argv[], bool& help, bool& version, bool& in_err,bool& out_err,std::string& stuff, std::string& in_file_loc, std::string& out_file_loc){

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
      if(arg_check == argc -1){in_err = true;}
      else{ in_file_loc = argv[arg_check +1];}
    }

    //Check arguments for output file flag
    if(argument == "-o"){
      if(arg_check == argc-1){out_err = true;}
      else{out_file_loc = argv[arg_check +1];}
    }   
   }

  if(argc > 1){

    
    //Add all arguments that aren't control options as the input to the cipher
    for(int arg_no = 1; arg_no < argc; arg_no++){

      temp = argv[arg_no];
      
      if(temp!="--help"&&temp!="-h"&&temp!="--version"&&temp!="-i"&&temp!="-o"){
	othertemp = argv[arg_no - 1];
	if(othertemp !="-i" && othertemp !="-o"){
	  stuff += temp;}}
    }
    
  }
  return true;
}
  

int main(int argc, char* argv[]){  
 
  
  std::string msg{};
  std::string input{};
  std::string stuff{};
  std::string in_file_loc{};
  std::string out_file_loc{};
  

  bool help{false};
  bool version{false};
  bool in_err{false};
  bool out_err{false};

  bool ok_read{false};
  bool ok_write{false};

  
  bool blah = processCommandLine(argc,argv,help,version,in_err,out_err, stuff, in_file_loc, out_file_loc);

  if(blah) { std::cout << "Command Line entry satisfactory" << std::endl;}
  if(help) { help_called();}
  if(version) {version_called();}
  if(in_err) {input_error_called();}
  if(out_err){output_error_called();}

  if(!in_err){get_in_file(in_file_loc, input, ok_read);}
  if(ok_write){}
    
    
  //read in characters
  char in_char{'x'};


  msg += stuff;
  
  for(size_t pos=0 ; pos < input.length(); pos++){
    //while(std::cin >> in_char){


    /* Check if character is an alphabetic 
       letter, force it to be uppercase */
    in_char = input.at(pos);
    msg += transformChar(in_char);
    
    
             }

  put_out_file(out_file_loc, msg, ok_write);

  if(ok_write && ok_read){ std::cout << "everything went well" << std::endl;}


  
      }
    
  /*Output the concatanated string and revel in
    your victory*/  
  //std::cout<< msg << std::endl;
  

