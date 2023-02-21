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


void QuickDemo::mat_creation_demo(Mat &image){
    Mat m1,m2;
    m1 = image.clone();
    image.copyTo(m2);

    //创建空白图像
    Mat m3 = Mat::zeros(Size(400,400),CV_8UC3);
    m3 = Scalar(0,0,255);
    std::cout<<"width:"<<m3.cols<<" height:"<<m3.rows<<" channels:"<<m3.channels()<<std::endl;
//    std::cout<<m3<<std::endl;
    imshow("M3",m3);

    Mat m4 = m3;
    m4 = Scalar(0,255,255);
    imshow("M4",m4);

}
