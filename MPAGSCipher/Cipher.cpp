
#include <vector>
#include <string>


class Cipher{

  //A vector containing the alphabet
  const std::vector<char> alphabet = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};


public:

  //wrap the index so it won't go out of bounds
  int wrap(int index){

    if(index < 0){ index += 26;}
    if(index > 25){ index -= 26;}

    return index;
  }

  //returns the character that is shifted
  char shift(char input, int key, bool decrypt){

    int index{0};
 
    //decryption shifts the other way
    if(decrypt) { key = -key;}

    //finds the index of the current char
    for(size_t i =0; i < alphabet.size(); i++){
      if( input == alphabet[i]){
	index = i;	
      }
    }
    
    //return the char from a shifted position
      return alphabet[ wrap(index + key) ];
  }



  //applies shift for each char in a string
  std::string apply_cipher(std::string msg, int key, bool decrypt){

    std::string output{};
    
    for(size_t i=0; i < msg.length() ;i++){
      output += shift(msg[i], key, decrypt);
    }
    return output;
  }
    

};
