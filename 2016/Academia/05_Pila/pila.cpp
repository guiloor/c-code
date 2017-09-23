//El usuario pide numeros hasta el un max de 10, el usuario preguntara cuantos lleva metidos, todas las veces que quiera.

#include <stdio.h>
#include <stdlib.h>


#define MAX 10

struct TPila
{
    int dato[MAX];
    int cima;
};

bool push(struct TPila *p, int d)
{
    if (p->cima >= MAX)
        return false;
    p->dato[p->cima++] = d;
    return true;
}

void imprimir(struct TPila pila)
{
    for (int i=0; i<pila.cima; i++)
        printf(" %i", pila.dato[i]);
    printf("\n");
}

int pop(struct TPila *p)
{
    if (p->cima <= 0)
        return 0;
    return p->dato[--p->cima];
}

int main(int argc, char *argv[])
{

    int dato;
    int cantidad;
    struct TPila pila;
    pila.cima = 0;

    do {
        printf("Introduce un numero: ");
	
        cantidad = scanf("%i", &dato);


        if (cantidad){
            push(&pila, dato);
            imprimir(pila);
			
        } else
            printf(" %i\n", pop(&pila));

    } while(1);

    return EXIT_SUCCESS;
}