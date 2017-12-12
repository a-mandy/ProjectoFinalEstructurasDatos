#include "NodoListaSnake.h"
NodoListaSnake::NodoListaSnake() {
	info = new Tail();
	info->setTail();
}

NodoListaSnake::NodoListaSnake(string o) {
	info = new Tail();
	info->setTail(o);
}
NodoListaSnake::NodoListaSnake(int px, int py, string o) {
	info = new Tail(px, py);
	info->setTail(o);
}
NodoListaSnake::~NodoListaSnake() {
}

NodoListaSnake * NodoListaSnake::getSig() {
	return sig;
}

void NodoListaSnake::setSig(NodoListaSnake * next) {
	sig = next;
}

inline Tail * NodoListaSnake::getInfo()
{
	return info;
}

inline void NodoListaSnake::setInfo(Tail * pinfo) {
	info = pinfo;
}

inline void NodoListaSnake::move(int px, int py) {
	if (sig != NULL) {
		sig->getInfo()->setX(this->info->getX());
		sig->getInfo()->setY(this->info->getY());
	}
	info->setX(px);
	info->setY(py);
}
inline void NodoListaSnake::paint(int px, int py) {
	// 10
	int testx = info->getX();
	int testy = info->getY();

	if (info->getX() == px && info->getY() == py)
		cout << info->getTail();
	else if (sig != NULL)
		sig->paint(px, py);
	else
		cout << " ";
}