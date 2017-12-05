#pragma once
#ifndef TAIL_H
#define TAIL_H
#include <string>

using namespace std;
class Tail{

public:
	Tail();
	Tail(int, int);
	~Tail();
	int getY();
	void setY(int);
	int getX();
	void setX(int);
	string getTail();
	void setTail();
	void setTail(string);

private:
	int x;
	int y;
	string tail;

};


#endif 

