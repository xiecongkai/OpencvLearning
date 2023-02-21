#include <quickopencv.h>

void QuickDemo::colorSpace_Demo(Mat &image){
    Mat gray,hsv;
    cvtColor(image,hsv,COLOR_BGR2HSV);
    cvtColor(image,gray,COLOR_BGR2GRAY);
    imshow("HSV",hsv);
    imshow("灰度",gray);
    imwrite("/home/diana/opencv_qt/demo01/Debug/1234/hsv.png",hsv);
    imwrite("/home/diana/opencv_qt/demo01/Debug/1234/gray.png",gray);
}
