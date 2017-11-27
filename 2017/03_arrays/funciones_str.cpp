#include <stdio.h>
#include <stdlib.h>

#define N 0x100

int main(){

    const char *p = "The world is ";  // Constante tipo cadena
    /* Peque�a lecci�n sobre punteros
    char const *p; // Puntero a una constante. Forma coherente de decir que el char es const.
    char * const p; // Puntero constante (fijo)
    char const * const p; // Puntero fijo a una constante.
*/

// Puntero: Es una variable que contiene una direcci�n de memoria.

    char frase[N] = "a vampire.\n"; // Inicializaci�n
    char *d = frase;

    d = &frase[2];

    frase[2] == 'v';  // Notaci�n de matrices
    *d == 'v';        // Notaci�n de punteros
    *(d+2) == 'm';    // El 2 est� en aritm�tica de punteros.
    *d + 2 == 'x';    // El valor de lo que apunta d + 2. 
    printf(" d ocupa %lu bytes.\n", sizeof(d));

    return EXIT_SUCCESS;
}
		 


