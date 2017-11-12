#include <stdio.h>
#include <stdlib.h>


int main (){
	int entero= 21;
	float realillo= 33.4;
	double real = 44.1;
	unsigned char byte = 23;
	
	long int entero_largo = 32;
	unsigned positivo = 6;
	
	printf("%i \t(%lu bytes)\n", entero, sizeof(int));
	printf("%li \t(%lu bytes)\n", entero_largo, sizeof(int));
	printf("%u \t(%lu bytes)\n", positivo, sizeof(int));		 
		 
	printf("%i \t(%lu bytes)\n", byte, sizeof(char));
	
	printf("%f \t(%lu bytes)\n", realillo, sizeof(float));
	printf("%3.71f \t(%lu bytes)\n", real, sizeof(double));
	
	return EXIT_SUCCESS;
}
		 


