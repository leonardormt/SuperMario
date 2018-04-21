#include "vector2D.h"



vector2D::vector2D(float xv = 0.0f, float yv = 0.0f)
{
	x = xv;
	y = yv;
}


vector2D::~vector2D()
{
}

vector2D vector2D::operator-(vector2D &v)
{
	vector2D ret;
	ret.x = x - v.x;
	ret.y = y - v.y;
	return ret;
}

vector2D vector2D::operator+(vector2D & v)
{
	vector2D ret;
	ret.x = x + v.x;
	ret.y = y + v.y;
	return ret;
}
	
