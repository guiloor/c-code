#include <stdio.h>
#include <stdlib.h>

int main () {

	printf("C�digo Ascii:\n");
	for(int i = 0; i < 256; i++)
		printf("%i.- %c\n", i, i);	

	return EXIT_SUCCESS;
}
