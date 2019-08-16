#include <stdlib.h>
#include <math.h>
#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
float pi = atan(1)*4;
int main (){
	String imagen = "/home/alexismcfly/Imágenes/Selección_018.png";

    Mat im = imread(imagen, CV_LOAD_IMAGE_GRAYSCALE);
	Mat img2(im.rows*2,im.cols*2, CV_8UC1, Scalar(0));
	 

    Mat dst;
    Mat kernel = (Mat_<char>(3, 3) << 1,  1, 1,
                                      1, 1, 1,
                                      1,  1, 1);

int i,j;

for (i = 0; i < im.rows; i++){
		for (j = 0; j < im.cols; j++){
		
		
		img2.at<char>((i*2),(j*2))=im.at<char>(i,j);
		
		
		
		}
		printf(" \n ");
	}
	
	
	
    cv::filter2D(img2, dst, img2.depth(), kernel);

 imshow("Display Image", img2);
waitKey(0);
imshow("Display Filter2D", dst);   
    

    waitKey(0);

    return 0;
	
	}
