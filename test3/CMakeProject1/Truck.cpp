#include "Truck.hpp"
void Truck::MyMove(double sizeX, double sizeY, double sizeZ)
{
	if (this->GettestCreate() == 1)
	{
		if (this->GetZ() != sizeZ)
		{
			cout << "\n You cannot change the Z coordinate: " << endl;
			cout << "Transport Move to: " << endl;
			this->SettestCreateZero();
			this->SetNewCoord(sizeX, sizeY, this->GetZ());
		}
		else
		{
			cout << "\n Transport Move to: " << endl;
			this->SettestCreateZero();
			this->SetNewCoord(sizeX, sizeY, sizeZ);
		}
	}
	else
	{
		cout << "\n Transport on the cordinates: " << endl;
		this->SettestCreateZero();
		this->SetNewCoord(sizeX, sizeY, sizeZ);
	}
}
double Truck::GetR()
{
	return this->R;
}