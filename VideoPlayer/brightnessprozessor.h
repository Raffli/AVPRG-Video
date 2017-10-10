#ifndef BRIGHTNESSPROZESSOR_H
#define BRIGHTNESSPROZESSOR_H

#include "videoprocessor.h"

class BrightnessProzessor : public VideoProcessor
{
public:
    BrightnessProzessor();
    void startProcessing(const VideoFormat& format);
    cv::Mat process(const cv::Mat& input);
    void setBrightness(int brightness);
private:
    int brightness;
};

#endif // BRIGHTNESSPROZESSOR_H
