#include <stdio.h>
#include <stdlib.h>

int main () {

	int numB10;

	printf("Introduce un n�mero en base decimal:\n");
	scanf(" %i", &numB10);

	printf("El n�mero %i en base decimal pasa a ser %X en hexadecimal\n", numB10, numB10);
	
	return EXIT_SUCCESS;
}
