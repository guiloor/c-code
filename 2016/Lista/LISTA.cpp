#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]){

    double *nota = NULL; 
    double buffer;
    int n_alumnos = 0;

printf("Numeros negativos para terminar.\n");
	
   do{
        printf("Nota: ");
        scanf(" %lf", &buffer);
        if (buffer >= 0){
            nota = (double *) realloc(nota, ++n_alumnos * sizeof(double));
            nota[n_alumnos-1] = buffer;
}

  }while(buffer >= 0);
 
  	 return EXIT_SUCCESS;
 
 }
