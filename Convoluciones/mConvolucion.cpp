#include <stdlib.h>
#include <math.h>
#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
using namespace cv;
using namespace std;
float pi = atan(1)*4;
int main (){
	Mat im;
	int i,j;
	int conv[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
		conv[i][j]=1;	
		}
	}
	
	im=imread("/home/alexismcfly/Imágenes/perry/katyperry-1.jpg",0);
	Mat img2(im.rows*2+1,im.cols*2+1, CV_8UC1, Scalar(0));
	Mat img3(im.rows*2,im.cols*2, CV_8UC1, Scalar(0));
	
	
	
	
	
	
	
	
	
	
	int op[im.rows*2][im.cols*2];
	int res[im.rows*2][im.cols*2];
	//namedWindow("Test", WINDOW_AUTOSIZE);
	
	//imshow("Test",im);
	
	for (i = 1; i < im.rows; i++){
		for (j = 1; j < im.cols; j++){
		img2.at<uchar>((i*2),(j*2))=im.at<uchar>(i,j);	
		//img3.at<uchar>(i*2,j*2)=img2.at<uchar>(i*2,j*2);	
			//printf(" %d ",op[i][j]);		
		}
		//printf("\n");
	}
	
	
	

for ( i = 1; i < img2.rows-1; i++){
for ( j = 1; j < img2.cols-1; j++){
	op[i][j]=img2.at<uchar>(i,j);
	res[i][j]=img2.at<uchar>(i,j);
	
	res[i][j]=((conv[0][0])*(op[i-1][j-1]))+((conv[0][1])*(op[i][j-1]))+((conv[0][2])*(op[i+1][j-1]))+((conv[1][0])*(op[i-1][j]))+((conv[1][2])*(op[i+1][j]))+((conv[2][0])*(op[i-1][j+1]))+((conv[2][1])*(op[i][j+1]))+((conv[2][2])*(op[i+1][j+1]));
	img3.at<uchar>(i,j)=res[i][j];
}

}
	
	
	//imshow("expandir" ,img3);
	waitKey(0);
	imshow("uno" ,im);
	waitKey(0);
	
		imshow("dos" ,img2);
	waitKey(0);
	
	imshow("tres" ,img3);
	waitKey(0);
	
	
	}
