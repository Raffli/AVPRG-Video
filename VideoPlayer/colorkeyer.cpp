#include "colorkeyer.h"
#include <math.h>       /* pow */

using namespace cv;


ColorKeyer::ColorKeyer()
    :distance(0)
{

}

void ColorKeyer::startProcessing(const VideoFormat& format)
{}

void ColorKeyer::setDistance(int distance){
    this->distance = distance;

}


cv::Mat ColorKeyer::process(const cv::Mat& input){
    Mat output(input.rows,input.cols, input.type());
    for (int x = 0; x < input.cols; x++) {
        for (int y = 0; y < input.rows; y++) {
            Vec3b inputPixel = input.at<Vec3b>(y,x);

            int r = pow((inputPixel[2] - 98),2);
            int g = pow((inputPixel[1] - 32),2);
            int b = pow((inputPixel[0] - 39),2);

            int actualDistance = r+g+b;
            int colorValue = 255;
            if (actualDistance > distance){
                colorValue = 0;
            }
            Vec3b outputPixel(saturate_cast<uchar>(colorValue),
                              saturate_cast<uchar>(colorValue),
                              saturate_cast<uchar>(colorValue));

            output.at<Vec3b>(y,x) = outputPixel;
        }
    }
    return output;
}
