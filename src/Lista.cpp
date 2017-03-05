#include "Lista.h"
#include "Nodo.h"

using namespace std;

	Lista::Lista(int dato){
		Nodo *m=new Nodo(dato);
		this->H=m;
		this->T=H;
	}

	Lista::Lista(){
		this->H=NULL;
		this->T=NULL;
	}

	void Lista::insertarP(int dato){
		Nodo *m=new Nodo(dato,this->H);
		if (IsVacio)
		{
			T=m;
		}
		H=m;
	}

	void Lista::insertarF(int dato,Nodo T){
		Nodo *m=new Nodo(dato);
		if(IsVacio()){
			this->T=m;
			this->H=m;
			return;
		}
		this->T.sig=m;
		this->T=m;
	}

	bool Lista::IsVacio(){
		return(T==NULL && H==NULL);
	}

	void Lista::insertarRef(int dato,int ref){
		if(IsVacio()){
			cout<<"Error esta vacia"<<endl;
			return;
		}
		Nodo *m=new Nodo(ref);
		if (m==NULL)
		{
			cout<<"Error no se encontro el nodo"<<endl;
		}
		Nodo *n=new Nodo(dato,m.sig);
		m.sig=n;
	}

	Nodo Lista::buscar(int ref){
		Nodo aux=this->H;
		while(aux.dato!=ref)
			if(aux.sig==NULL){
				cout<<"No se encontro"<<endl;
			}
			aux=aux.sig;
			return aux;
	}

	Nodo Lista::buscar(int ref,Nodo n){
		if(n.dato!=ref){
			if(n.sig==NULL){
				cout<<"No se encontro"<<endl;
				return NULL;
			}
			return Buscar(ref,n.sig);
		}
		return n;
	}

	void Lista::borrarP(){
		Nodo aux=this->H;
		this->H=this->H.sig;
		if (this->H==NULL)
			this->T=NULL;
		aux.sig=NULL;
	}

	void Lista::borrarF(){
		Nodo aux=this->H;
		if (this->H == this->T)
		{
			H=NULL;
			T=NULL;
		}
		while(aux.sig!=T)
			aux=aux.sig;
		this->T=aux;
		this->T.sig=NULL;
	}

	void Lista::borrarRef(int ref){
		Nodo r=buscar(ref);
		if(r==NULL){
			cout<<"Error"<<endl;
			return;
		}
		Nodo ant=this->H;
		while(ant.sig!=r)
			ant=ant.sig;
		ant.sig=r.sig;
		r.sig=NULL;
	}