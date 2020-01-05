#pragma once
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d.hpp>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <vector>
#include <string>
#include <math.h>

namespace grip {

/**
* Grip class.
* 
* An OpenCV pipeline generated by GRIP.
*/
class Grip {
	private:
		cv::Mat hsvThresholdOutput;
		void hsvThreshold(cv::Mat &, double [], double [], double [], cv::Mat &);

	public:
		Grip();
		void Process(cv::Mat& source0);
		cv::Mat* GetHsvThresholdOutput();
};


} // end namespace grip


