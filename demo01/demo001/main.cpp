#include "mainwindow.h"
#include <QApplication>
#include <qdebug.h>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <quickopencv.h>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Mat src =imread("/home/diana/opencv_qt/demo01/Debug/1234/test.png");
    if(src.empty()){
        qDebug("could not load image...");
        return -1;
    }
    namedWindow("src",WINDOW_AUTOSIZE);
    imshow("输入窗口",src);

    QuickDemo qd;
    qd.pixel_visit_demo(src);

    waitKey(0);

    return a.exec();
}
