// CMakeProject1.h : ���������� ���� ��� ����������� ��������� ���������� ������
// ��� ���������� ����� ��� ����������� �������.

#pragma once


#include "Object.hpp"
#ifndef TRANSPORT_H
#define TRANSPORT_H

class Transport : public Object
{

public:
	void MyMove(double sizeX, double sizeY, double sizeZ);
};

#endif // __CCLASS_H__
// TODO: ���������� ����� ������ �� �������������� ���������, ����������� ��� ���������.
