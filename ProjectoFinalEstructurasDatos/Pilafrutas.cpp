#include "Pilafrutas.h"

Pilafrutas::Pilafrutas(){
	longitud = 0;
	tope = NULL;
}

Pilafrutas::~Pilafrutas(){
}

NodoPilaFrutas * Pilafrutas::getTope(){
	return tope;
}

void Pilafrutas::setTope(NodoPilaFrutas * fruta){
	tope = fruta;
}

void Pilafrutas::pushElem(string letra){
	NodoPilaFrutas * fruta = new NodoPilaFrutas(letra);
	if (getTope() != NULL) {//==NULL que haga setTope(aux), pero tendria que repetir la linea 2 veces
		fruta->setSig(tope);
	}
	setTope(fruta);
	setLongitud(longitud++);//consultar si es mejor usar getLongitud()
}

NodoPilaFrutas * Pilafrutas::popElem(){
	NodoPilaFrutas * fruta;
	fruta = getTope();
	setTope(fruta->getSig());
	return fruta;
	
}

int Pilafrutas::getLongitud(){
	return longitud;
}

void Pilafrutas::setLongitud(int x){
	longitud = x;
}
