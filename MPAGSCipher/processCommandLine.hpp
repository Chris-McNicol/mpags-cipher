#ifndef INC_PROCCMDLINE_H
#define INC_PROCCMDLINE_H


#include <iostream>
#include <string>
#include <fstream>

#include "CommandLineHelpers.hpp"

struct CommandLineInfo {

  bool help = false;
  bool version = false ;
  bool in_select = false ;
  bool out_select = false;
  bool in_err = false;
  bool out_err = false;
  bool decrypt = false;
  int key = 0;
  bool key_select = false;
  
  std::string in_file_loc;
  std::string out_file_loc;

};

bool processCommandLine(const int argc, char* argv[], CommandLineInfo& Info);

#endif
