#include <stdio.h>
#include <stdlib.h>

int main () {
	int nIntroducido = 0, nMayor = 0;

	printf("Introduce 10 n�meros:\n");
	for(int i = 0; i < 10; i++){
		printf("N�mero %i:", i+1);		
		scanf(" %i", &nIntroducido);

		if(nIntroducido > nMayor)
			nMayor = nIntroducido;
	} 
	
	printf("El n�mero mayor introducido es el %i.\n", nMayor);

	return EXIT_SUCCESS;
}
