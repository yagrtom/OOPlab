#include "CraneTruck.hpp"

void CraneTruck::SetNewCoord(double sizeX, double sizeY, double sizeZ)
{
	Transport::SetNewCoord(sizeX, sizeY, sizeZ);
	this->claws.SetNewCoord(sizeX, sizeY, sizeZ);
	this->wheels.SetNewCoord(sizeX, sizeY, sizeZ);
}


void CraneTruck::SetNewR(double newR)
{
	this->R = newR;
}
double CraneTruck::GetR()
{
	return this->R;
}

void CraneTruck::SetNewGruzopod(double newgruzopod)
{
	this->gruzopod = newgruzopod;
}
double CraneTruck::GetGruzopod()
{
	return this->gruzopod;
}

void CraneTruck::SetNewMoveZ(double newmoveZ)
{
	this->moveZ = newmoveZ;
}
double CraneTruck::GetMoveZ()
{
	return this->moveZ;
}

void CraneTruck::MyMove(double toX, double toY, double toZ)
{
	this->wheels.MyMove(toX, toY, toZ);
	this->SetNewCoord(this->wheels.GetX(), this->wheels.GetY(), this->wheels.GetZ());
}

void CraneTruck::MoveCargo(Cargo* carg, double toX, double toY, double toZ)
{
	if (this->claws.HoldOut(carg, toX, toY, toZ) == 0)
	{
		this->wheels.MoveCargo(carg, toX, toY, this->GetZ());
		this->MyMove(toX, toY, this->GetZ());
		this->claws.MoveCargo(carg, toX, toY, toZ);
	}
	else
	{
		this->claws.MoveCargo(carg, toX, toY, toZ);
	}
}