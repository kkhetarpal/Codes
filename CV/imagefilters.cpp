/*
 * imagefilters.cpp
 *
 *  Created on: Feb 20, 2016
 *      Author: amazon
 */

//Example #1 Image Segmentation

#include <cv.h>
#include <highgui.h>

using namespace std;
using namespace cv;

int main()
{
  Mat src;
  //image = imread( "/home/amazon/blueme.jpg", CV_LOAD_IMAGE_COLOR);
  //image = imread("/home/amazon/cpp/newbie/opencv/rgb.png", CV_LOAD_IMAGE_COLOR);
  src = imread("/home/amazon/lena.jpg", CV_LOAD_IMAGE_COLOR);

  if(!src.data )
    {
      printf( "No image data \n" );
      return -1;
    }

  namedWindow("Original Image",0);
  imshow("Original Image", src);

  Mat grey;

  cvtColor(src, grey, CV_RGB2GRAY);
  namedWindow("Gray Scale Image",0);
  imshow("Gray Scale Image",grey);



  for (int i = 0; i < grey.rows; i++){
	  for (int j =0; j < grey.cols; j++){

		  if (grey.at<uchar>(i,j) > 100)
			  grey.at<uchar>(i,j) = 255;
	  }
  }

  namedWindow("Image after segmentation",0);
  imshow("Image after segmentation", grey);
  waitKey(0);

  return 0;
}

