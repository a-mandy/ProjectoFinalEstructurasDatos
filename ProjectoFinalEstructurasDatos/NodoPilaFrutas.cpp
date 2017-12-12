#include "NodoPilaFrutas.h"

NodoPilaFrutas::NodoPilaFrutas(){
	letra = "";
}

NodoPilaFrutas::NodoPilaFrutas(string l){
	letra = l;
}

NodoPilaFrutas::~NodoPilaFrutas(){
}

string NodoPilaFrutas::getLetra(){
	return letra ;
}

void NodoPilaFrutas::setLetra(string l){
	letra = l;
}

void NodoPilaFrutas::setSig(NodoPilaFrutas * s){
	sig = s;
}

NodoPilaFrutas * NodoPilaFrutas::getSig()
{
	return sig;
}
