#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x5

int main(){

    char **l;
    char buffer[N];
    int len;

	for (int i=0; i<N; i++){
	 	 
    printf("Nombre: ");
    scanf(" %[^\n]", buffer, i);
    len = strlen(buffer);
    
    l = (char **) malloc(sizeof(char *));
	
    *l = (char *) malloc (len + 1);
    strncpy(*l, buffer, N);
}

    for (int i=0; i<N; i++)

    printf(" Hola, %s\n", *l);
    free(*l);
    free(l);
   

    return EXIT_SUCCESS;
}

