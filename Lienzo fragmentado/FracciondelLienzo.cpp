#include "opencv2/video/tracking.hpp"
#include "opencv2/imgproc/imgproc.hpp"
//#include "opencv2/videoio/videoio.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <iostream>

using namespace cv;
using namespace std;
float ii=0,jj=0;
	
static void drawOptFlowMap(const Mat& flow, Mat& cflowmap, int step,double, const Scalar& color){
	

	//Mat aux = Mat :: zeros(img.rows+100,img.cols+100,CV_8UC1);
	//esquila sup iz
	
	/*for (int i = 0; i < imgg.rows; i++){
		   for(int j = 0; j < imgg.cols; j++){
			   aux.at<uchar>(i,j)=imgg.at<char>(i,j);
		   }
		    
	   }*/
	   
	
	
  for(int y = 0; y < 100; y += step)
    for(int x = 0; x < 100; x += step){
	const Point2f& fxy = flow.at<Point2f>(y, x);

	line(cflowmap, Point(cvRound(x+fxy.x), cvRound(y+fxy.y)), Point(x+step,y),color);
	line(cflowmap, Point(cvRound(x+fxy.x), cvRound(y+fxy.y)), Point(x,y+step),color);
    
    if(fxy.x>2&&fxy.y>2){
		ii=ii+2;
		jj=jj+2;
		}
		if(ii>=cflowmap.rows&&jj>=cflowmap.cols){
				ii=cflowmap.rows;
				jj=cflowmap.cols;
			}
      
      }
      
      ////esquina inf der
      
      for(int y = cflowmap.rows-100; y < cflowmap.rows; y += step)
    for(int x = cflowmap.cols-100; x < cflowmap.cols; x += step){
	const Point2f& fxy = flow.at<Point2f>(y, x);

	line(cflowmap, Point(cvRound(x+fxy.x), cvRound(y+fxy.y)), Point(x+step,y),color);
	line(cflowmap, Point(cvRound(x+fxy.x), cvRound(y+fxy.y)), Point(x,y+step),color);
    
     if(fxy.x>2&&fxy.y>2){
		ii=ii-2;
		jj=jj-2;
		}
      
      }
      
      
      //esquina sup der
      
       for(int y = 0; y < 100; y += step)
    for(int x = cflowmap.cols-100; x < cflowmap.cols; x += step){
	const Point2f& fxy = flow.at<Point2f>(y, x);

	line(cflowmap, Point(cvRound(x+fxy.x), cvRound(y+fxy.y)), Point(x+step,y),color);
	line(cflowmap, Point(cvRound(x+fxy.x), cvRound(y+fxy.y)), Point(x,y+step),color);
     
     
     if(fxy.x>2&&fxy.y>2){
		ii=ii+2;
		jj=jj-2;
		}
      
      }
      
      //esquina inf iz
       for(int y = cflowmap.rows-100; y < cflowmap.rows; y += step)
    for(int x = 0; x < 100; x += step){
	const Point2f& fxy = flow.at<Point2f>(y, x);

	line(cflowmap, Point(cvRound(x+fxy.x), cvRound(y+fxy.y)), Point(x+step,y),color);
	line(cflowmap, Point(cvRound(x+fxy.x), cvRound(y+fxy.y)), Point(x,y+step),color);
    
      if(fxy.x>2&&fxy.y>2){
		ii=ii-2;
		jj=jj+2;
		}
      }
      Mat img=imread("/home/alexismcfly/Imágenes/01avatar.png",1);
      img.copyTo(cflowmap(Rect(250+ii,250+jj,img.cols,img.rows)));  
      circle(cflowmap, Point(300+ii,300+jj),100.0,Scalar( 179,113,034),5,8);
     
}

int main(int, char**)
{

    VideoCapture cap(0);
    //help();
    if( !cap.isOpened() )
        return -1;

    Mat flow, cflow, frame;
    Mat gray, prevgray, uflow;
    namedWindow("flow", 1);

    for(;;)
      {
        cap >> frame;
        flip(frame,frame, 1);
        cvtColor(frame, gray, COLOR_BGR2GRAY);

        if( !prevgray.empty() )
	  {
            calcOpticalFlowFarneback(prevgray, gray, uflow, 0.5, 5, 15, 3, 5, 1.2, 0);
            cvtColor(prevgray, cflow, COLOR_GRAY2BGR);
            uflow.copyTo(flow);
            drawOptFlowMap(flow, cflow, 16, 1.5, Scalar(0, 255, 0));
            imshow("flow", cflow);
	  }
        if(waitKey(10)>=0)
	  break;
        std::swap(prevgray, gray);
      }
    return 0;
}
