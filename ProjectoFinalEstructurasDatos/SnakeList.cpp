#include "snakeList.h"


Snakelist::Snakelist(){
}

Snakelist ::~Snakelist() {
}

NodoListaSnake * Snakelist::getCabeza() {
	return cabeza;
}

void Snakelist::setCabeza(NodoListaSnake *c) { cabeza = c; }

void Snakelist::insertar() {
	NodoListaSnake * aux;
	aux = new NodoListaSnake();
	if (cabeza->getSig() == NULL)
		cabeza->setSig(aux);

	else {
		aux->setSig(cabeza->getSig());
		cabeza->setSig(aux);
	}
}
inline void Snakelist::move(int px, int py) {
	cabeza->move(px, py);
}