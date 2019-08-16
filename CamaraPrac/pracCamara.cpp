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
int x = 0,y = 9;
VideoCapture cap(0);
if(!cap.isOpened()){
return -1;
}

Mat frames, gris;

for(;;){
cap >> frames;
flip(frames,frames, 1);

cvtColor(frames, gris ,CV_BGR2GRAY);

rectangle(frames, Point(300+x,200), Point(100+x,300), Scalar(179,113,034), -1, 8);
	
circle(frames, Point(200+x,200),100.0,Scalar( 179,113,034),-1,8);
	
	ellipse( frames,Point( 245+x, 175+x ),Size( 6.0, 16.0 ),90,0,360,Scalar( 0, 0, 0 ),-1,8 );
	ellipse( frames,Point( 145+x, 175+x ),Size( 6.0, 16.0 ),90,0,360,Scalar( 0, 0, 0 ),-1,8 );
	line(frames, Point(150+x,250+x),Point(250+x,240), Scalar(0, 0, 0));
	
	
	
x++;
y++;

imshow("frames", frames);
if(waitKey(1)>=0) break;
}
return 0;
}
