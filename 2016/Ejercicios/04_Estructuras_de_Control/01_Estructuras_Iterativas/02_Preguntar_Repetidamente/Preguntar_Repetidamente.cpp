#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero = 0;

	while(numero < 1 || numero > 10){
		printf("Introduzca un n�mero comprendido entre 1 y 10:\n");
		scanf(" %i", &numero);
	}
	
	printf("Su n�mero es: %i.\n", numero);
	
	return EXIT_SUCCESS;
}
