#include <stdio.h>
#include <stdlib.h>

int main

char nombre [10]

FILE *fichero;
fpos_t posicion=0, comienzo;

	rewind( fichero );
 	printf( "\"Rebobinando\" el fichero -> Vuelta al comienzo\n" );
    	fgetpos( fichero, &posicion );
      	printf( "Posicion del fichero: %d\n", posicion );

return 0;


