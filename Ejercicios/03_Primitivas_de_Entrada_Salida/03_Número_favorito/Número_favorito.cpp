#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numFavorito;

	printf("�Cu�l es tu n�mero favorito?\n");
	scanf(" %i", &numFavorito);
	printf("Tu n�mero favorito es el %i\n.", numFavorito);
	
	return EXIT_SUCCESS;
}
