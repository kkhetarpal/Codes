#include <cv.h>
#include <highgui.h>

using namespace std;
using namespace cv;

int main()
{
  Mat image;
  //image = imread( "/home/amazon/blueme.jpg", CV_LOAD_IMAGE_COLOR);
  image = imread("/home/amazon/cpp/newbie/opencv/rgb.png", CV_LOAD_IMAGE_COLOR);

  if(!image.data )
    {
      printf( "No image data \n" );
      return -1;
    }


      // Create Matrices (make sure there is an image in input!)
      Mat channel[3];
      imshow( "Original Image", image );


      // The actual splitting.
      split(image, channel);
      //channel[0]=Mat::zeros(image.rows, image.cols, CV_8UC1);  //Set blue channel to 0
      //channel[1]=Mat::zeros(image.rows, image.cols, CV_8UC1);    //Set green channel to 0
      channel[2]=Mat::zeros(image.rows, image.cols, CV_8UC1);  //Set red channel to 0

      merge(channel,3,image);
      imshow("Removed Red Channel", image);


  waitKey(0);

  return 0;
}

