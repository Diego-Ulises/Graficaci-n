#include <stdlib.h>
#include <math.h>
#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
#include "iostream"
using namespace cv;
using namespace std;

 
int main(){
	float a1 = 1;
	Mat image = Mat :: zeros(900,900,CV_8UC4);
	int cent1 = 300;
	int v1=0,v2=3,v3=6;
	int cent22 = 300;
	for(;;){
	
	int x = 135,y = 135;
			
	//circle(image, Point(450,450),200.0,Scalar( 179,113,034),5,8);
	//circle(image, Point(450,450),200.0,Scalar( 179,0,034),5,8);
	//circle(image, Point(300,300),200.0,Scalar( 179,113,034),5,8);
	//circle(image, Point(600,300),200.0,Scalar( 179,0,034),5,8);
	//circle(image, Point(450,500),200.0,Scalar( 179,255,034),5,8);
	
	circle(image, Point((x*cos(a1)-y*sin(a1))+300,(x*sin(a1)+y*cos(a1))+300),200.0,Scalar( 179,255,034),5,8);
	circle(image, Point((x*cos(v2)-y*sin(v2))+600,(x*sin(v2)+y*cos(v1))+300),200.0,Scalar( 17,100,034),5,8);
	circle(image, Point((x*cos(a1)-y*sin(a1))+450,(x*sin(a1)+y*cos(a1))+500),200.0,Scalar( 199,18,104),5,8);
	
	
	//circle(image, Point((x*cos(a1)-y*sin(a1))+cent1,(x*sin(a1)+y*cos(a1))+cent22),50.0,Scalar( 70, 50 ,105),-1,8);
v2=v2+0.1;
	a1=a1+0.1;
	
	v3=v3+0.1;

	imshow("Imagen", image);
	//image=Scalar(0,0,0);
	waitKey(30);
	//cout<<" "<<v1<<" "<<v2<<" "<<v3<<endl;
	//cout<<" "<<a1<<endl;
	if(waitKey(1)>=0) break;
}
	
    
	return 0;
	}
