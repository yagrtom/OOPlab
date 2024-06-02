#include <iostream>
using namespace std;
#include "Transport.hpp"
#include "Cargo.hpp"
#ifndef CRANE_H
#define CRANE_H

class Crane : public Transport
{
private:
	double R = 100;
	double gruzopod = 10000;
	double moveZ = 100;
	bool hold = 0;
public:
	void SetNewR(double R);
	double GetR();

	void SetNewGruzopod(double newgruzopod);
	double GetGruzopod();

	void SetNewMoveZ(double newmoveZ);
	double GetMoveZ();

	void MyMove(double toX, double toY, double toZ);
	bool HoldOut(Cargo* carg, double toX, double toY, double toZ);
	void MoveCargo(Cargo* carg, double toX, double toY, double toZ);

};
#endif