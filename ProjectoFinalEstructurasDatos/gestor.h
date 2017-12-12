#pragma once
#ifndef GESTOR_H
#define GESTOR_H
#include <windows.h>
#include <iostream>
#include <conio.h>
#include "snakeList.h"
//#include "Pilafrutas.h"
#include "ColaJugadores.h"

class Gestor
{
public:
	Gestor();
	~Gestor();
	void begin();
	void crearJugadores(int x);
	Jugador * numeroJugador(int);
	void start(int);
	void inicializarGestor();
	void draw(int);
	void datosJugador(int);
	void drawWidth();
	void drawWalls();
	void drawSnake(int i, int j);
	void drawFruit(int i, int j);
	void setFruit();
	//void setFruits();
	void setUp();
	void logic(Jugador*);
	void input();
	

private:
	//Pilafrutas frutas;
	bool gameOver;
	const int width = 20;
	const int height = 20;
	int x, y, fruitX, fruitY, score;
	enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
	eDirection dir;
	Snakelist * snake;
	ColaJugadores * jugadores= new ColaJugadores();
	//Pilafrutas * frutas;
};

#endif 

