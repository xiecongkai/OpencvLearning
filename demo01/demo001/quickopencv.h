#ifndef QUICKOPENCV_H
#define QUICKOPENCV_H

#include <QMainWindow>
#include <opencv2/opencv.hpp>

using namespace cv;

class QuickDemo : public QObject{
    Q_OBJECT
    public:
        void colorSpace_Demo(Mat &image);
        void mat_creation_demo(Mat &image);
        void pixel_visit_demo(Mat &image);
        void operators_demo(Mat &image);
};
#endif // QUICKOPENCV_H
