

#include <vector>




class Cipher{



  const std::vector<char> alphabet = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};


public:
  int wrap(int index){

    if(index < 0){ index += 26;}
    if(index > 25){ index -= 26;}

    return index;
  }

  char shift(char input, int key, bool decrypt){

    int index{0};

    

    if(decrypt) { key = -key;}

    for(size_t i =0; i < alphabet.size(); i++){
      if( input == alphabet[i]){
	index = i;
	
      }
    }
      return alphabet[ wrap(index + key) ];
  }

  std::string apply_cipher(std::string msg, int key, bool decrypt){

    std::string output{};
    //bool success{false};
    //char temp{'x'};

    for(size_t i=0; i < msg.length() ;i++){
      output += shift(msg[i], key, decrypt);
    }
    return output;
  }
    

};
