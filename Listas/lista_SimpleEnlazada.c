// Lista simplemente enlazada

#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int dato;
	struct nodo *sgte;
}nodo;

nodo *primer = NULL;
nodo *ultimo = NULL;

void agregar(nodo *Nodo){
	
	Nodo -> sgte = NULL;
	
	if(primer == NULL){
		primer == Nodo;
		ultimo = Nodo;
	}
	else{
		ultimo -> sgte = Nodo;
		ultimo = Nodo;
	}
}

int main(){
	
	nodo *primerNodo = malloc(sizeof(nodo));
	primerNodo -> dato = 5;
	
	nodo *segundoNodo = malloc(sizeof(nodo));
	segundoNodo -> dato = 7;
	
	agregar(primerNodo);
	agregar(segundoNodo);
	
	nodo *i = primerNodo;
	
	while (i != NULL){
		printf("%i \n", i->dato);
		i = i -> sgte;
	}
	return 0;
}
