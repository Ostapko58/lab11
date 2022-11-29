#include "Tetrahedron.h"

Tetrahedron::Tetrahedron()
{
	this->a = 1;
}

Tetrahedron::Tetrahedron(double a)
{
	this->a = a;
}

double Tetrahedron::volume()
{
	return pow(a,3)*sqrt(2)/12;
}
