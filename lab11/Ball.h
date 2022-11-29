#pragma once
#include<cmath>
#include"Shape.h"
class Ball : public Shape
{
private:
	double r;
public:
	Ball();
	Ball(double r);
	double volume() override;
};

