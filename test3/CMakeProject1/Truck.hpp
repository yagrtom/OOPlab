// CMakeProject1.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once
#include "Transport.hpp"
#ifndef TRUCK_H
#define TRUCK_H

class Truck : public Transport
{
private:
	double R = 10; //радиус взаимодейсвия с грузом
public:
	void MyMove(double sizeX, double sizeY, double sizeZ);
	double GetR();
};

#endif // __CCLASS_H__
// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
