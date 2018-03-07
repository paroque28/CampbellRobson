#include <cstdlib>
#include <iostream>
#include <string>

#include "boost/program_options.hpp"
#include "CampbellRobson.tpp"
#include "param_parser.hpp"


namespace po = boost::program_options;

void param_parser(int ac, char** av)
{

	int _rows = 0;
	int _cols = 0;
	// Declare the supported options.
    po::options_description desc("Allowed options");
    desc.add_options()
            ("help,h", "help")
            ("rows,r", po::value<int>()->default_value(512), "rows")
            ("cols,c", po::value<int>()->default_value(512), "cols")
            ("lineal,l", po::value<bool>()->default_value(false), "lineal")
            ("row,x", po::value<bool>()->default_value(false), "cols")
            ;

    po::variables_map vm;
    po::store(po::parse_command_line(ac, av, desc), vm);
    po::notify(vm);

    if (vm.count("help")) {
        std::cout << desc << "\n";
        exit(EXIT_SUCCESS);
    }

    if (vm.count("rows")) {
    	_rows = vm["rows"].as<int>();
        std::cout << "Rows were set to "
             << vm["rows"].as<int>() << ".\n";
    } if(vm.count("cols")){
    	_cols = vm["cols"].as<int>();
    	std::cout << "Rows were set to "
             << vm["rows"].as<int>() << ".\n";
    }else {
        std::cout << "Rows were not set.\n";
    }

    generateGrayScaleImage(_rows,_cols);
}