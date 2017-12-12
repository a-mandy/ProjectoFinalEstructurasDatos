#pragma once
#ifndef SNAKELIST_H
#define SNAKELIST_H

#include "NodoListaSnake.h"

class Snakelist {
public:
	Snakelist();
	~Snakelist();
	NodoListaSnake * getCabeza();
	void setCabeza(NodoListaSnake*);
	void insertar();
	void move(int, int);

private:
	NodoListaSnake * cabeza;
};

#endif

