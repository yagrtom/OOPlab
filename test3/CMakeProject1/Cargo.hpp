// CMakeProject1.h : ���������� ���� ��� ����������� ��������� ���������� ������
// ��� ���������� ����� ��� ����������� �������.

#pragma once
#include <iostream>
using namespace std;

#include "Object.hpp"
#include "Truck.hpp"
#include "Crane.hpp"
#include "TruckCrane.hpp"

#ifndef CARGO_H
#define CARGO_H

class Cargo : public Object
{
private:
	double mass;
public:
	void CreateNewMass(double newmass);
	void MoveWithHelpTruck(Truck helper, double toX, double toY, double toZ);
	void MoveWithHelpCrane(Crane helper, double toX, double toY, double toZ);
	void MoveWithHelpTruckCrane(TruckCrane helper, double toX, double toY, double toZ);
};

#endif // __CCLASS_H__
// TODO: ���������� ����� ������ �� �������������� ���������, ����������� ��� ���������.
