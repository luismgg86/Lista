#include "Lista.h"

using namespace std;

	Lista::Lista(){
		this->H=NULL;
		this->T=NULL;
	}

	Lista::Lista(int dato){
		Nodo *m=new Nodo(dato);
		this->H=m;
		this->T=H;
	}

	bool Lista::IsVacio(){
		return(this->T==NULL && this->H==NULL);
	}

	void Lista::insertarP(int dato){
		Nodo *m=new Nodo(dato,this->H);
		if (IsVacio())
		{
			this->T=m;
		}
		this->H=m;
	}

	void Lista::insertarF(int dato){
		Nodo *m=new Nodo(dato);
		if(IsVacio()){
			this->T=m;
			this->H=m;
			return;
		}
		this->T->sig=m->sig;
		this->T=m;
	}

	void Lista::insertarRef(int dato,int ref){
		if(IsVacio()){
			cout<<"Error la lista esta vacia"<<endl;
			return;
		}
		Nodo *m=buscar(ref);
		if (m==NULL)
		{
			cout<<"Error la referencia no esta en la lista"<<endl;
			return;
		}
		if(m->sig==NULL){
			insertarF(dato);
			return;
		}
		Nodo *n=new Nodo(dato,m->sig);
		m->sig=n->sig;
		return;
	}

	Nodo* Lista::buscar(int ref){
		Nodo *aux=this->H;

		if(IsVacio()){
			cout<<"error la lista esta vacia"<<endl;
			return NULL;
		}

		while(aux->dato!=ref)
			if(aux->sig==NULL){
				cout<<"la referencia no esta en la lista"<<endl;
			}
			aux=aux->sig;
			return aux;
	}

	Nodo* Lista::buscar(int ref,Nodo *n){

		if(IsVacio()){
			cout<<"error la lista esta vacia"<<endl;
			return NULL;
		}

		if(n->dato!=ref){
			if(n->sig==NULL){
				cout<<"error la referencia no esta en la lista"<<endl;
				return NULL;
			}
			return buscar(ref,n->sig);
		}
		return n;
	}

	int Lista::borrarP(){

		int d=this->H->dato;

		if(IsVacio()){
			cout<<"error la lista esta vacia"<<endl;
			return d;
		}

		Nodo *aux=this->H;
		this->H=this->H->sig;

		if (this->H==NULL)
			this->T=NULL;

		aux->sig=NULL;

		return d;
	}

	int Lista::borrarF(){

		int d=this->H->dato;

		if(IsVacio()){
			cout<<"error la lista esta vacia"<<endl;
			return d;
		}

		Nodo *aux=this->H;
		if (this->H == this->T)
		{
			this->H=NULL;
			this->T=NULL;
			return d;
		}

		while(aux->sig!=this->T)
			aux=aux->sig;

		this->T=aux;
		this->T->sig=NULL;
		return d;
	}

	int Lista::borrarRef(int ref){

		if(IsVacio()){
			cout<<"error la lista esta vacia"<<endl;
			return ref;
		}

		Nodo *r=buscar(ref);

		if(r==NULL){
			cout<<"error la referencia no esta en la lista"<<endl;
			return ref;
		}

		if (this->H == this->T){
		this->H = NULL;
		this->T = NULL;
		return ref;
	    }

		Nodo *ant=this->H;

		while(ant->sig!=r)
			ant=ant->sig;

		ant->sig=r->sig;
		r->sig=NULL;
		return ref;
	}