#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

		int numero,
        suma = 0;
        
  	printf("Escribe un número: /n");
    scanf(" %i", &numero);

    for(int i = 1; i < numero; i++){
	
       if ( numero%i == 0 )
            suma += i; }


    if(numero == suma){
	printf("Es perfecto \n"); } 
	else{
	printf("No es perfecto.\n"); }
    

    return EXIT_SUCCESS;
}
