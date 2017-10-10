#ifndef COLORKEYER_H
#define COLORKEYER_H

#include "videoprocessor.h"

class ColorKeyer :  public VideoProcessor
{
public:
    ColorKeyer();
    void startProcessing(const VideoFormat& format);
    cv::Mat process(const cv::Mat& input);
    void setDistance(int distance);
private:
    int distance;
};

#endif // COLORKEYER_H
