#include <stdio.h>
#include <stdlib.h>

#define FILAS 0x05
#define COLUMNAS 0x05
 
int main (){
		 
	int i,j;
		 
	for (i = 0; i <FILAS; i++){
		for (j = 0; j < COLUMNAS; j++)
			printf("*");
		 		
		 	printf("\n");	
}
		 
   return EXIT_SUCCESS;
}
		 


