#include <iostream>
#include <conio.h>
#include <windows.h>
#include "snakeList.h"

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score; 
enum eDirection { STOP = 0, LEFT, RIGHT, UP , DOWN };
eDirection dir;
Snakelist *snake = new Snakelist();

void drawWidth();
void drawWalls();
void drawSnake(int i, int j);
void drawFruit(int i, int j);
void setFruit();

void setUp() {
	
	Nodotail * tail = new Nodotail((width / 2),(height / 2),"O");
	snake->setCabeza(tail);
	gameOver = false;
	dir = STOP;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;


}
void draw() {
	system("cls");
	drawWidth();
	drawWalls();
	drawWidth();
	
}
void drawWidth() {
	
	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;
}
void drawWalls() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0)
				cout << "#";
			else if(i == fruitY && j == fruitX)
				cout << "F";
			drawSnake(i,j);
			
			if (j == width - 1)
				cout << "#";
		}
		cout << endl;

	}

}
void drawSnake(int i,int j) {
	snake->getCabeza()->paint(j,i);
}
void drawFruit(int i, int j) {
	if (i == fruitY && j == fruitX)
		cout << "F";
	else {
		cout << " ";
	}
}
void input() {
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
			gameOver= true;
			break;
		}

	}

}
void logic() {
	int fx = snake->getCabeza()->getInfo()->getX();
	int fy = snake->getCabeza()->getInfo()->getY();
	switch (dir){

	case LEFT:	
		snake->move(fx-1, fy);
		break;
	case RIGHT:
 		snake->move(fx+1, fy);
		break;
	case UP:
		snake->move(fx, fy-1);
		break;
	case DOWN:
		snake->move(fx, fy+1);		
		break;
	default:
		break;
	}
	if (fx > width || fx < 0|| fy > height || fy < 0)
		gameOver = true;

	if (fruitY == fy &&fruitX == fx) {
		snake->insertar();
		score=score+1;
		setFruit();
	}


}
void setFruit() {
	fruitX = rand() % width;
	fruitY = rand() % height;

}
int main() {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
	setUp();
	while (!gameOver) {
		draw();
		input();
		logic();
		//sleep(10); sleep(10); ----> slow the game 
	}
	return 0;
}

//snake tail, snake head, eat fruit, if the snake bit it's tail= gameOver
