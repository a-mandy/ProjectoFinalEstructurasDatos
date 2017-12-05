#include "Tail.h"

Tail::Tail()
{
}
Tail::Tail(int px, int py) {
	x = px;
	y = py;
}

Tail::~Tail()
{
}

int Tail::getY()
{
	return y;
}

void Tail::setY(int py)
{
	y = py;
}

int Tail::getX()
{
	return x;
}

void Tail::setX(int px)
{
	x = px;
}

string Tail::getTail()
{
	return tail;
}

void Tail::setTail(){
	tail = "o";

}
void Tail::setTail(string o) {
	tail = o;

}
