// CMakeProject1.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

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
// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
