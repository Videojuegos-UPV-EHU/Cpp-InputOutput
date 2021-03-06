// BinaryFiles.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

#define NUM_POINTS 3

struct Point3D
{
	double x, y, z;
};

void WriteFile(const char* filename, Point3D* points, int numPoints)
{
	ofstream outputFile;
	outputFile.open(filename, fstream::out | fstream::binary);
	if (outputFile.is_open())
	{
		outputFile.write((const char*)points, numPoints*sizeof(Point3D));

		outputFile.close();
	}
	else
		cout << "Couldn't create file: " << filename;
}

void ReadFile(const char* filename, Point3D* points, int numPoints)
{
	ifstream inputFile;
	char c1, c2;
	inputFile.open(filename, fstream::in | fstream::binary);
	if (inputFile.is_open())
	{
		inputFile.read((char*)points, numPoints * sizeof(Point3D));
		inputFile.close();
	}
	else
		cout << "Couldn't create file: " << filename;
}

void PrintPoints(Point3D* points, int numPoints)
{
	for (int i = 0; i < numPoints; i++)
	{
		cout << "Point #" << i << ":";
		cout << points[i].x << "," << points[i].y << "," << points[i].z << "\n";
	}
}

int main()
{
	Point3D pointsForWriting[NUM_POINTS];
	pointsForWriting[0].x = 1.0;
	pointsForWriting[0].y = 2.0;
	pointsForWriting[0].z = 3.0;
	pointsForWriting[1].x = 4.0;
	pointsForWriting[1].y = 5.0;
	pointsForWriting[1].z = 6.0;
	pointsForWriting[2].x = 7.0;
	pointsForWriting[2].y = 8.0;
	pointsForWriting[2].z = 9.0;

	WriteFile("output-test-file.bin", pointsForWriting, NUM_POINTS);

	Point3D pointsForReading[NUM_POINTS];
	ReadFile("output-test-file.bin", pointsForReading, NUM_POINTS);

	PrintPoints(pointsForReading, NUM_POINTS);
	return 0;
}

