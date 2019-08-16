#include <stdlib.h>
#include <math.h>
#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
#include "iostream"
using namespace cv;
using namespace std;

 
int main(){
	int cc=0;
	Mat image = Mat :: zeros(900,900,CV_8UC4);
	Mat im = Mat :: zeros(900,900,CV_8UC4);
	Mat ax = Mat :: zeros(900,900,CV_8UC4);
	double t = 0,p = 0;
	int y=0;
	int x=0;
	
	
	
	for (int i = 0; i < 340; i++){
	x=120*sin(t)-40*sin(3*t);		
	y=130*cos(t)+50*cos(2*t)-20*cos(3*t)+10*cos(4*t);
		
	circle(ax, Point(x+400,y+400),1.0,Scalar( 170, 50 ,105),-1,8);
		t=t+0.01;
	}
	
	
	for(;;){
	

		
	x=120*sin(t)-40*sin(3*t);		
	y=130*cos(t)+50*cos(2*t)-20*cos(3*t)+10*cos(4*t);
		
	circle(ax, Point(x+400,y+400),10.0,Scalar( 250, 50 ,10),2,8);
	
	cout<<t<<" "<<endl;
	//ax.copyTo(image(Rect(x,y,900,900)));
	
	t=t+0.01;
	
	
	image=Scalar(0,0,0);
	
		 imshow("holi",ax);
	
	if(waitKey(30)>=0){
		cc++;
		 break;
	 }
}

if(cc==1){
	for(;;){
	
	x = (200*cos((7*t)/3)+10)*cos(t);
	y = (200*cos((7*t)/3)+10)*sin(t);

	circle(image, Point(x+300,y+300),1.0,Scalar( 250, 50 ,10),2,8);
	
	cout<<t<<" "<<endl;
	//ax.copyTo(image(Rect(x,y,900,900)));
	
	p++;
	t++;
	//image=Scalar(0,0,0);
		 imshow("holi",image);
	
	if(waitKey(1)>=0){
		cc++;
		 break;
	 }
}
	}
	
	if(cc==2){
	for(;;){

	x = (200*cos((7*t)/2)+10)*cos(t);
	y = (200*cos((7*t)/2)+10)*sin(t);
	
	circle(im, Point(x+300,y+300),1.0,Scalar( 250, 50 ,10),2,8);
	
	cout<<t<<" "<<endl;
	//ax.copyTo(image(Rect(x,y,900,900)));
	
	p++;
	t++;
	//image=Scalar(0,0,0);
		 imshow("holi",im);
	
	if(waitKey(1)>=0){
		cc++;
		 break;
	 }
}
	}
	
    
	return 0;
	}
