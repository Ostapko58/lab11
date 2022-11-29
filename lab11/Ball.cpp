#include<iostream>
#include "Ball.h"
using namespace std;

Ball::Ball()
{
	this->r=1;
}

Ball::Ball(double r)
{
	this->r = r;
}

double Ball::volume()
{
	const double PI = acos(-1.0);
	return 4/3*PI*pow(r,3);
}
