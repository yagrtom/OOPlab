#include "Transport.hpp"
void Transport::MyMove(double sizeX, double sizeY, double sizeZ)
{
	cout << "\n Transport Move to: " << endl;
	this->SettestCreateZero();
	this->SetNewCoord(sizeX, sizeY, sizeZ);
}