#include <stdio.h>
#include <stdlib.h>



/* En vez de utilizar un for, lo escribi as�, pense que lo querr�as como al ejemplo que hicimos en clase con el dni*/

int main(int argc, char *argv[]){
	
	
	float numeros[10];
 
    
    printf("Escriba los n�meros.\n");
    printf("Primer n�mero: ");
    scanf("%f", &numeros[1]);
    printf("Segundo n�mero: ");
    scanf("%f", &numeros[2]);
    printf("Tercer n�mero: ");
    scanf("%f", &numeros[3]);
    printf("Cuarto n�mero: ");
    scanf("%f", &numeros[5]);
    printf("Cuarto n�mero: ");
    scanf("%f", &numeros[6]);
    printf("Cuarto n�mero: ");
    scanf("%f", &numeros[7]);
    printf("Cuarto n�mero: ");
    scanf("%f", &numeros[8]);
    printf("Cuarto n�mero: ");
    scanf("%f", &numeros[9]);
    printf("Cuarto n�mero: ");
    scanf("%f", &numeros[10]);
 
    
    printf("Media: %f\n", 
        (numeros[1]+numeros[2]+numeros[3]+numeros[4]+numeros[5]+numeros[6]+numeros[7]+numeros[8]+numeros[9]+numeros[10]) / 10.0);
 
    printf("Los numeros introducidos son: %f  %f  %f  %f  %f  %f  %f  %f  %f  %f",
        numeros[1]+numeros[2]+numeros[3]+numeros[4]+numeros[5]+numeros[6]+numeros[7]+numeros[8]+numeros[9]+numeros[10]);

	return EXIT_SUCCESS;
}
