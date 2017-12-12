#include "NodoColaJugadores.h"

NodoColaJugadores::NodoColaJugadores(){
	jugador = NULL;
	sig = NULL;
}

//NodoColaJugadores::NodoColaJugadores(string name){
//	Jugador(name); 
//}

NodoColaJugadores::NodoColaJugadores(Jugador * pJugador){
	jugador = pJugador;
	sig = NULL;
}

// setInfo()

Jugador * NodoColaJugadores::getInfo(void){
	return jugador;
}

void NodoColaJugadores::setSig(NodoColaJugadores * pSiguiente){
	sig = pSiguiente;
}

NodoColaJugadores * NodoColaJugadores::getSig()
{
	return sig;
}

NodoColaJugadores::~NodoColaJugadores(void)
{
}
