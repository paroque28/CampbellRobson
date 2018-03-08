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

cv::Mat generateGrayScaleImage (const int prows, const int pcols);

cv::Mat generateMatrix (const int prows, const int pcols);

void showRow (cv::Mat pimage, int prow);

#endif
