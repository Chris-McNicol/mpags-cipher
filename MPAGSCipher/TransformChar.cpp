#include <string>

std::string transformChar(char input){
  /* Function which transforms the input character into the correct type

     input - character which is to be transformed

     returns the transformed character */

  std::string output{};
  
  if(isalpha(input)){
    output = toupper(input);
    
    }   
    
       
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



std::string transformChar(std::string str){

  char in_char{'x'};
  std::string toReturn{""};
  for(size_t pos = 0; pos < str.length(); ++pos){

    in_char = str.at(pos);
    toReturn += transformChar(in_char);
  }
  return toReturn;
}
