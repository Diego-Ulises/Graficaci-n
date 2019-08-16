#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace cv;
using namespace std;

void histo(Mat *);
int his[256];
float pi = atan(1)*4;
int main (){
	Mat im;
	int i,j;
	im=imread("/home/alexismcfly/Imágenes/chelsea_logo.png",0);
	Mat img2(im.rows*2,im.cols*2, CV_8UC1, Scalar(0));
	Mat img3(im.rows*2,im.cols*2, CV_8UC1, Scalar(0));
	Mat imgk(im.rows*2,im.cols*2, CV_8UC1, Scalar(0));
	
	namedWindow("Test", WINDOW_AUTOSIZE);

	imshow("Test",im);
	for (i = 0; i < im.rows; i++){
		for (j = 0; j < im.cols; j++){
			
		printf(" %d ",(int)im.at<uchar>(i,j));	
		img2.at<char>((i*cos(pi/6)-j*sin(pi/6))+500,(i*sin(pi/6)+j*cos(pi/6))+300)=im.at<char>(i,j);
			imgk.at<char>(i*2,j*2)=im.at<char>(i,j);
		im.at<char>(i,j)=150-im.at<uchar>(i,j);
		
		}
		printf(" \n ");
	}
	
	//sssad
	
	//histo(*img2);
	imshow("expandir" ,imgk);
	waitKey(0);
	imshow("uno" ,img2);
	waitKey(0);
	
	for (i = 0; i < im.rows; i++){
		for (j = 0; j < im.cols; j++){
			
		printf(" %d ",(int)im.at<uchar>(i,j));	
		img3.at<char>(i+100,(i*tan(pi/6)+j)+100)=im.at<char>(i,j);
		
		
		}
		printf(" \n ");
	}
	imshow("dos" ,img3);
	waitKey(0);
	}
	
	
	
/*void histo(Mat *aux){
	
	int i,j;
	for (i = 0; i < 256; i++){
		his[i]=0;
	}
	
	Mat ma(256, 256, CV_8UC1, Scalar(256));
	
	int mt[256][256];
	
	for (i = 0; i < 256; i++){
		for (j = 0; j < 256; j++){
			mt[i][j]=0;
			
		}
	}
	
	for (i = 0; i < 100; i++){
		for (j = 0; j < 100; j++){
			//his[*(aux+i*100+j)]++;
			
		}
	}
	
	for (i = 0; i < 256; i++){
		if(his[i]>0){
		
		his[i]=his[i]/40;
		
	}}
	
	for (i = 0; i < 256; i++){
		if(his[i]>0){
			printf("%5d",i);
		for (j = 0; j < his[i]; j++){
			
			mt[i][j]=255;
			printf(" %4d ",mt[i][j]);
		}
		printf("\n");}
	}
	
	
	for (i = 0; i < 256; i++){
		for (j= 0; j < 256; j++){
		ma.at<char>(i,j)=mt[i][j];	
		}
	}

	
 namedWindow("img", WINDOW_AUTOSIZE);
imshow("img",ma);
waitKey();
	
}*/
