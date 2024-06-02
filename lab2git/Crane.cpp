#include "Crane.hpp"

void Crane::SetNewR(double newR)
{
	this->R = newR;
}
double Crane::GetR()
{
	return this->R;
}

void Crane::SetNewGruzopod(double newgruzopod)
{
	this->gruzopod = newgruzopod;
}
double Crane::GetGruzopod()
{
	return this->gruzopod;
}

void Crane::SetNewMoveZ(double newmoveZ)
{
	this->moveZ = newmoveZ;
}
double Crane::GetMoveZ()
{
	return this->moveZ;
}



void Crane::MyMove(double toX, double toY, double toZ)
{
	cout << "Crane can not move" << endl;
}

bool Crane::HoldOut(Cargo* carg, double toX, double toY, double toZ)
{
	double dx1 = this->GetX() - carg->GetX();
	double dy1 = this->GetY() - carg->GetY();
	double dx2 = this->GetX() - toX;
	double dy2 = this->GetY() - toY;

	if ((this->GetR() * this->GetR() > (dx1 * dx1 + dy1 * dy1)) && (this->GetR() * this->GetR() > (dx2 * dx2 + dy2 * dy2)) &&
		(this->moveZ > carg->GetZ()) && (this->moveZ > toZ))
	{
		if (this->gruzopod > carg->GetMass())
		{
			this->hold = 1;
		}
	}
	else
	{
		this->hold = 0;
	}
	return this->hold;
}
void Crane::MoveCargo(Cargo* carg, double toX, double toY, double toZ)
{
	if (this->HoldOut(carg, toX, toY, toZ) == 1)
	{
		carg->SetNewCoord(toX, toY, toZ);
	}
}