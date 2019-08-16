#include <stdlib.h>
#include <math.h>
#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
using namespace cv;
using namespace std;

void histo(Mat *);
float pi = atan(1)*4;

int main (){
	Mat im;
	int i,j;

	im=imread("/home/alexismcfly/Imágenes/Morga.jpg",0);

	Mat img2(im.rows*2,im.cols*2, CV_8UC1, Scalar(0));
	Mat img3(im.rows*2,im.cols*2, CV_8UC1, Scalar(0));
	Mat img4(im.rows*2,im.cols*2, CV_8UC1, Scalar(0));
	
	
	
	
	
	
	
	for (i = 0; i < im.rows; i++){
		for (j = 0; j < im.cols; j++){
		img2.at<char>((i*cos(pi/4)-j*sin(pi/4))+20,(i*sin(pi/4)+j*cos(pi/4))+10)=im.at<char>(i,j);//rotacion
		}
		printf(" \n ");
	}

	imshow("a)" ,img2);
	waitKey(0);
	
	
	
	



	/*
	for (i = 0; i < im.rows; i++){
		for (j = 0; j < im.cols; j++){
		img2.at<char>((i*cos(pi/6)-j*sin(pi/6)+20),(i*sin(pi/6)*tan(pi/6)+j*cos(pi/6)))=im.at<char>(i,j);//sisalla al mismo tiempo que rota
		//img2.at<char>(i,(i*tan(pi/6)+j))=im.at<char>(i,j);//solo sisalla pd: no se si asi se escriba sisalla :v

		}
		printf(" \n ");
	}
	imshow("b)" ,img2);
	waitKey(0);
	*/
	
	
	
	
	
	//esta parte solo mueve y agranda poquito
	/*for (i = 0; i < im.rows; i++){
		for (j = 0; j < im.cols; j++){
		img3.at<char>((i*0.5)+10,(j*0.5)+20-5)=im.at<char>(i,j);
		}
		printf(" \n ");
	}
	imshow("c)" ,img3);
	waitKey(0);*/
	
	
	
	
	
	
	
	namedWindow("Test", WINDOW_AUTOSIZE);
	}
	
