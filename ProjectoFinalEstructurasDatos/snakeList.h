#pragma once
#ifndef SNAKELIST_H
#define SNAKELIST_H

#include "nodoTail.h"

class Snakelist {
public:
	Snakelist();
	~Snakelist();
	Nodotail * getCabeza();
	void setCabeza(Nodotail*);
	void insertar();
	void move(int, int);

private:
	Nodotail * cabeza;
};

Snakelist::Snakelist(){
}

Snakelist ::~Snakelist(){
}

Nodotail * Snakelist::getCabeza() {
	return cabeza;
}

void Snakelist::setCabeza(Nodotail *c) { cabeza = c; }

void Snakelist::insertar() {
	Nodotail * aux;
	aux = new Nodotail();
	if (cabeza->getSig() == NULL)
		cabeza->setSig(aux);

	else {
		aux->setSig(cabeza->getSig());
		cabeza->setSig(aux);
	}
}
inline void Snakelist::move(int px, int py) {
	cabeza->move(px,py);
}
#endif

