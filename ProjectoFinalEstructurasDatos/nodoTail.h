#pragma once 
#ifndef NODOTAIL_H
#define NODOTAIL_H
#include <iostream>
#include "Tail.h"
using namespace std;
class Nodotail
{
public:
	Nodotail();
	Nodotail(string);
	Nodotail(int px, int py, string o);
	~Nodotail();
	Nodotail *getSig();
	void setSig(Nodotail*);
	Tail * getInfo();
	void setInfo(Tail*);
	void move(int,int);
	void paint(int, int);

private:
	Nodotail * sig;
	Tail *info;
};

Nodotail::Nodotail() {
	info = new Tail();
	info->setTail();
}

Nodotail::Nodotail(string o) {
	info = new Tail();
	info->setTail(o);
}
Nodotail::Nodotail(int px, int py, string o) {
	info = new Tail(px, py);
	info->setTail(o);
}
Nodotail::~Nodotail(){
}

Nodotail * Nodotail::getSig(){
	return sig;
}

void Nodotail::setSig(Nodotail * next) {
	sig = next;
}

inline Tail * Nodotail::getInfo()
{
	return info;
}

inline void Nodotail::setInfo(Tail * pinfo){
	info = pinfo;
}

inline void Nodotail::move(int px, int py){
	if (sig != NULL)  {
		sig->getInfo()->setX(this->info->getX());
		sig->getInfo()->setY(this->info->getY());
	}
	info->setX(px);
	info->setY(py);
}
inline void Nodotail::paint(int px, int py) {
	// 10
	int testx = info->getX();
	int testy = info->getY();

	if(info->getX() == px && info->getY() == py)
	cout << info->getTail();
	else if (sig != NULL)
		sig->paint(px, py);
	else
		cout << " ";
}
#endif 

