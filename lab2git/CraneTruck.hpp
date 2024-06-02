#include <iostream>
using namespace std;
#include "Transport.hpp"
#include "Truck.hpp"
#include "Crane.hpp"
#include "Cargo.hpp"
#ifndef CRANETRUCK_H
#define CRANETRUCK_H

class CraneTruck : public Transport
{
private:
	Truck wheels;
	Crane claws;
	double R = 100;
	double gruzopod = 10000;
	double moveZ = 100;
	bool hold = 0;
public:
	void SetNewCoord(double sizeX, double sizeY, double sizeZ);
	void SetNewR(double R);
	double GetR();

	void SetNewGruzopod(double newgruzopod);
	double GetGruzopod();

	void SetNewMoveZ(double newmoveZ);
	double GetMoveZ();


	void MyMove(double toX, double toY, double toZ);
	void MoveCargo(Cargo* carg, double toX, double toY, double toZ);
};
#endif