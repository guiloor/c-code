#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int numero;
	
	printf(" Numero: \n");
	scanf(" %i", &numero);
	
	if(numero % 2 == 0){
		printf("El numero %i, es par. \n", numero);
		printf("Y lo pares me gustan");
	}else
		printf("Impar de mierda!");	 
	 
   return EXIT_SUCCESS;
}
		 


