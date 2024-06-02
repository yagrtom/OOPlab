#include <iostream>
using namespace std;
#include "Object.hpp"
#include "Cargo.hpp"
#ifndef TRANSPORT_H
#define TRANSPORT_H

class Transport : public Object
{
private:
public:
	void MyMove(double toX, double toY, double toZ);
	void MoveCargo(Cargo* carg, double toX, double toY, double toZ);

};
#endif