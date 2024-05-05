#include "Cargo.hpp"
void Cargo::CreateNewMass(double newmass)
{
	this->mass = newmass;
	cout << "Cargo mass = " << this->mass << endl;
}
void Cargo::MoveWithHelpTruck(Truck helper, double toX, double toY, double toZ)
{
	if (((helper.GetR() * helper.GetR()) > 
		(((helper.GetX() - toX)* (helper.GetX() - toX)) +((helper.GetY() - toY)* (helper.GetY() - toY)))
		) && (toZ == helper.GetZ()) && (this->GetZ() == toZ))
	{
		cout << "The Truck is moving cargo to:" << endl;
		this->SettestCreateZero();
		this->SetNewCoord(toX, toY, toZ);
	}
	else
	{
		cout << "The Truck cannot move the load:" << endl;
	}
}
void Cargo::MoveWithHelpCrane(Crane helper, double toX, double toY, double toZ)
{
	if	(
		(this->GetZ() - toZ < helper.GetCargoZ()) &&
		(helper.GetR()* helper.GetR() > ((helper.GetX()-toX)*(helper.GetX() - toX)) + ((helper.GetY() - toY) * (helper.GetY() - toY)))
		
		)
	{
		cout << "The Crane is moving cargo to:" << endl;
		this->SettestCreateZero();
		this->SetNewCoord(toX, toY, toZ);
	}
	else
	{
		cout << "The Crane cannot move the load:" << endl;
	}

}

void Cargo::MoveWithHelpTruckCrane(TruckCrane helper, double toX, double toY, double toZ)
{
	if (
		(this->GetZ() - toZ < helper.GetCargoZ()) &&
		(helper.GetR() * helper.GetR() > ((helper.GetX() - toX) * (helper.GetX() - toX)) + ((helper.GetY() - toY) * (helper.GetY() - toY)))

		)
	{
		cout << "The TruckCrane is moving cargo to:" << endl;
		this->SettestCreateZero();
		this->SetNewCoord(toX, toY, toZ);
	}
	else
	{
		cout << "The TruckCrane cannot move the load:" << endl;
	}

}