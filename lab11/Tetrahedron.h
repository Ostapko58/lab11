#pragma once
#include<cmath>
#include"Shape.h"
class Tetrahedron : public Shape
{
private:
	double a;
public:
	Tetrahedron();
	Tetrahedron(double a);
	double volume() override;
};

