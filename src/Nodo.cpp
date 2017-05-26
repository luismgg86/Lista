#include "Nodo.h"

Nodo::Nodo(int dato,Nodo *sig){ //constructor, recibe un dato y nodo sig
	this->dato=dato;
	this->sig=sig;
}

Nodo::Nodo(int dato){ //constructor, recibe dato
	this->dato=dato;
	this->sig=NULL;
}
