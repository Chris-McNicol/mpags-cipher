
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <map>
#include <iostream>

#include "PlayfairCipher.hpp"
#include "TransformChar.hpp"


PlayfairCipher::PlayfairCipher(std::string thekey){
     setKey(thekey);
       }
   

void PlayfairCipher::setKey(std::string keyToSet){

 
  std::string temp;
  // store the original key
  key_ = keyToSet;

  //Append the alphabet
  temp = keyToSet;
  std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  temp += alphabet;

  //Make sure the key is uppercase
  std::transform(temp.begin(), temp.end(), temp.begin(), toupper);
  
  //Remove non-alpha characters
 
  auto func = [] (char c){
    return (! isalpha(c));};
  
  auto iter(std::remove_if( temp.begin(), temp.end(), func));


 temp.erase(iter, temp.end());


  //Change J-> I

  auto jehova = [] (char b){
    if( b == 'J'){ return 'I';}
    else {return b;}
  };

  std::transform(temp.begin(), temp.end(), temp.begin(), jehova);
  

  //Remove duplicated letters
std::string encountered;
auto close_encounters = [&] (char f){
  auto iter2(std::find(encountered.begin(), encountered.end(), f));
	     if( iter2 == encountered.end()){
	       encountered.push_back(f);
	       return false;}
	     else {return true;}
	     };

  auto iter3(std::remove_if (temp.begin(), temp.end(), close_encounters));
  temp.erase(iter3, temp.end());
  

  

  // Store the coords of each letter

   int row;
  int column;
  int place;
  std::pair<int,int> p1;
  std::pair<char, std::pair<int,int>> s2ipair;
  std::pair<std::pair<int,int>, char> i2spair;
  
  for(char x : alphabet){
    auto iter4(std::find(temp.begin(), temp.end(), x));
    if (iter4 != temp.end()){
      place = std::distance(temp.begin(),iter4);
      row = (int)place/5;
      column = place%5;
      p1 = std::make_pair(row,column);
      s2ipair = std::make_pair(x,p1);
      i2spair = std::make_pair(p1,x);

      str2intMap.insert(s2ipair);
      int2strMap.insert(i2spair);
    }
  }

  

  //Store the playfair cipher key map

 
}


//Wrap Function
int PlayfairCipher::playWrap(int index) const{

  if ( index > 4){index -= 5;}
  if ( index < 0){index += 5;}
  return index;}







//Apply Cipher Function  
std::string PlayfairCipher::applyCipher(const std::string& msg_ref, CipherMode mode) const{

  std::string msg{""};
  std::string input_msg = msg_ref;
  std::string digraph{""};
  std::string returntext;
  std::string encrypteddigraph{""};

  std::pair<int,int> coord1;
  std::pair<int,int> coord2;

  std::pair<int,int> encryptcoord1;
  std::pair<int,int> encryptcoord2;
  

  int shifter{};
  if (mode == CipherMode::Encrypt){ shifter = 1; }
  if (mode ==CipherMode::Decrypt){ shifter = -1; }
   

  //Make sure input is valid
  //Upper case, only chars and J-> I

  msg = transformChar(input_msg);

  auto blahfunc = [] (char b){
    if( b == 'J'){ return 'I';}
    else {return b;}
  };

  std::transform(msg.begin(), msg.end(), msg.begin(), blahfunc);
  

  //Find repeated chars and add an X

  if(mode == CipherMode::Encrypt){
  
  for(size_t foo{0} ; foo < msg.length() - 1; ++foo){

    if (msg[foo] == msg[foo+1]){
      msg.insert(foo+1, "X");
    }
  }

  
  //If the size is odd, add a trailing Z

  if((msg.length())%2 != 0){ msg+="Z";}
  }

  
  //Loop over the input in Digraphs

    for(size_t brum=0; brum < msg.length() -1; brum+=2){
      digraph = "";
      encrypteddigraph = "";
      digraph += msg[brum];
      digraph += msg[brum+1];

      
      //Find the coords for the digraph
      
      auto coord1iter = str2intMap.find(digraph[0]);
      auto coord2iter = str2intMap.find(digraph[1]);

      coord1 = (*coord1iter).second;
      coord2 = (*coord2iter).second;

      
     
  //For each Digraph, decide how to encrypt

      
      //same row
      if( coord1.first == coord2.first){
	
	encryptcoord1 = std::make_pair(coord1.first, playWrap(coord1.second +shifter));
	encryptcoord2 = std::make_pair(coord2.first, playWrap(coord2.second +shifter));
      }

      
      //same column
      else if( coord1.second == coord2.second){
	
	encryptcoord1 = std::make_pair(playWrap(coord1.first + shifter), coord1.second);
	encryptcoord2 = std::make_pair(playWrap(coord2.first + shifter), coord2.second);
      }

      
      //else rectangle -> swap column coords
      else{
	
	encryptcoord1 = std::make_pair(coord1.first,coord2.second);
	encryptcoord2 = std::make_pair(coord2.first,coord1.second);
      }

      encrypteddigraph += (*int2strMap.find(encryptcoord1)).second;
      encrypteddigraph += (*int2strMap.find(encryptcoord2)).second;
     
	returntext+=encrypteddigraph;
	}
  //return the text
  
  return returntext;
 
   }






//Encrypt Function
std::string PlayfairCipher::encrypt(const std::string& msg) const {

  return this->applyCipher(msg, CipherMode::Encrypt);}

//Decrypt Function
std::string PlayfairCipher::decrypt(const std::string& msg) const {

  return this->applyCipher(msg, CipherMode::Decrypt);}

  

//Make it Look Nice
void PlayfairCipher::makeItLookNice(std::string& msg) const{

  if( msg[msg.length() - 1] == 'Z'){

    msg.erase(msg.length()-1, 1);
  }


  for(size_t pos=0; pos < msg.length() -1; pos++){

    if( (msg[pos] == 'X') && (msg[pos+1] == msg[pos-1])){
      msg.erase(pos, 1);
    }
  }
}






