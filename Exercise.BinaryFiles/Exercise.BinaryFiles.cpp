// 05.Exercise.BinaryFiles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>

void SaveCosFunction(const char* filename, int numSamples)
{
	//This function must open a file named <filename> and save the values of cos(x) for different values of x
	//x should take <numSamples> values between 0 and 3.1415
	//For example, if <numSamples>=3, the file should have the following structure (each value a double):
	//
	// 0 | cos(0) | 1.57 | cos(1.57) | 3.14 | cos(3.14)
	//
	//We can generate the values on the spot one by one, so there is no need to have all the values in
	//an array before saving them. Just calculate each of the values of x and cos(x), and save them (one variable written
	//each time).
	//Check that the output files have the expected size: numSamples*2*sizeof(double)

}

int main()
{
	SaveCosFunction("sampled-function-100.bin", 100);
	SaveCosFunction("sampled-function-1000.bin", 1000);
    return 0;
}

