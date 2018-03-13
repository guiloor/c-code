#include <stdio.h>
#include <stdlib.h>

int suma(int op1, int op2){

    return op1 + op2;
    
}

int resta(int op1, int op2){

    return op1 - op2;
    
}

int main(){
	
    int resultado;
    
    resultado = suma(2,2);
    printf(" %i\n", resultado);
    
    resultado = resta(2,2);
    printf(" %i\n", resultado);
    
    
    return EXIT_SUCCESS;
}
		 


