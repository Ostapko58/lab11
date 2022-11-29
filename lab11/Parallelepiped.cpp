#include "Parallelepiped.h"

Parallelepiped::Parallelepiped()
{
	this->x = 1;
	this->y = 1;
	this->z = 1;
}

Parallelepiped::Parallelepiped(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

double Parallelepiped::volume()
{
	return x*y*z;
}
