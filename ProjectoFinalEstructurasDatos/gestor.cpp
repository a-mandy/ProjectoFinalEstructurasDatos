#include <windows.h>
#include <iostream>
#include <conio.h>
#include "gestor.h" 



//validar números 
/*void inicio(int  option) {
	switch (option)
	{
	case 1:
		seleccionarJugadores();
		break;
	case 2:
		iniciarJuego();
		break;
	case 3:
		mostrarPuntaje();
		break;
	default:
		estadoDelJuego();
		break;
	}

}*/



//void sleep(int x); 
Gestor::Gestor()
{
}

Gestor::~Gestor()
{
}

void Gestor::begin() {
	int cantJugadores;
	cout << "Cuántos jugadores?" << endl;
	//validar número, 
	cin >> cantJugadores;
	crearJugadores(cantJugadores);
}

void Gestor::crearJugadores(int x) {
	string nombre;

	for (int i = 0; i < x; i++) {
		cout << "Jugador numero " << i + 1 << "introduce tus datos" << endl;
		cout << endl;
		cout << "NOMBRE:" << endl;
		cin >> nombre;
		Jugador * j = new Jugador(nombre, i + 1);
		jugadores->agregarJugador(j);
	
	}

	for (int i = 0; i <x; i++) {
		start(i+1);
	}
}

Jugador* Gestor::numeroJugador(int jugador) {
	NodoColaJugadores *aux = jugadores->getCabeza();
	Jugador *player = new Jugador();

	while (aux != NULL) {
		if (aux->getInfo()->getPos() == jugador) {
			player = aux->getInfo();
		}
		aux = aux->getSig();
	}
	return player;
}


void Gestor::draw(int x){
	
	system("cls");
	drawWidth();
	drawWalls();
	drawWidth();
	datosJugador(x);
	
}
void Gestor::datosJugador(int jugador) {
	Jugador *player= numeroJugador(jugador);
	
	cout << "Nombre jugador: " << player->getNombre() << endl;
	cout << "Puntaje: " << score << endl;
	cout << "Cantidad de intentos disponibles: " << endl;

}

void Gestor::drawWidth(){
	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;
}

void Gestor::drawWalls(){
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0)
				cout << "#";
			else if (i == fruitY && j == fruitX)
				cout << "F";
			drawSnake(i, j);

			if (j == width - 1)
				cout << "#";
		}
		cout << endl;

	}
}

void Gestor::drawSnake(int i, int j){
	snake->getCabeza()->paint(j, i);
}


void Gestor::drawFruit(int i, int j){
	if (i == fruitY && j == fruitX)
		cout << "F";
	else {
		cout << " ";
	}
}

void Gestor::setFruit(){
	fruitX = rand() % width;
	fruitY = rand() % height;

}

//void Gestor::setFruits(){
//	frutas->pushElem("A");
//	frutas->pushElem("T");
//	frutas->pushElem("U");
//	frutas->pushElem("R");
//	frutas->pushElem("F");
//}

void Gestor::setUp(){
	NodoListaSnake * tail = new NodoListaSnake((width / 2), (height / 2), "O");
	snake->setCabeza(tail);
	gameOver = false;
	dir = STOP;
	setFruit();
	score = 0;
	
}

void Gestor::logic(Jugador* jugadorActual){
	int fx = snake->getCabeza()->getInfo()->getX();
	int fy = snake->getCabeza()->getInfo()->getY();
	switch (dir) {

	case LEFT:
		snake->move(fx - 1, fy);
		break;
	case RIGHT:
		snake->move(fx + 1, fy);
		break;
	case UP:
		snake->move(fx, fy - 1);
		break;
	case DOWN:
		snake->move(fx, fy + 1);
		break;
	default:
		break;
	}
	int vidas = jugadorActual->getVidas();
	if (fx > width || fx < 0 || fy > height || fy < 0)
		jugadorActual->setVidas(jugadorActual->getVidas()-1);
	if (vidas > 1) {
		gameOver = false;
		start(jugadorActual->getPos());
	}
	else {
		gameOver = true;
	}

		
	    

	if (fruitY == fy &&fruitX == fx) {
		snake->insertar();
		score = score + 10;
		setFruit();
	}
}

void Gestor::input(){
	if (_kbhit()) {
		switch (_getch()) {
		case 'a':
			dir = LEFT;
			break;
		case 'w':
			dir = UP;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			gameOver = true;
			break;
		}
	}
}

void Gestor::start(int jugador) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);


	setUp();
	while (!gameOver) {
		draw(jugador);
		input();
		logic(numeroJugador(jugador));
		Sleep(300);
	}

}

void Gestor::inicializarGestor() {
	Gestor* miGestor = new Gestor();
}
