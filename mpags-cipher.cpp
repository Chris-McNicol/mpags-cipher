#include <iostream>
#include <string>


int main(){



  std::string msg{};
  //read in characters
  char in_char{'x'};

  /* Allow user to enter input characters, Press CTRL+D to exit */

  std::cout<< "Enter input characters, when finished press CTRL + D" << std::endl;
  
  
  while(std::cin >> in_char){


    /* Check if character is an alphabetic 
       letter, force it to be uppercase */
    
    if(isalpha(in_char)){
      
      msg += toupper(in_char);
    }   


    
    /* Check particular cases when entered characters
       are numbers. Then append the number as a word
       to the msg string */

   
    switch(in_char) {

    case '0':
      msg += "ZERO";
	break;

    case '1':
      msg += "ONE";
	break;

    case '2':
      msg += "TWO";
	break;
	
    case '3':
      msg += "THREE";
	break;

    case '4':
      msg += "FOUR";
      break;

    case '5':
      msg += "FIVE";
      break;

    case '6':
      msg += "SIX";
      break;

    case '7':
    msg += "SEVEN";
    break;

    case '8':
      msg += "EIGHT";
      break;

    case '9':
      msg += "NINE";
      break;
    }

  }

  std::cout<< msg << std::endl;
  
}
