#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *presentacion;
    char matriz[4050];

    if((presentacion=fopen("presentacion.txt", "r")) != NULL){

        while (!feof(presentacion)){
            fgets(matriz,4050,presentacion);
            if(feof(presentacion))
                printf(" ");
            else
                fputs(matriz, stdout);
        }
        fclose(presentacion);
    }
    else
        printf("Error al cargar el archivo.\n");


return EXIT_SUCCESS;
}
