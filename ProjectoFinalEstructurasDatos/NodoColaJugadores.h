#pragma once
#ifndef NODOJUGADOR_H
#define NODOJUGADOR_H
#include "jugador.h"

class NodoColaJugadores {
public:
	NodoColaJugadores();
	NodoColaJugadores(string);
	NodoColaJugadores(Jugador *);
	void setInfo(Jugador jugador);
	Jugador * getInfo(void);
	void setSig(NodoColaJugadores * x);
	NodoColaJugadores * getSig();
	~NodoColaJugadores(void);

protected:
	Jugador * jugador; //int info
	NodoColaJugadores *sig;

};

#endif