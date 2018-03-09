#ifndef _CAMPBELL_ROBSON_HPP
#define _CAMPBELL_ROBSON_HPP

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstddef>
#include <cmath>
#include <opencv2/opencv.hpp>

/**
 * @brief Calls the function that creates C(x,y)
 * @details Depending on the value of pselector, it will choose between logarithmic and linear
 * 
 * @param prows the size of rows of C(x,y)
 * @param pcols size of cols of C(x,y)
 * @param pselector 1 to be linear, 2 to be logarithmic
 * @return the image C(x,y)
 */
cv::Mat generateGrayScaleImage (const int prows, const int pcols, const int pselector);

/**
 * @brief Fills C(x,y) depending on the value of pselector
 * @details [long description]
 * 
 * @param prows size of rows
 * @param pcols size of columns
 * @param pselector 1 to use linear function, 2 to use logarithmic function
 * @return image in the format C(x,y)
 */
cv::Mat generateMatrix (const int prows, const int pcols, const int pselector);

/**
 * @brief Using matplotlib and a C++ interface, it plots the function in python
 * @details It plots the sine wave in python given certain row
 * 
 * @param pimage the result of generateGrayScaleImage, the image in the format C(x,y)
 * @param prow the given row we want to plot in python.
 * @param pselector 1 to use linear function, 2 to use logarithmic function.
 */
void showRow (cv::Mat pimage, int prow, const int pselector);

#endif
