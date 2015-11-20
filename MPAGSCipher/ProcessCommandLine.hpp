#ifndef INC_PROCCMDLINE_H
#define INC_PROCCMDLINE_H


#include <iostream>
#include <string>
#include <fstream>

#include "CommandLineHelpers.hpp"
#include "HelpfulEnums.hpp"



/**
 *Takes command line arguments and sets the options stored in the CommandLineInfo struct.
 * \param argc \param argv  command line arguments
 * \param Info and instance of the CommandLineInfo structure
 * \returns a boolean 'success' flag
 **/
bool processCommandLine(const int argc, char* argv[], CommandLineInfo& Info);

#endif
