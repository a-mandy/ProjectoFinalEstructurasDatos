#pragma once 
#ifndef NODOTAIL_H
#define NODOTAIL_H
#include <iostream>
#include "Tail.h"
using namespace std;
class NodoListaSnake
{
public:
	NodoListaSnake();
	NodoListaSnake(string);
	NodoListaSnake(int px, int py, string o);
	~NodoListaSnake();
	NodoListaSnake *getSig();
	void setSig(NodoListaSnake*);
	Tail * getInfo();
	void setInfo(Tail*);
	void move(int,int);
	void paint(int, int);

private:
	NodoListaSnake * sig;
	Tail *info;
};
#endif 

