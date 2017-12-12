#pragma once
#ifndef NODOMEJORESPUNTAJES_H
#define NODOMEJORESPUNTAJES_H
#include <iostream>
#include <string>
using namespace std; 

class NodoListaMejoresPuntajes
{
public:
	NodoListaMejoresPuntajes();
	NodoListaMejoresPuntajes(int pPuntaje);
	NodoListaMejoresPuntajes(string pNombre, int pPuntaje);
	~NodoListaMejoresPuntajes();
	void setNombre(string);
	string getNombre();
	int getPuntaje();
	void setPuntaje(int);
	NodoListaMejoresPuntajes * getSig();
	void setSig(NodoListaMejoresPuntajes*);
	

private:
	NodoListaMejoresPuntajes * siguiente;
	string nombre;
	int puntaje;
	

};
#endif 

