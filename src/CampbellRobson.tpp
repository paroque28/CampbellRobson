#include "CampbellRobson.hpp"
#include "matplotlibcpp.h"

const double k = 23	; //min frecuency representable
const uint8_t sine_ma = 128; // sine max amplitude
const uint8_t ct_mv = 127; // wave contrast max value
const double pi = 3.1415926535897;
const char* wlin_name = "Linear Campbell-Robson representation";
const char* wlog_name = "Logarithm Campbell-Robson representation";
const char* wrow_name = "View of certain row";

namespace plt = matplotlibcpp;

cv::Mat generateMatrix (const int prows, const int pcols, const int pselector)
{
  cv::Mat storage = cv::Mat::zeros (prows,pcols,CV_8UC1);
  if (pselector == 1)
  {
    for (int i = 0; i < storage.rows; ++i)
    {
      for (int j = 0; j < storage.cols; ++j)
      {
        storage.at<uchar>(i,j) = sine_ma + (ct_mv * i)/(prows-1) * sin ((pi/(2*pi)) * 1/(pcols-1) * j * j); //stores the value of the function in a given C(i,j)
      }
    }
    cv::imwrite ("LinearCampbellRobson.png",storage); //saves the picture
  }
  else
  {
    double alphaR = log ((prows-1)/k)/(prows-1);
    double alphaC = log ((pcols-1)/k)/(pcols-1);
    for (int i = 0; i < storage.rows; ++i)
    {
      for (int j = 0; j < storage.cols; ++j)
      {
        storage.at<uchar>(i,j) = sine_ma + (ct_mv * k * exp (alphaR * i)) / (prows-1) * sin ((pi/(2*pi)) * 1/(pcols-1) * pow (k * exp (alphaC * j),2));
      }
    }
    cv::imwrite ("LogCampbellRobson.png",storage);
  }
  return storage;
}

cv::Mat generateGrayScaleImage (const int prows, const int pcols, const int pselector)
{
  cv::Mat matrixFormed = generateMatrix (prows, pcols, pselector);
  if (matrixFormed.data)
  {
    if (pselector == 1)
    {
      cv::namedWindow (wlin_name,CV_WINDOW_AUTOSIZE);
      cv::imshow (wlin_name, matrixFormed);
    }
    else
    {
      cv::namedWindow (wlog_name,CV_WINDOW_AUTOSIZE);
      cv::imshow (wlog_name, matrixFormed);
    }
    cv::waitKey (0); //waits until one key is pressed to continue the execution
    return matrixFormed;
  }
  return matrixFormed;
}

void showRow (cv::Mat pimage, int prow, const int pselector)
{
	int _cols = pimage.cols;
  int _rows = pimage.rows;
	double alphaR = log ((_rows-1)/k)/(_rows-1);
  double alphaC = log ((_cols-1)/k)/(_cols-1);
  std::vector<double> sine(_cols);
  std::vector<double> pos(_cols);
  if(pselector == 1){
  	for(int j = 0; j < _cols; ++j)
	  {
	  	sine.at(j) = sine_ma + (ct_mv * prow)/(_rows-1) * sin ((pi/(2*pi)) * 1/(_cols-1) * j * j);
	  	pos.at(j) = j;
	  }
  }
  else
  {
  	for(int j = 0; j < _cols; ++j)
	  {
	  	sine.at(j) = sine_ma + (ct_mv * k * exp (alphaR * prow)) / (_rows-1) * sin ((pi/(2*pi)) * 1/(_cols-1) * pow (k * exp (alphaC * j),2));
	  	pos.at(j) = j;
	  }
  }

  plt::plot(pos,sine); //plots in python the sine function to a given row and from 0 to _cols
  plt::show(); //shows the plot
}
