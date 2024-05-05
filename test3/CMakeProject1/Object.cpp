#include "Object.hpp"

void Object::SetNewCoord(double sizeX, double sizeY, double sizeZ)
{
	if (this->testCraete == 0)
	{
		this->x = sizeX;
		this->y = sizeY;
		this->z = sizeZ;
		cout << this->x << "\t" << this->y << "\t" << this->z << "\t" << endl;
		this->testCraete = 1;
	}
	else
	{
		cout << "You can write coordinates only once" << endl;

	}
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

bool Object::GettestCreate()
{
	return this->testCraete;
}

void Object::SettestCreateZero() 
{
	this->testCraete = 0;
}