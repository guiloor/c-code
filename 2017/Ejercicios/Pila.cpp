#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100

struct Pila{
	int data[MAX];
	int cima;
};

bool push(struct Pila *pila, int dato){
		if(pila->cima>=MAX){
			return false;
}

		pila->data[pila->cima++] = dato;
			return true;
}
void imprimir(struct Pila pila) {
	for(int i = 0; i<pila.cima; i++)
	printf(" %i", pila.data[i]);
	printf("\n");
}
	
int pop(Pila *pila) {
	if(pila->cima == 0){
		return 0;
	}
	
	return pila->data[--pila->cima];
}

			
int main(){
	
int data;
int cantidad;
struct Pila pila;

pila.cima = 0;

do {
	printf("Numero: ");
	cantidad = scanf("%i", &data);
	
	if(cantidad){	
		push(&pila, data);
		imprimir(pila);
	}else
		printf(" %i\n", pop(&pila));
}while(1);



    return EXIT_SUCCESS;
}

