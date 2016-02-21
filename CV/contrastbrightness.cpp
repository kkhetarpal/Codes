#include <cv.h>
#include <highgui.h>
#include <iostream>

using namespace cv;

double alpha; /**< Simple contrast control */
int beta;  /**< Simple brightness control */

int main( )
{
 /// read image and create output image of same size and type
 Mat image = imread("/home/amazon/blueme.jpg", CV_LOAD_IMAGE_COLOR);
 Mat new_image = Mat::zeros( image.size(), image.type() );

 /// Initialize values
 std::cout<<" Basic Linear Transforms "<<std::endl;
 std::cout<<"-------------------------"<<std::endl;
 std::cout<<"* Enter the alpha value [1.0-3.0]: ";std::cin>>alpha;
 std::cout<<"* Enter the beta value [0-100]: "; std::cin>>beta;

 /// Do the operation new_image(i,j) = alpha*image(i,j) + beta
 for (int i= 0; i < image.rows; i++){
	 for(int j = 0; j < image.cols; j++){
		 for (int c = 0; c < 3; c++){
			 new_image.at<Vec3b>(i,j)[c] =  saturate_cast<uchar>(alpha* (image.at<Vec3b>(i,j)[c]) + beta);
             }
	 }
 }

 /// Create Windows
 namedWindow("Original Image", 1);
 namedWindow("New Image", 1);

 /// Show stuff
 imshow("Original Image", image);
 imshow("New Image", new_image);

 /// Wait until user press some key
 waitKey();
 return 0;
}

