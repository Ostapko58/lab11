#pragma once
#include"Shape.h"
class Parallelepiped : public Shape
{
private:
	double x, y, z;
public:
	Parallelepiped();
	Parallelepiped(double x, double y, double z);
	double volume() override;
};

