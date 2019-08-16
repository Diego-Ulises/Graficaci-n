#include "opencv2/opencv.hpp"

#include <stdlib.h>
#include <math.h>
#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
#include "opencv2/opencv.hpp"
using namespace cv;
using namespace std;

int main (){
int x = 10,y = 9;
VideoCapture cap(0);
if(!cap.isOpened()){
return -1;
}

Mat frames, gris;

for(;;){
cap >> frames;
flip(frames,frames, 1);

cvtColor(frames, gris ,CV_BGR2GRAY);

//Humbral binario

for (int f = 0; f < 200; f++){
		for (int c = 400; c < 600; c++){
		if(gris.at<uchar>(f,c)>=50 && gris.at<uchar>(f,c)<=150){  
			
		gris.at<uchar>(f,c)=255;
					
				}else {
					gris.at<uchar>(f,c)=0;
				}
		
		}
	}
	
	//humbral binario inverso
	
	for (int f = 200; f < 400; f++){
		for (int c = 200; c < 400; c++){
		if(gris.at<uchar>(f,c)>=50 && gris.at<uchar>(f,c)<=150){  
			
		gris.at<uchar>(f,c)=0;
					
				}else {
					gris.at<uchar>(f,c)=255;
				}
		
		}
	}
	
	//Humbral escala de grises
	
	for (int f = 0; f < 200; f++){
		for (int c = 200; c < 400; c++){
		
	if(gris.at<uchar>(f,c)>=50&&gris.at<uchar>(f,c)<=150){  
					gris.at<uchar>(f,c)=255;
				}
			}
			}
			
		//Atenuacion de grises
		
		for (int f = 200; f < 400; f++){
		for (int c = 0; c < 200; c++){
		
		if(gris.at<uchar>(f,c)>=50&&gris.at<uchar>(f,c)>=150){  
					gris.at<uchar>(f,c)=255;
				}else {
					gris.at<uchar>(f,c)=((gris.at<uchar>(f,c))-(150))*(255/(50));
				}
				
			}}
			
			//intervalo de humbral binario
			for (int f = 0; f < 200; f++){
		for (int c = 0; c < 200; c++){
			if(gris.at<uchar>(f,c)<=40||gris.at<uchar>(f,c)<=190){  
					gris.at<uchar>(f,c)=0;
				}else{ 
					gris.at<uchar>(f,c)=255;
				}
			}}
	/*for (int f = 0; f < gris.rows; f++){
		for (int c = 0; c < gris.cols; c++){
			
		if(gris.at<uchar>(f,c)>=100 && gris.at<uchar>(f,c)<150){  
			
		gris.at<uchar>(f,c)=250;
					
				}else {
					gris.at<uchar>(f,c)=0;
				}
		
		}
	}*/
	/*
 for (int f = 200; f < 400; f++){
		for (int c = 0; c < 200; c++){
		if(gris.at<uchar>(f,c)>=100 && gris.at<uchar>(f,c)<150){  
			
		gris.at<uchar>(f,c)=250;
					
				}else {
					gris.at<uchar>(f,c)=70;
				}
		
		}
	}
	 for (int f = 0; f < 400; f++){
		for (int c =200; c < 400; c++){
		if(gris.at<uchar>(f,c)>=0 && gris.at<uchar>(f,c)<150){  
			
		gris.at<uchar>(f,c)=70;
					
				}else {
					gris.at<uchar>(f,c)=0;
				}
		
		}
	}
	 for (int f = 400; f < 600; f++){
		for (int c = 0; c < 400; c++){
		if(gris.at<uchar>(f,c)<=40 && gris.at<uchar>(f,c)<=190){
		gris.at<uchar>(f,c)=0;
					
				}else {
					gris.at<uchar>(f,c)=255;
				}
		
		}
	}
	*/
	
x++;
y++;

imshow("frames", gris);
if(waitKey(30)>=0) break;
}
return 0;
}

