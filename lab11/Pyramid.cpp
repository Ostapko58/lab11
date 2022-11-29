#include "Pyramid.h"

Pyramid::Pyramid()
{
	this->x = 1;
	this->y = 1;
	this->h = 1;
}

Pyramid::Pyramid(double x, double y, double h)
{
	this->x = x;
	this->y = y;
	this->h = h;
}

double Pyramid::volume()
{
	return x*y*h/3;
}
