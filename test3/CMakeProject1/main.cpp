// CMakeProject1.cpp: определяет точку входа для приложения.
//

#include "Object.hpp"
#include "Transport.hpp"
#include "Truck.hpp"
#include "Crane.hpp"
#include "Cargo.hpp"
#include "TruckCrane.hpp"
int main()
{
	cout << "******************" << endl;
	cout << "Test1: " << endl;
	Object test1;
	test1.SetNewCoord(1, 1, 1);
	test1.SetNewCoord(2, 2, 2);

	cout << "******************" << endl;
	cout << "Test2: " << endl;
	Transport test2;
	test2.SetNewCoord(10, 10, 10);
	test2.MyMove(10, 10, 0);

	cout << "******************" << endl;
	cout << "Test3: " << endl;
	Truck test3;
	test3.SetNewCoord(1, 1, 1);
	test3.SetNewCoord(2, 2, 2);
	test3.MyMove(3, 3, 10);
	cout << "******************" << endl;
	cout << "Test4: " << endl;
	Crane test4;
	test4.SetNewCoord(1, 1, 1);
	test4.SetNewCoord(2, 2, 2);
	test4.MyMove(3, 3, 10);

	cout << "******************" << endl;
	cout << "Test5: " << endl;
	Cargo test5;
	test5.SetNewCoord(1, 1, 1);
	test5.SetNewCoord(2, 2, 2);
	test5.MoveWithHelpTruck(test3, 3, 3, 1);


	cout << "******************" << endl;
	cout << "Test6: " << endl;
	Cargo test6;
	test6.SetNewCoord(1, 1, 1);
	test6.MoveWithHelpCrane(test4, 2, 2, 10);

	cout << "******************" << endl;
	cout << "Test7: " << endl;
	TruckCrane trcr;
	trcr.SetNewCoord(1,1,1);
	trcr.MyMove(2, 2, 1);
	test6.MoveWithHelpTruckCrane(trcr, 2, 2, 10);


	
	
	return 0;
}
