#include "Transport.hpp"

void Transport::MyMove(double toX, double toY, double toZ)
{
	this->SetNewCoord(toX, toY, toZ);
}

void Transport::MoveCargo(Cargo* carg, double toX, double toY, double toZ)
{
	carg->SetNewCoord(toX, toY, toZ);
}