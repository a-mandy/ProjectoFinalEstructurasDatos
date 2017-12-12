#pragma once 
#ifndef PILAFRUTAS_H
#define PILAFRUTAS_H
#include "NodoPilaFrutas.h"
class Pilafrutas
{
public:
	Pilafrutas();
	~Pilafrutas();
	NodoPilaFrutas * getTope();
	void setTope(NodoPilaFrutas *);
	void pushElem(string);
	NodoPilaFrutas* popElem();
	int getLongitud();
	void setLongitud(int);
	
private:
	NodoPilaFrutas * tope;
	int longitud;
};
#endif 

