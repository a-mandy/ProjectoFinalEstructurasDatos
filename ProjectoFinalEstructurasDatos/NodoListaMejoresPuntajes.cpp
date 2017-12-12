#include "NodoListaMejoresPuntajes.h"

NodoListaMejoresPuntajes::NodoListaMejoresPuntajes(){
	puntaje = 0;
	nombre = " ";
	siguiente = NULL;
}

NodoListaMejoresPuntajes::NodoListaMejoresPuntajes(int pPuntaje) {
	puntaje = pPuntaje;
}

NodoListaMejoresPuntajes::NodoListaMejoresPuntajes(string pNombre, int pPuntaje) {
	nombre = pNombre;
	puntaje = pPuntaje;
}

NodoListaMejoresPuntajes::~NodoListaMejoresPuntajes(){
}

void NodoListaMejoresPuntajes::setNombre(string pNombre){

	nombre = pNombre;
}

string NodoListaMejoresPuntajes::getNombre(){

	return nombre;
}

int NodoListaMejoresPuntajes::getPuntaje(){

	return puntaje;
}

void NodoListaMejoresPuntajes::setPuntaje(int pPuntaje){

	puntaje = pPuntaje;

}

NodoListaMejoresPuntajes * NodoListaMejoresPuntajes::getSig()
{
	return siguiente;
}

void NodoListaMejoresPuntajes::setSig(NodoListaMejoresPuntajes * pSiguiente){

	siguiente = pSiguiente;
}
