#include <cstdlib>
#include <iostream>
#include <string>

#include "boost/program_options.hpp"
#include "CampbellRobson.tpp"
#include "param_parser.hpp"

namespace po = boost::program_options;

void param_parser (int ac, char** av)
{
  int _rows = 0;
  int _cols = 0;
  int _selector = 2;
  int _rowSelec = 0;

  // Declare the supported options.
  po::options_description desc ("Allowed options");
  desc.add_options ()
    ("help,h", "help")
    ("rows,r", po::value<int>()->default_value(512), "rows")
    ("cols,c", po::value<int>()->default_value(512), "cols")
    ("linear,l", "linear")
    ("xrow,x", po::value<int>()->default_value(0), "xrow")
    ;

  po::variables_map vm;
  po::store (po::parse_command_line (ac, av, desc), vm);
  po::notify (vm);

  if (vm.count ("help"))
  {
  	std::cout << desc << "\n";
  	exit (EXIT_SUCCESS);
  }

  if (vm.count ("rows"))
  {
  	_rows = vm["rows"].as<int>();
  	std::cout << "Rows were set to "
  	          << vm["rows"].as<int>() << ".\n";
  }

  if (vm.count ("cols"))
  {
  	_cols = vm["cols"].as<int>();
    std::cout << "Cols were set to "
              << vm["rows"].as<int>() << ".\n";
  }
  else
  {
  	std::cout << "Rows were not set.\n";
  }

  if (vm.count ("linear"))
  {
  	_selector = 1;
  }

  cv::Mat result = generateGrayScaleImage (_rows,_cols,_selector);
  if (vm.count ("xrow"))
  {
  	_rowSelec = vm["xrow"].as<int>();
  	showRow (result, _rowSelec);
  }
}
