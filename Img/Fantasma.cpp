#include <stdlib.h>
#include <math.h>
#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
using namespace cv;
using namespace std;

int main(){
	Mat image = Mat :: zeros(800,800,CV_8UC4);
	
	int i;
	
	for ( i = 0; i < 200; i++)
	{
		
	
	imshow("Imagen", image);
	image=Scalar(0,0,0);
	waitKey(1);
	//fantasma
	rectangle(image, Point(300+i,200), Point(100+i,300), Scalar(179,113,034), -1, 8);
	
	
	circle(image, Point(200+i,200),100.0,Scalar( 179,113,034),-1,8);
	
	ellipse( image,Point( 245+i, 175 ),Size( 6.0, 16.0 ),90,0,360,Scalar( 0, 0, 0 ),-1,8 );
	ellipse( image,Point( 145+i, 175 ),Size( 6.0, 16.0 ),90,0,360,Scalar( 0, 0, 0 ),-1,8 );
	line(image, Point(150+i,250),Point(250+i,240), Scalar(0, 0, 0));
	
	//pacman
	
circle(image, Point(600,200+i),100.0,Scalar( 0, 255, 255),-1,8);
Point rook_points[1][6];
rook_points[0][0] = Point( 600,200+i );
rook_points[0][1] = Point( 500,150+i );
rook_points[0][2] = Point( 500,250+i );

const Point* ppt[5] = { rook_points[0] };
int npt[] = { 3 };

fillPoly( image,ppt,npt,1,Scalar( 0, 0, 00 ),8);
	
circle(image, Point(600,150+i),10.0,Scalar( 0, 0, 0),-1,8);

		
	}
	
	for (int k = 0; k < 500; k++)
	{
		
		
			imshow("Imagen", image);
	image=Scalar(0,0,0);
	waitKey(1);
	
	//fantasma
	rectangle(image, Point(500,200), Point(300,300), Scalar(179,113,034), -1, 8);
	
	
	circle(image, Point(400,200),100.0,Scalar( 179,113,034),-1,8);
	
	ellipse( image,Point( 445, 175 ),Size( 6.0, 16.0 ),90,0,360,Scalar( 0, 0, 0 ),-1,8 );
	ellipse( image,Point( 345, 175 ),Size( 6.0, 16.0 ),90,0,360,Scalar( 0, 0, 0 ),-1,8 );
	line(image, Point(350,250),Point(250+i,240), Scalar(0, 0, 0));
	
	
circle(image, Point(600-k,400),100.0,Scalar( 0, 255, 255),-1,8);
Point rook_points[1][6];
rook_points[0][0] = Point( 600-k,400 );
rook_points[0][1] = Point( 500-k,350 );
rook_points[0][2] = Point( 500-k,450 );

const Point* ppt[5] = { rook_points[0] };
int npt[] = { 3 };

fillPoly( image,ppt,npt,1,Scalar( 0, 0, 00 ),8);
	
circle(image, Point(600-k,350),10.0,Scalar( 0, 0, 0),-1,8);

	}

	
	///////////
	
	
	for (int k = 0; k < 50; k++)
	{
		
		
			imshow("Imagen", image);
	image=Scalar(0,0,0);
	waitKey(1);
	
	//fantasma
	rectangle(image, Point(500,200), Point(300,300), Scalar(179,113,034), -1, 8);
	
	
	circle(image, Point(400,200),100.0,Scalar( 179,113,034),-1,8);
	
	ellipse( image,Point( 445, 175 ),Size( 6.0, 16.0 ),90,0,360,Scalar( 0, 0, 0 ),-1,8 );
	ellipse( image,Point( 345, 175 ),Size( 6.0, 16.0 ),90,0,360,Scalar( 0, 0, 0 ),-1,8 );
	circle(image, Point(400,250),20.0,Scalar( 0,0,0),-1,8);
	//line(image, Point(350,250),Point(250+i,240), Scalar(0, 0, 0));
	
	
circle(image, Point(100,400),100.0,Scalar( 0, 255, 255),-1,8);
Point rook_points[1][6];
rook_points[0][0] = Point( 100,400 );
rook_points[0][1] = Point( 00,350+k );
rook_points[0][2] = Point( 00,451-k );

const Point* ppt[5] = { rook_points[0] };
int npt[] = { 3 };

fillPoly( image,ppt,npt,1,Scalar( 0, 0, 00 ),8);
	
circle(image, Point(100,350),10.0,Scalar( 0, 0, 0),-1,8);

	}
	imshow("Imagen", image);
	waitKey(0);
	
	
	return 0;
	}
