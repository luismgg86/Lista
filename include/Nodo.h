#include <iostream>

class Nodo{

public:
	int dato;//atributo dato del nodo
	Nodo *sig;//apuntador nodo siguiente
	
	//constructores
	Nodo(int dato,Nodo *sig);
	Nodo(int dato);
};