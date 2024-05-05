// CMakeProject1.h : ���������� ���� ��� ����������� ��������� ���������� ������
// ��� ���������� ����� ��� ����������� �������.

#pragma once
#include "Transport.hpp"
#ifndef CRANE_H
#define CRANE_H

class Crane : public Transport
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
