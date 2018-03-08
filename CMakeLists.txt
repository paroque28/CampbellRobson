cmake_minimum_required( VERSION 3.5.1 )

set( CMAKE_CXX_STANDARD 11 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -funroll-loops" )

FIND_PACKAGE( Boost 1.58 COMPONENTS program_options REQUIRED )
FIND_PACKAGE( OpenCV REQUIRED )

ADD_EXECUTABLE( image_viewer src/main.cpp src/CampbellRobson.tpp src/param_parser.tpp )
TARGET_LINK_libraries( image_viewer ${OpenCV_LIBS} ${Boost_LIBRARIES} )
