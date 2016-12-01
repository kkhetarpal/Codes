//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//
//int main( )
//{
// /// read image and create output image of same size and type
// Mat image = imread("lena.jpg", CV_LOAD_IMAGE_COLOR);
// Mat new_image = Mat::zeros( image.size(), image.type() );
//
// Mat src_gray, detected_edges;
// cvtColor( image, src_gray, CV_BGR2GRAY );
// blur( src_gray, detected_edges, Size(3,3) );   //blur the image with a filter of kernel size 3:
//
// Canny( detected_edges, detected_edges, 50, 50*3, 3 ); 
//
//
// /// Create Windows
// namedWindow("Original Image", 1);
// namedWindow("New Image", 1);
//
// /// Show stuff
// imshow("Original Image", image);
// imshow("detected_edges", detected_edges);
// imwrite( "EdgeDetection.jpg", detected_edges );
//
// /// Wait until user press some key
// waitKey();
// return 0;
//}