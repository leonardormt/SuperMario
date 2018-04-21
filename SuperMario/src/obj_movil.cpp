#include "obj_movil.h"



obj_movil::obj_movil()
{
}


obj_movil::~obj_movil()
{
}

void obj_movil::mover(float t)
{
	posicion = posicion + velocidad * t;
}


