#pragma once
#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>

using namespace std;

class Jugador
{
public:
	Jugador();
	Jugador(string);
	Jugador(string, int);
	Jugador(int);
	~Jugador();
	string getNombre();
	void setNombre(string);
	int getPos();
	void setPos(int);
	int getPuntaje();
	void setPuntaje(int);
	int getVidas();
	void setVidas(int);
	

private:
	string nombre;
	int posicion; 
	int puntaje;
	int vidas = 5;


};
#endif

