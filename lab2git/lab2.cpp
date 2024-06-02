// lab2.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include "lab2.hpp"
using namespace std;

int main()
{
	cout << "Test1-----------" << endl;
	Cargo carg;
	carg.SetNewCoord(0, 0, 0);
	carg.SetNewMass(50);
	CraneTruck crane1;
	crane1.SetNewCoord(0, 0, 0);
	crane1.GetCoord();
	crane1.MyMove(1, 10, 0);
	crane1.MoveCargo(&carg, 20, 10000, 50);
	carg.GetCoord();
	crane1.GetCoord();

	return 0;
}
