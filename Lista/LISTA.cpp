#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]){
	
	
	const char *lista[] = {"Juan","Pedro","German","Pepe", NULL};

 
	for (int n=0; lista[n]!=NULL; n++);
 		 printf("%i.- %s\n", n+1, lista[n]);

 		 	lista = (char *) realloc(lista, ++lista * sizeof(char));

 
 
  	 return EXIT_SUCCESS;
 
 }
