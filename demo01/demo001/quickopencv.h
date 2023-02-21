#ifndef QUICKOPENCV_H
#define QUICKOPENCV_H
#include <QObject>
#include <QMainWindow>
#include <opencv2/opencv.hpp>

using namespace cv;

class QuickDemo : public QObject{
    Q_OBJECT
    public:
        void colorSpace_Demo(Mat &image);
};
#endif // QUICKOPENCV_H
