#include "Nodo.h"

class Lista{
public:
    
    //atributos

	Nodo *H,*T;//nodos H y T apuntan a la cabeza y a la cola respectivamente
	int dato;

	Lista(int dato);
	Lista();

    //metodos
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