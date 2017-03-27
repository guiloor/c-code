#include <stdlib.h>
#include <stdio.h>
 
typedef struct pila_de_platos {
   int valor;
   struct pila_de_platos *siguiente;
} tipoNodo;
 
typedef tipoNodo *pNodo;
typedef tipoNodo *Pila;
 

void Push(Pila *l, int v);
int Pop(Pila *l);
 
int main() {
   Pila pila = NULL;
 
   Push(&pila, 1);
printf("%d, ", Pop(&pila));
   Push(&pila,  2);
   printf("%d, ", Pop(&pila));
   Push(&pila,  3);
   printf("%d, ", Pop(&pila));
   Push(&pila, 4);
   printf("%d, ", Pop(&pila));
   Push(&pila,  5);
   printf("%d\n", Pop(&pila));

   getchar();
   return 0;
}

void Push(Pila *pila, int v) {
   pNodo nuevo;
 
   nuevo = (pNodo)malloc(sizeof(tipoNodo));
   nuevo->valor = v;
   
   nuevo->siguiente = *pila;
  
   *pila = nuevo;
}

int Pop(Pila *pila) {
   pNodo nodo; 
   int v;      
   

   nodo = *pila;
   if(!nodo) return 0; 
 
   *pila = nodo->siguiente;
 
   v = nodo->valor; 

   free(nodo);
   return v;
}
