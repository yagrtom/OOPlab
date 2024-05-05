// CMakeProject1.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once
#include <iostream>
using namespace std;



#ifndef OBJECT_H
#define OBJECT_H

class Object 
{
private:
	double x, y, z;
protected:
	bool testCraete = 0;
public:
	void SetNewCoord(double sizeX, double sizeY, double sizeZ);
	double GetX();
	double GetY();
	double GetZ();
	bool GettestCreate();
protected:
	void SettestCreateZero();
};

#endif // __CCLASS_H__
// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
