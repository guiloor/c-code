#include <stdio.h>
#include <stdlib.h>

int main () {

	int numero;
	printf("Introduce un n�mero:\n");
	scanf("%i", &numero);

	for (int i = 2; i < numero; i++){
		if(numero % i == 0){
			printf("Tu n�mero tiene m�s divisores aparte de 1 y s� mismo\n");
			return EXIT_SUCCESS;
		}
	}

	printf("Tu n�mero no tiene m�s divisores que 1 y s� mismo\n");
	return EXIT_SUCCESS;
}
