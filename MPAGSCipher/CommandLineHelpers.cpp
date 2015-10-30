#include <iostream>

void help_called(){

  std::cout << std::endl << " --help options:" << std::endl;
  std::cout << std::endl  << "Help??? I don't offer help to you!" << std::endl << std::endl ; }


void version_called(){

  std::cout << std::endl << " --which version:" << std::endl;
      std::cout << std::endl  << "I prefer the versions before George Lucas 'remastered' them";
      std::cout << std::endl << std::endl ;
}

void input_error_called() {

  std::cout << "Oi! , You didn't give the right input file information" << std::endl; }

void output_error_called() {

  std::cout << "Oi!,  You didn't give the right input file information" << std::endl; }

