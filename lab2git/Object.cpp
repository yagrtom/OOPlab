#include "Object.hpp"

void Object::SetNewCoord(double sizeX, double sizeY, double sizeZ)
{
		this->x = sizeX;
		this->y = sizeY;
		this->z = sizeZ;
}
double Object::GetX()
{
	return this->x;
}

double Object::GetY()
{
	return this->y;
}

double Object::GetZ()
{
	return this->z;
}
void Object::GetCoord()
{
	cout << this->x << "\t" << this->y << "\t" << this->z << "\t" << endl;
}
