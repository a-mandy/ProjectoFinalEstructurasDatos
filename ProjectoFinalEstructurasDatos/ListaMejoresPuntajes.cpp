#include "ListaMejoresPuntajes.h"


ListaMejoresPuntajes::ListaMejoresPuntajes(){
	cabeza = NULL;
}

ListaMejoresPuntajes::~ListaMejoresPuntajes()
{
}

NodoListaMejoresPuntajes * ListaMejoresPuntajes::getCabeza(){

	return cabeza;
}

void ListaMejoresPuntajes::setCabeza(NodoListaMejoresPuntajes *pCabeza){

	cabeza = pCabeza;

}

void ListaMejoresPuntajes::mostrarMejoresPuntajes(){

	NodoListaMejoresPuntajes* aux = getCabeza();
	while (aux != NULL)
	{

		cout << aux->getPuntaje();
		cout << " - ";
		cout << aux->getNombre();

		aux = aux->getSig();

	}
}

void ListaMejoresPuntajes::insertarOrdenado(int pPuntaje){
	NodoListaMejoresPuntajes * aux;
	aux = new NodoListaMejoresPuntajes(pPuntaje);

	if (getCabeza() == NULL){

		setCabeza(aux);
	}
	else{
		if (getCabeza()->getPuntaje() < aux->getPuntaje()){
			aux->setSig(getCabeza());
			setCabeza(aux);
		}else{
			NodoListaMejoresPuntajes *anterior = getCabeza();
			NodoListaMejoresPuntajes *actual = getCabeza()->getSig();
			while (actual != NULL && !(actual->getPuntaje() > aux->getPuntaje())){
				anterior = anterior->getSig();
				actual = actual->getSig();
			}
			aux->setSig(actual);
			anterior->setSig(aux);
		}
	}	
}
