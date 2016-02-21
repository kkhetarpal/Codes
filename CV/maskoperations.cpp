/*
/*
 * imagefilters.cpp
 *
 *  Created on: Feb 20, 2016
 *  Author: Khimya
 */

//Example #1 Blurring

#include <cv.h>
#include <highgui.h>

using namespace std;
using namespace cv;


void Sharpen(const Mat& source, Mat& dest)
{
   CV_Assert(source.depth() == CV_8U);  // accept only uchar images

   dest.create(source.size(), source.type());  //Create a resulting image same as source size and type
   const int nchannels = source.channels();

  for(int j = 1; j < source.rows; ++j){

	  const uchar* previous = source.ptr<uchar>(j-1);
	  const uchar* current = source.ptr<uchar>(j );
	  const uchar* next = source.ptr<uchar>(j+1);

	  uchar* output = dest.ptr<uchar>(j);


	  for (int i = nchannels; i < nchannels* (source.cols - 1) ; ++i){

		  *output = saturate_cast<uchar>(5 * current[i] - current[i - nchannels] - current[i + nchannels] - previous[i] - next[i]);
		  *output++;
	  }


	  dest.row(0).setTo(Scalar(0));
	  dest.row(dest.rows - 1).setTo(Scalar(0));
	  dest.col(0).setTo(Scalar(0));
	  dest.col(dest.cols - 1).setTo(Scalar(0));

  }

}


int main()
{
  Mat src,dst;
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


  //Sharpen(src, dst);

  Mat kern = (Mat_<char>(3,3) <<  0, -1,  0,
                                 -1,  5, -1,
                                  0, -1,  0);

  filter2D(src, dst, src.depth(), kern);
  namedWindow("Sharpen Image",0);
  imshow("Sharpen Image", dst);


  waitKey(0);
  return 0;
}




