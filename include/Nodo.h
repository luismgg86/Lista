#include <iostream>

class Nodo{

public:
	int dato;
	Nodo *sig;
	Nodo(int dato,Nodo *sig);
	Nodo(int dato);
};