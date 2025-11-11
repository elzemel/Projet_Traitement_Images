#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;

int main() {
    Mat img = imread("./img/illusion.jpg");
    if (img.empty()) {
        std::cout << "Image not found!\n";
        return -1;
    }
    imshow("Display", img);
    waitKey(0);
    return 0;
}

//g++ main.cpp -o test `pkg-config --cflags --libs opencv4`