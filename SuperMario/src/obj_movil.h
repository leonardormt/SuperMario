#pragma once
#include "vector2D.h"

class obj_movil
{
	vector2D posicion;
	vector2D velocidad;

public:

	obj_movil();
	~obj_movil();
	void mover( float t);
};

