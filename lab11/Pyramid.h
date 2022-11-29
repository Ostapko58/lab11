#pragma once
#include"Shape.h"
class Pyramid : public Shape
{
private:
	double x, y, h;
public:
	Pyramid();
	Pyramid(double x, double y, double h);
	double volume() override;
};

