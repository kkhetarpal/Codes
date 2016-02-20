#include <cv.h>
#include <highgui.h>

using namespace std;
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

  Mat B(image), C;             //copy constructor
  B.copyTo(C);		//copy using clone


  namedWindow( "Display Image", 0);
  imshow( "Display Image", C );

  Mat E = Mat::eye(4, 4, CV_64F);
  cout << "E = " << endl << " " << E << endl << endl;

  Mat O = Mat::ones(2, 2, CV_32F);
  cout << "O = " << endl << " " << O << endl << endl;

  Mat Z = Mat::zeros(3,3, CV_8UC1);
  cout << "Z = " << endl << " " << Z << endl << endl;

  waitKey(0);

  return 0;
}

