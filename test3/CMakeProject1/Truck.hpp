// CMakeProject1.h : ���������� ���� ��� ����������� ��������� ���������� ������
// ��� ���������� ����� ��� ����������� �������.

#pragma once
#include "Transport.hpp"
#ifndef TRUCK_H
#define TRUCK_H

class Truck : public Transport
{
private:
	double R = 10; //������ ������������� � ������
public:
	void MyMove(double sizeX, double sizeY, double sizeZ);
	double GetR();
};

#endif // __CCLASS_H__
// TODO: ���������� ����� ������ �� �������������� ���������, ����������� ��� ���������.
