#pragma once
#include "obj_fijo.h"
class bloque :
	public obj_fijo
{
	float lado;
public:
	bloque();
	~bloque();
	void dibuja();
};

