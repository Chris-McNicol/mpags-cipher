#include <iostream>
#include <exception>




class helpException: public std::exception
{

  virtual const char* what() const throw(){
    return "Help called";
  }
} helpEx;

class versionException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Version was called";
  }
} versionEx;


struct myStop {};







void help_called(){

  std::cout << std::endl << " --help options:" << std::endl;
  std::cout << std::endl  <<"Expected arguments:" << std::endl ;
  std::cout << "Required : " << std::endl;
  std::cout << " -k *OR* -key [encryption key]" << std::endl;
  std::cout << " -cipher [Cipher] : choice of Caesar, Playfair & Vigenere" << std::endl << std::endl;
  std::cout << "Optional : " << std::endl;
  std::cout << " -i [inputfile]" << std::endl;
  std::cout << " -o [outputfile]" <<std::endl << std::endl <<std::endl;
  //throw myStop();
 }


void version_called(){

  std::cout << std::endl << " --which version:" << std::endl;
      std::cout << std::endl  << "I prefer the versions before George Lucas 'remastered' them";
      std::cout << std::endl << std::endl ;

      //throw versionEx;
}

void input_error_called() {

  std::cout << "Oi! , You didn't give the right input file information" << std::endl; }

void output_error_called() {

  std::cout << "Oi!,  You didn't give the right input file information" << std::endl; }



