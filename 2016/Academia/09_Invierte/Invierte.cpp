#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]){
    char nombre[]="pepe";
    char *ini=nombre, *fin=nombre-1;  
    char aux;

    for(  ; ini<fin; ini++, fin-- ){
   
       aux = *ini;
       *ini = *fin;
       *fin = aux;
    }

    
    return EXIT_SUCCESS;
}
