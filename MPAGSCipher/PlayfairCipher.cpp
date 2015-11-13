
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <map>

#include "PlayfairCipher.hpp"


PlayfairCipher::PlayfairCipher(std::string thekey, CipherMode decrypt_mode)
  :key_{thekey},mode_{decrypt_mode}
   {
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
    return ! ( isalpha(c));};
  
  auto iter(std::remove_if ( temp.begin(), temp.end(), func));
  temp.erase(iter);
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
  temp.erase(iter3);
  



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

int PlayfairCipher::playWrap(int index){

  if ( index > 4){index -= 5;}
  if ( index < 0){index += 5;}
  return index;}

  
std::string PlayfairCipher::encrypt(std::string msg){

  std::string othertemp;
  std::string digraph;
  std::string returntext;
  std::string encrypteddigraph;

  std::pair<int,int> coord1;
  std::pair<int,int> coord2;

  std::pair<int,int> encryptcoord1;
  std::pair<int,int> encryptcoord2;
  
  //Make sure input is valid
  //Upper case, only chars and J-> I

  //Find repeated chars and add an X

  for(size_t foo=0; foo < othertemp.length() - 1; ++foo){

    if (othertemp[foo] == othertemp[foo+1]){
      othertemp.insert(foo+1, "X");
    }

  //If the size is odd, add a trailing Z

    if(foo%2 == 0){ othertemp+="Z";}
    
  //Loop over the input in Digraphs

    for(size_t brum=0; brum < othertemp.length() -1; brum+=2){

      digraph = othertemp[brum] + othertemp[brum+1];

      //Find the coords for the digraph
      
      auto coord1iter = str2intMap.find(digraph[0]);
      auto coord2iter = str2intMap.find(digraph[1]);

      coord1 = (*coord1iter).second;
      coord2 = (*coord2iter).second;
 

  //For each Digraph, decide how to encrypt

      //same row
      if( coord1.first == coord2.first){
	encryptcoord1 = std::make_pair(coord1[0], playWrap(coord1[1] + 1));
	encryptcoord2 = std::make_pair(coord1[0], playWrap(coord2[1] + 1));
      }

      //same column
      if( coord1[1] == coord2[1]){
	encryptcoord1 = std::make_pair(playWrap(coord1[0] + 1), coord1[1]);
	encryptcoord2 = std::make_pair(playWrap(coord2[0] + 1), coord2[1]);
      }

      else{

	encryptedcoord1 = std::make_pair(coord1[0],coord2[1]);
	encryptedcoord2 = std::make_pair(coord2[0],coord1[1]);
      }

      encrypteddigraph = (*int2strMap.find(encryptedcoord1)).second + (*int2strMap.find(encryptedcoord2)).second;
      
	returntext+=encrypteddigraph;
	}
  //return the text
  
  return msg;
   }    










