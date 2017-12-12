#pragma once
#ifndef NODOFRUTA_H
#define NODOFRUTA_H
#include <string>
using namespace std;


class NodoPilaFrutas
{
public:
	NodoPilaFrutas();
	NodoPilaFrutas(string);
	~NodoPilaFrutas();
	string getLetra();
	void setLetra(string);
	void setSig(NodoPilaFrutas *);
	NodoPilaFrutas * getSig();

private:
	NodoPilaFrutas* sig;
	string letra;

};

#endif // !NODOFRUTA_H
