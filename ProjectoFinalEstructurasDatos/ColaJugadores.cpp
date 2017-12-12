#include "ColaJugadores.h"

ColaJugadores::ColaJugadores(){
	cabeza = NULL;
}

//ColaJugadores::ColaJugadores(string pNombre){
//	NodoColaJugadores(pNombre);
//}

ColaJugadores::~ColaJugadores() {
}

void ColaJugadores::setCabeza(NodoColaJugadores * pCabeza){
	cabeza = pCabeza;
}

NodoColaJugadores * ColaJugadores::getCabeza(void){
	return cabeza;
}

void ColaJugadores::setCola(NodoColaJugadores * pLast){
	cola = pLast;
}

NodoColaJugadores * ColaJugadores::getCola()
{
	return cola;
}



void ColaJugadores::agregarJugador(Jugador * pJugador){
	NodoColaJugadores *aux = new NodoColaJugadores(pJugador);


	if (getCabeza() == NULL) {
		setCabeza(aux);
		setCola(aux);
		
	}else{
		getCola()->setSig(aux);
		setCola(aux);
	}

}
