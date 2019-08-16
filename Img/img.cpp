#include <stdlib.h>
#include <math.h>
#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
using namespace cv;
using namespace std;

int main(){
	Mat image = Mat :: zeros(400,400,CV_8UC4);
	
	rectangle(image, Point(300,200), Point(100,300), Scalar(255, 255, 255), -1, 8);
	
	
	circle(image, Point(200,200),100.0,Scalar( 255, 255, 255),-1,8);
	
	ellipse( image,Point( 245, 175 ),Size( 6.0, 16.0 ),90,0,360,Scalar( 0, 0, 0 ),-1,8 );
	ellipse( image,Point( 145, 175 ),Size( 6.0, 16.0 ),90,0,360,Scalar( 0, 0, 0 ),-1,8 );
	line(image, Point(150,250),Point(250,240), Scalar(0, 0, 0));
	
	imshow("Imagen", image);
	waitKey(0);
	return 0;
	}
