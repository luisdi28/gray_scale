#include <opencv4/opencv2/opencv.hpp>
#include "gtest/gtest.h"

using namespace cv;

class Server{

public:

    int método() {
        String file_name = "/home/luis/CLionProjects/Proyecto 1 - Datos II/gray_scale/tst/cuadras.jpg";//all these three strings are part of CV and not the C++ library
        String window_original = "original_image";
        String window_gray = "gray_image";
        Mat img = imread(file_name);//It returns a matrix object
        Mat graymat;
        cvtColor(img, graymat, COLOR_BGR2GRAY);
        namedWindow(window_original, WINDOW_AUTOSIZE);
        imshow(window_original, img);
        namedWindow(window_gray, WINDOW_AUTOSIZE);
        imshow(window_gray, graymat);
        waitKey(0);
        return 0;
    }
};

TEST(SeverTEST, Test1){
    Server servidor;

    EXPECT_EQ(servidor.método(), 0);
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}