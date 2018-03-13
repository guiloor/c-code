#include <stdlib.h>
#include <stdio.h>

int main (){

    int opcion;

    do{

    printf("Dime un numero del 1 al 5: ");
    scanf(" %i", &opcion);

    }while( opcion < 1 || opcion > 5 );
      

	return EXIT_SUCCESS;

}
