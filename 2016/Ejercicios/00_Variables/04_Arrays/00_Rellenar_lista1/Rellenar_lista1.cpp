#include <stdio.h>
#include <stdlib.h>

int main () {
	int lista[10];
	
	for(int i = 0; i < 10; i++){
		lista[i]=i+1;
		printf("Comprobación: %i\n", lista[i]);
	}

	return EXIT_SUCCESS;
}
