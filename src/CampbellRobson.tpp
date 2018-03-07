#include "CampbellRobson.hpp"

#include <cstdint>

const uint8_t sine_ma = 128; // sine max amplitude
const uint8_t ct_mv = 127; // wave contrast max value
const double pi = 3.1415926535897;
const char* w_name = "Campbell-Robson representation";

cv::Mat generateMatrix(const int prows, const int pcols)
{
  cv::Mat storage = cv::Mat::zeros(prows,pcols,CV_8UC1);

  for(int i = 0; i < storage.rows; ++i)
  {
    for(int j = 0; j < storage.cols; ++j)
    {
      storage.at<uchar>(i,j) = sine_ma + (ct_mv * i)/(prows-1) * sin((pi/2) * 1/(pcols-1) * j * j);
    }
  }

  //std::cout << "M = " << storage << std::endl;
  cv::imwrite("CampbellRobson.png",storage);
  return storage;
}

void generateGrayScaleImage(const int prows, const int pcols)
{
  cv::Mat matrixFormed = generateMatrix(prows, pcols);
  if(matrixFormed.data)
  {
    cv::namedWindow (w_name,CV_WINDOW_AUTOSIZE);
    cv::imshow (w_name, matrixFormed);
    cv::waitKey (0);
    matrixFormed.release ();
    exit (EXIT_SUCCESS);
  }
  exit (EXIT_FAILURE);
}
