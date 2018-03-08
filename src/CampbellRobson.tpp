#include "CampbellRobson.hpp"

const double k = 1;
const uint8_t sine_ma = 128; // sine max amplitude
const uint8_t ct_mv = 127; // wave contrast max value
const double pi = 3.1415926535897;
const char* wlin_name = "Linear Campbell-Robson representation";
const char* wlog_name = "Logarithm Campbell-Robson representation";
const char* wrow_name = "View of certain row";

cv::Mat generateMatrix(const int prows, const int pcols, const int pselector)
{
  cv::Mat storage = cv::Mat::zeros(prows,pcols,CV_8UC1);
  if(pselector == 1)
  {
  	for(int i = 0; i < storage.rows; ++i)
	{
	  for(int j = 0; j < storage.cols; ++j)
	  {
	  	storage.at<uchar>(i,j) = sine_ma + (ct_mv * i)/(prows-1) * sin((pi/2) * 1/(pcols-1) * j * j);
	  }
	}
	cv::imwrite("LinearCampbellRobson.png",storage);
  } else {
  	double alphaR = log((prows-1)/k)/(prows-1);
  	double alphaC = log((pcols-1)/k)/(pcols-1);
  	for(int i = 0; i < storage.rows; ++i)
  	{
  	  for(int j = 0; j < storage.cols; ++j)
  	  {
  	    storage.at<uchar>(i,j) = sine_ma + (ct_mv * k * exp(alphaR * i)) / (prows-1) * sin((pi/2) * 1/(pcols-1) * pow(k * exp(alphaC * j),2));
	  }
    }
    cv::imwrite("LogCampbellRobson.png",storage);
  }
  return storage;
}

cv::Mat generateGrayScaleImage(const int prows, const int pcols, const int pselector)
{
  cv::Mat matrixFormed = generateMatrix(prows, pcols, pselector);
  if(matrixFormed.data)
  {
  	if(pselector == 1)
  	{
  	  cv::namedWindow(wlin_name,CV_WINDOW_AUTOSIZE);
	  cv::imshow(wlin_name, matrixFormed);
	}else{
	  cv::namedWindow(wlog_name,CV_WINDOW_AUTOSIZE);
	  cv::imshow(wlog_name, matrixFormed);
	}
	cv::waitKey(0);
	return matrixFormed;
  }
  return matrixFormed;
}

void showRow(cv::Mat pimage, int prow)
{
	int cols = pimage.cols;
	cv::Mat show = cv::Mat::zeros(1,cols, CV_8UC1);
	
	cv::namedWindow(wrow_name, CV_WINDOW_AUTOSIZE);
	cv::imshow(wrow_name, pimage.row(prow));
	cv::waitKey(0);
	show.release();

}

