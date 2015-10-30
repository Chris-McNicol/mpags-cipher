#include <iostream>
#include <string>


std::string transformChar(char input){
  /* Function which transforms the input character into the correct type

     input - character which is to be transformed

     returns the transformed character */

  std::string output{};
  
  if(isalpha(input)){
    output = toupper(input);
    
    }   
    
    /* Check particular cases when entered characters
       are numbers. Then append the number as a word
       to the msg string */
   
    switch(input) {
    case '0':
      output= "ZERO";
	break;

    case '1':
      output = "ONE";
	break;

    case '2':
      output ="TWO";
	break;
	
    case '3':
      output = "THREE";
	break;

    case '4':
      output = "FOUR";
      break;

    case '5':
      output = "FIVE";
      break;

    case '6':
      output = "SIX";
      break;

    case '7':
    output = "SEVEN";
    break;

    case '8':
      output = "EIGHT";
      break;

    case '9':
      output = "NINE";
      break;      
    }
    return output;
}
  



int main(int argc, char* argv[]){

  std::string argument{};
  for(int arg_check = 1; arg_check < argc; arg_check++){
    argument = argv[arg_check];

    //Check arguments for help flag
    if(argument == "--help" or argument == "-h"){
      std::cout << std::endl << " --help options:" << std::endl;
      std::cout << std::endl  << "Help??? I don't offer help to you!" << std::endl << std::endl ;
    }
    //Check arguments for version flag
    if(argument == "--version"){
      std::cout << std::endl << " --which version:" << std::endl;
      std::cout << std::endl  << "I prefer the versions before George Lucas 'remastered' them";
      std::cout << std::endl << std::endl ;
    }
    //Check arguments for input file flag
    if(argument == "-i"){

      //load_input ( using argv[arg_check + 1] )
      std::cout<< "Using input file : " << argv[arg_check +1] << std::endl;
    }

    //Check arguments for output file flag
    if(argument == "-o"){

      //output_file (to argv[arg_check + 1])
      std::cout<< "Using ouput file : " << argv[arg_check +1] << std::endl;
    }   
   }
 
 
  std::string msg{};
  std::string input{};
  std::string temp{};
  std::string othertemp{};
  
  if(argc > 1){


    //Add all arguments that aren't control options as the input to the cipher
    for(int arg_no = 1; arg_no < argc; arg_no++){

      temp = argv[arg_no];
      
      if(temp!="--help"&&temp!="-h"&&temp!="--version"&&temp!="-i"&&temp!="-o"){
	othertemp = argv[arg_no - 1];
	if(othertemp !="-i" && othertemp !="-o"){
	  input += temp;}}
    }

    
  //read in characters
  char in_char{'x'};
 
  
  for(int pos=0 ; pos < input.length(); pos++){
    //while(std::cin >> in_char){


    /* Check if character is an alphabetic 
       letter, force it to be uppercase */
    in_char = input.at(pos);
    msg += transformChar(in_char);
    
    
             }
      }
    
  /*Output the concatanated string and revel in
    your victory*/  
  std::cout<< msg << std::endl;
  
}
