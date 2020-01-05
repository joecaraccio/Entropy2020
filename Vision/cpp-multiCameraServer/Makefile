COMPILER = g++
CCFLAGS1 = -g
CCFLAGS2 = -Wall

DEPS_CFLAGS=-Iinclude -Iinclude/opencv -Iinclude
DEPS_LIBS=-Llib -lwpilibc -lwpiHal -lcameraserver -lntcore -lcscore -lopencv_dnn -lopencv_highgui -lopencv_ml -lopencv_objdetect -lopencv_shape -lopencv_stitching -lopencv_superres -lopencv_videostab -lopencv_calib3d -lopencv_videoio -lopencv_imgcodecs -lopencv_features2d -lopencv_video -lopencv_photo -lopencv_imgproc -lopencv_flann -lopencv_core -lwpiutil 


mac: test.cpp
		${COMPILER} test.cpp -o test.o 
b: test.cpp
		${COMPILER} test.cpp -o test.o