#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	int numB10, dividendo, contador = 0, numB2 = 0;
	int resultado = 0;

	int nIntroducido;
//Primera parte: Pasar el n�mero introducido a binario.
	printf("Introduce un n�mero:\n");
	scanf(" %i", &numB10);

	dividendo = numB10;
	while(dividendo >= 2){
		numB2 += (dividendo % 2) * pow(10, contador);
		contador++;
		dividendo /= 2;  
	}
	
	numB2 += dividendo * pow(10, contador);
	printf("Su n�mero es binario es: %i\n Contando de derecha a izquierda (siendo el n�mero m�s a la derecha el 0), �qu� bit quiere apagar?\n", numB2);

	scanf(" %i", &nIntroducido);
	numB2 -= pow(10,nIntroducido);

	printf("Su nuevo n�mero en binario es: %i\n", numB2);	

//A partir de aqu� se pasa de decimal a binario.
	contador = 0;

	while(numB2 > 0){
		if(numB2 % 2 == 0){
			contador++;
			numB2 /= 10;
		} else{
			resultado += pow (2, contador);
			numB2 -= 1;
			numB2 /= 10;
			contador++;
		}	
	}

	printf(" Resultado en decimal: %i. \n", resultado); 

	return EXIT_SUCCESS;
}
