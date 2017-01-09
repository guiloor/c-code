#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char nombre[100];

	printf( "¿Como te llamas?: " );
	scanf( "%s", &nombre );
	printf( "\nTu nombre es: %s\n", nombre );
	
	
	return 0;
}
