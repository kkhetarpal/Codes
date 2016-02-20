#include <cv.h>
#include <highgui.h>

using namespace cv;

int main()
{
  Mat image;
  image = imread( "/home/amazon/blueme.jpg", CV_LOAD_IMAGE_COLOR);

  if(!image.data )
    {
      printf( "No image data \n" );
      return -1;
    }
/*
  namedWindow( "Display Image", 0);
  imshow( "Display Image", image );*/


  Mat B(image);             //copy constructor
  Mat C = B.clone();		//copy using clone
  namedWindow( "Display Image", 0);
  imshow( "Display Image", C );

  waitKey(0);

  return 0;
}

