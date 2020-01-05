/*
    On Mac: g++ test.cpp -o test.o && ./test.o
https://stackoverflow.com/questions/33276917/cross-compiling-to-raspberry-pi-using-qt-and-opencv
*/

#include <cstdio>
#include <string>
#include <thread>
#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <math.h>

//OpenCV Depdencies
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d.hpp>



//Camera Packet
struct VisionPacket {
    int CameraID;
};


void test(){

}

int main(int argc, char* argv[]) {
    std::cout << "Entropy 138 Vision\n";

    //TEST MODE get all subimages
    
    //Start Connection to Camera

    //Constant Frame Read Back

    //Other Thread 



    VisionPacket vp;
    vp.CameraID = 1;


}