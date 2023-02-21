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

void QuickDemo::pixel_visit_demo(Mat &image){
    int w = image.cols;
    int h = image.rows;
    int dims = image.channels();
    for(int row=0;row<h;row++)
    {
        for(int col=0;col<w;col++)
        {
           if(dims == 1) //灰度图像
           {
                int pv = image.at<uchar>(row,col);
                image.at<uchar>(row,col)= 255 - pv;
           }
           if(dims == 3)  //彩色图像
           {
               Vec3b bgr = image.at<Vec3b>(row,col);
               image.at<Vec3b>(row,col)[0] = 255 - bgr[0];
               image.at<Vec3b>(row,col)[1] = 255 - bgr[1];
               image.at<Vec3b>(row,col)[2] = 255 - bgr[2];
           }
        }
    }
}
