#include <stdio.h>
#include <stdlib.h>

int main(){
{
	
	system ("color 0A");
	
    int rojo, amarillo, azul;
    
    
    printf(" Marca con un 1 si tienes el color y con un 0 si no lo tienes \n \n" );
    
    printf("Tienes el color rojo?: ");
    scanf(" %i", &rojo);

    printf("Tienes el color amarillo?: ");
    scanf(" %i", &amarillo);

    printf("Tienes el color azul? : ");
    scanf(" %i", &azul);

   
    if (rojo)
        if (amarillo)
            if (azul)
            	

                printf("Estas viendo el blanco");
       
            else
                printf("Estas viendo el naranja");
        else
            if (azul)
                printf("Estas viendo el morado");
            else
                printf("Estas viendo el rojo");

    else
        if (amarillo)
            if (azul)
                printf("Estas viendo el verde");
            else
                printf("Estas viendo el amarillo");
        else
            if (azul)
                printf("Estas viendo el azul");
            else
                printf("Estas viendo el negro");


    return EXIT_SUCCESS;
}
}
