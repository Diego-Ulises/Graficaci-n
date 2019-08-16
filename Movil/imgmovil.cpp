#include <stdlib.h>
#include <math.h>
#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(int, char **){
       int x=0,y=0,pi=1;
       VideoCapture cap(0);
       if(!cap.isOpened()){
          return -1;
       }

       Mat frames,gris;
       Mat img=imread("a.png",1);
	  
       for(;;){
		   
       cap >> frames;
       flip(frames,frames, 1);
       
       cvtColor(frames, gris ,CV_BGR2GRAY);
      
       /*for (int i = 0; i < img.rows; i++){
		   for(int j = 0; j < img.cols; j++){
			   aux.at<uchar>((i*cos(pi)-j*sin(pi))+100,(i*sin(pi)+j*cos(pi))+100)=img.at<char>(i,j);
			   //aux.at<uchar>(i, j) = img.at<uchar>(i, j);
			    
		   }
		   
	   }*/
	   
       //cout<<" "<<;
      img.copyTo(frames(Rect(x,y,frames.cols,frames.rows)));
      
 //image, Point((x*cos(a1)-y*sin(a1))+cent1,(x*sin(a1)+y*cos(a1)

     x++;
     y++;
	 pi=pi+0.01;
     imshow("frames", gris);
     if(waitKey(1)>=0) break;
     }
return 0;}
