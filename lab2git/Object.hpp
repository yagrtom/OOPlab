
#include <iostream>
using namespace std;

#ifndef OBJECT_H
#define OBJECT_H

class Object
{
private:
	double x, y, z;
public:
	void SetNewCoord(double sizeX, double sizeY, double sizeZ);
	double GetX();
	double GetY();
	double GetZ();
	void GetCoord();
};
#endif