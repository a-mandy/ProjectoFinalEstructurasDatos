#pragma once
#ifndef LISTAMEJORESPUNTAJES_H
#define LISTAMEJORESPUNTAJES_H
#include "NodoListaMejoresPuntajes.h"

class ListaMejoresPuntajes{
public:
	ListaMejoresPuntajes();
	~ListaMejoresPuntajes();
	NodoListaMejoresPuntajes * getCabeza();
	void setCabeza(NodoListaMejoresPuntajes *);
	void mostrarMejoresPuntajes();
	void insertarOrdenado(int);
	
private:
	NodoListaMejoresPuntajes * cabeza;
};
#endif