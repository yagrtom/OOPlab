#include <iostream>
using namespace std;
#include "Transport.hpp"
#include "Cargo.hpp"
#ifndef TRUCK_H
#define TRUCK_H

class Truck : public Transport
{
private:
	double R = 10;
	double gruzopod = 1000;
	bool hold = 0;
public:
	void SetNewR(double R);
	double GetR();

	void SetNewGruzopod(double newgruzopod);
	double GetGruzopod();

	void MyMove(double toX, double toY, double toZ);
	bool HoldOut(Cargo* carg, double toX, double toY, double toZ);
	void MoveCargo(Cargo* carg, double toX, double toY, double toZ);

};
#endif