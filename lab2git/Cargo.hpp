#include <iostream>
using namespace std;
#include "Object.hpp"
#ifndef CARGO_H
#define CARGO_H

class Cargo : public Object
{
private:
	double mass;
public:
	void SetNewMass(double newmass);
	double GetMass();
};
#endif