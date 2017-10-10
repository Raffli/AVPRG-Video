#include "brightnessprozessor.h"

using namespace cv;

BrightnessProzessor::BrightnessProzessor()
    :brightness(0)
{

}

void BrightnessProzessor::startProcessing(const VideoFormat& format)
{}


void BrightnessProzessor::setBrightness(int brightness){
    this->brightness = brightness;

}

cv::Mat BrightnessProzessor::process(const cv::Mat& input){
    Mat output(input.rows,input.cols, input.type());
    for (int x = 0; x < input.cols; x++) {
        for (int y = 0; y < input.rows; y++) {
            Vec3b inputPixel = input.at<Vec3b>(y,x);

            int r = inputPixel[2] + brightness;
            int g = inputPixel[1] + brightness;
            int b = inputPixel[0] + brightness;

            Vec3b outputPixel(saturate_cast<uchar>(b),
                              saturate_cast<uchar>(g),
                              saturate_cast<uchar>(r));
            output.at<Vec3b>(y,x) = outputPixel;
        }
    }
    return output;
}
