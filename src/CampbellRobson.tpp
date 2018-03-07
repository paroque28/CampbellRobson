#include "CampbellRobson.hpp"

const double pi = 3.1415926535897;

cv::Mat generateMatrix(const int prows, const int pcols)
{
	cv::Mat storage = cv::Mat::zeros(prows,pcols,CV_8UC1);

	for(int i = 0; i < storage.rows; ++i)
	{
		for(int j = 0; j < storage.cols; ++j)
		{
			storage.at<uchar>(i,j) = 128 + 127/(prows-1)*i*sin( pi*(1/(2*pcols-2))*j*j);
			std::cout << 128 + 127/(prows-1)*i*sin( pi*(1/(2*pcols-2))*j*j) << std::endl;
		}
	}

	return storage;
}

void generateGrayScaleImage(const int prows, const int pcols)
{
	cv::Mat matrixFormed = generateMatrix(prows, pcols);
	if(matrixFormed.data)
	{
		cv::namedWindow("Campbell-Robson representation",CV_WINDOW_AUTOSIZE);
		cv::imshow("Campbell-Robson representation", matrixFormed);
		cv::waitKey(0);
		matrixFormed.release();
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_FAILURE);
}