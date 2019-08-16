#include <stdlib.h>
#include <math.h>
#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
using namespace cv;
using namespace std;

int main(){
	float t = 0;
	float pi = atan(1)*4;
	Mat image = Mat :: zeros(800,800,CV_8UC4);
	for(;;){
		
	int i;
	//img2.at<char>((i*cos(pi/6)-j*sin(pi/6))+500,(i*sin(pi/6)+j*cos(pi/6))+300)=im.at<char>(i,j);
	circle(image, Point(400,400),200.0,Scalar( 179,113,034),5,8);
	
	int x = 130,y = 130;
	//circle(image, Point(400,400),190.0,Scalar( 0, 0 ,1),-1,8);
	
	circle(image, Point((x*cos(t)-y*sin(t))+400,(x*sin(t)+y*cos(t))+400),50.0,Scalar( 70, 50 ,105),-1,8);
imshow("Imagen", image);
image=Scalar(0,0,0);
	waitKey(1);
	t=t+0.05;
	if(waitKey(1)>=0) break;
}
	imshow("Imagen", image);
    waitKey(0);
	return 0;
	}
