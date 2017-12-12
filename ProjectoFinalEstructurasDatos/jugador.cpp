#include "jugador.h"

Jugador::Jugador(){
}

Jugador::Jugador(string n){
	nombre = n; 
}

Jugador::Jugador(string n, int x){
	nombre = n;
	posicion = x;
}

Jugador::Jugador(int x){
	posicion = x;
}

Jugador::~Jugador(){
}

string Jugador::getNombre(){
	return nombre;
}

void Jugador::setNombre(string n){
	nombre = n;
}

int Jugador::getPos(){
	return posicion;
}

void Jugador::setPos(int x){
	posicion = x;
}

int Jugador::getPuntaje(){
	return puntaje;
}

void Jugador::setPuntaje(int x){
	puntaje = x;
}

int Jugador::getVidas(){
	return vidas;
}

void Jugador::setVidas(int cantVidas){
	vidas = cantVidas;
}


