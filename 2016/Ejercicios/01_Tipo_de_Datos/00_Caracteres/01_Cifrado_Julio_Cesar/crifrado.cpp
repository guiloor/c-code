#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *cifrado(char *pepe,int n){ 
     
    int i,j; 
     
    for(i=0;i<strlen(pepe);i++)
		printf(" %c", pepe[i]+3);	
	
	printf(" \n");
	return EXIT_SUCCESS;
}
