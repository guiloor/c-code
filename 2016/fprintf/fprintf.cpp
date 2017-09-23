#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *tubo;
    // crear un stream
    // tubos: modos de lectura puede ser para leer (w), escribir(r), adjuntar (a)
    // Ejemplos: "wb" escribir y leer numeros,
   tubo =  fopen("iberos.txt", "w+")
   // tubo = fopen, asi se conecta un tubo
   // fclose(tubo), asi te aseguras de que no se acaban los tubos

printf("hola\n");

fprintf(stdout, "hola\n"); 
fprintf/tubo, ("hola\n");


   fclose(tubo);
    return EXIT_SUCCESS;
}
