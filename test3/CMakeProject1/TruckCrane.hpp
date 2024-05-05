// CMakeProject1.h : ���������� ���� ��� ����������� ��������� ���������� ������
// ��� ���������� ����� ��� ����������� �������.

#pragma once
#include "Transport.hpp"
#ifndef TRUCKCRANE_H
#define TRUCKCRANE_H

class TruckCrane : public Transport
{
private:
	double R = 25;
	double CargoZ = 100;
public:
	void MyMove(double sizeX, double sizeY, double sizeZ);
	double GetR();
	double GetCargoZ();
};

#endif // __CCLASS_H__
// TODO: ���������� ����� ������ �� �������������� ���������, ����������� ��� ���������.
