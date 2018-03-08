cmake_minimum_required(VERSION 3.5.1)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -funroll-loops -lboost_program_options")

FIND_PACKAGE( Boost 1.65 COMPONENTS program_options REQUIRED)
find_package(OpenCV REQUIRED )

ADD_EXECUTABle( image_viewer src/main.cpp src/CampbellRobson.tpp src/param_parser.tpp)
TARGET_LINK_libraries( image_viewer ${OpenCV_LIBS} ${Boost_LIBRARIES} )
