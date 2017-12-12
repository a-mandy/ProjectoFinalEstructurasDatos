#pragma once
#ifndef JUGADORES_H
#define JUGADORES_H
#include "NodoColaJugadores.h"
class ColaJugadores
{
public:
	ColaJugadores();
	//ColaJugadores(string);
	~ColaJugadores();
	void setCabeza(NodoColaJugadores *);
	NodoColaJugadores* getCabeza(void);
	void setCola(NodoColaJugadores*);
	NodoColaJugadores * getCola();
	void agregarJugador(Jugador *);

private:
	NodoColaJugadores * cabeza;
	NodoColaJugadores * cola;

	

};
#endif 

