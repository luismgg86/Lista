#include "Nodo.h"

class Lista{
public:

	Nodo *H,*T;
	int dato;

	Lista(int dato);
	Lista();

	void insertarP(int dato);
	void insertarF(int dato);
	void insertarRef(int dato,int ref);
	bool IsVacio();
	Nodo* buscar(int ref);
	Nodo* buscar(int ref,Nodo *n);
	int borrarP();
	int borrarF();
	int borrarRef(int ref);
};