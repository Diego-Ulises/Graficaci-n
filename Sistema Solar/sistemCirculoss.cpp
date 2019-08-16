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
	int v1=0,v2=0,v3=0;
	int cent22 = 300;
	for(;;){
		
	circle(image, Point(300,300),200.0,Scalar( 179,113,034),5,8);
	circle(image, Point(600,300),200.0,Scalar( 179,0,034),5,8);
	circle(image, Point(450,500),200.0,Scalar( 179,255,034),5,8);
	circle(image, Point(450,170),10.0,Scalar( 255,255,255),-1,8);
	
	int x = 135,y = 135;
		
	circle(image, Point((x*cos(a1)-y*sin(a1))+cent1,(x*sin(a1)+y*cos(a1))+cent22),50.0,Scalar( 70, 50 ,105),-1,8);

	a1=a1+0.1;
	
	if(a1>4.7&&a1<4.8){
		cent1=600;
		a1=9.5;
		v1++;
		}
		
			
	if(a1>12.9&&a1<13.2){
		cent1=450;
		cent22=500;
		a1=18;
		v2++;
		}
	
	if(a1>21&&a1<21.2&&v1<2){
			cent1=300;
			cent22=300;
			a1=1;
		    v3++;
			}
			
	
			
			/////////////////**************//////////////
	if(a1>21.1&&a1<21.2&&v1==2){
	cent1=450;
	cent22=500;		
    
			}
				
	if(a1>24.2&&a1<24.4&&v1==2){
		cent1=600;
		cent22=300;
		a1=25.7;
		}

if(a1>28.1&&a1<28.3&&v1==2){
		cent1=300;
		cent22=300;
		a1=29.9;
		
		}
		if(a1>32.3&&a1<32.5&&v1==2){
		cent1=300;
		cent22=300;
		a1=1;
		v1=0;
		}

	imshow("Imagen", image);
	image=Scalar(0,0,0);
	waitKey(30);
	cout<<" "<<v1<<" "<<v2<<" "<<v3<<endl;
	cout<<" "<<a1<<endl;
	if(waitKey(1)>=0) break;
}
	
    
	return 0;
	}
