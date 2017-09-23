#include <stdio.h>
#include <stdlib.h>

int main (void )
{

	int *numPtr, i;
	size_t tamanyo=0;

		printf(" Introduzca el tamaño de la lista: ");
		scanf(" %d", &tamanyo );

		puts(" Adjudicamos espacio a la lista.");
		numPtr = (int *)malloc( tamanyo*sizeof(int) );

		for( i=0; i<tamanyo-1; i++ )
		printf(" %d, ", numPtr[i] = rand() % 100 + 1 );
		printf(" %d\n ", numPtr[i] = rand() % 100 + 1 );

		numPtr = (int *)realloc( numPtr, tamanyo/=2 );
		printf(" Recortamos la lista a la mitad: %d\n", tamanyo );
		for( i=0; i<tamanyo-1; i++ )
			printf(" %d, ", numPtr[i] );
			printf(" %d, ", numPtr[i] );

			puts( "Liberamos el espacio. " );
			free( numPtr );

			return 0;
}
			