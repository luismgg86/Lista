#include <iostream>

class Lista{
public:

	Lista(int dato);
	Lista();
	void insertarP(int dato);
	void insertarF(int dato,Nodo T);
	bool Isvacio();
	void insertarRef(int dato,int ref);
	Nodo buscar(int ref);
	Nodo buscar(int ref,Nodo n);
	void borrarF();
	void borrarRef();
}