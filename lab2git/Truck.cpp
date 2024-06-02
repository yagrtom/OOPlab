#include "Truck.hpp"

void Truck::SetNewR(double newR)
{
	this->R = newR;
}
double Truck::GetR()
{
	return this->R;
}

void Truck::SetNewGruzopod(double newgruzopod)
{
	this->gruzopod = newgruzopod;
}
double Truck::GetGruzopod()
{
	return this->gruzopod;
}

void Truck::MyMove(double toX, double toY, double toZ)
{
	if (toZ == this->GetZ())
	{
		this->SetNewCoord(toX, toY, toZ);
	}
}

bool Truck::HoldOut(Cargo* carg, double toX, double toY, double toZ)
{
	double dx1 = this->GetX() - carg->GetX();
	double dy1 = this->GetY() - carg->GetY();
	double dx2 = this->GetX() - toX;
	double dy2 = this->GetY() - toY;

	if ( (this->GetR() * this->GetR() > (dx1 * dx1 + dy1 * dy1)) && (this->GetR() * this->GetR() > (dx2 * dx2 + dy2 * dy2)) )
	{
		this->hold = 1;
	}
	else
	{
		this->hold = 0;
	}
	return this->hold;
}
void Truck::MoveCargo(Cargo* carg, double toX, double toY, double toZ)
{
	if ( (toZ == this->GetZ()) && (this->GetZ() == carg->GetZ()) && (this->gruzopod > carg->GetMass()) )
	{
		if (this->HoldOut(carg, toX, toY, toZ) == 0)
		{
			this->MyMove(toX, toY, toZ);
			Transport::MoveCargo(carg, toX, toY, toZ);
		}
		else
		{
			Transport::MoveCargo(carg, toX, toY, toZ);
		}
	}
	else
	{
		cout << "Truck can not move this cargo" << endl;
	}
}