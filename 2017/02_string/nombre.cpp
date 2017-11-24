#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombre [40];
    char apellido [20];

    printf("Dime tu nombre: ");
    scanf(" %s %s", nombre, apellido);
    printf("Hola %s %s\n", nombre, apellido);

    return EXIT_SUCCESS;
}


