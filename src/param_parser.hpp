#ifndef _PARAM_PARSER_HPP
#define _PARAM_PARSER_HPP

#include <cstdlib>
#include <iostream>
#include <string>

#include "boost/program_options.hpp"


/**
 * @brief Using program options by boost library, the input is parsed to define the flow of the program.
 * 
 * @param argc amount of inputs
 * @param argv the inputs
 */
void param_parser (int argc, char** argv);

#endif
