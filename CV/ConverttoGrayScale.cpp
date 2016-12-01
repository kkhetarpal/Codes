//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//
//int main( int argc, char** argv )
//{
//    Mat image;
//    image = imread("lena.jpg"); // Read the file
//
//    if(! image.data ) // Check for invalid input
//    {
//        cout << "Could not open or find the image" << std::endl ;
//        return -1;
//    }
//
//   
//	Mat gray_image;
//	cvtColor( image, gray_image, CV_BGR2GRAY );
//	
//	namedWindow( "Original Image", WINDOW_NORMAL ); // Create a window for display.
//    imshow( "Original Image", image ); // Show our image inside it.
//
//	namedWindow( "Gray Image", WINDOW_NORMAL ); // Create a window for display.
//    imshow( "Gray Image", gray_image ); // Show our image inside it.
//
//	for (int i = 0; i < gray_image.rows; i++){
//	  for (int j =0; j < gray_image.cols; j++){
//
//		  if (gray_image.at<uchar>(i,j) > 100)
//			  gray_image.at<uchar>(i,j) = 255;
//	  }
//	}
//
//	namedWindow("Image after segmentation",0);
//	imshow("Image after segmentation", gray_image);
//	
//
//	imwrite( "ImageAfterSegmentation.jpg", gray_image );
//    waitKey(0); // Wait for a keystroke in the window
//    return 0;
//}