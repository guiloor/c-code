#include <stdio.h>
#include <stdlib.h>

int main () {

	int figura;
	int resultado = 0;
	int base1 = 0, base2 = 0, altura = 0, radio = 0;


	printf("Este es un programa para realizar el �rea de alguna figuras geom�tricas.\nPara poder realizar el �rea de un cuadrado, por favor, escriba: 1\nPara poder realizar el �rea de un rect�ngulo, por favor, escriba: 2\nPara poder realizar el �rea de un tri�ngulo, por favor, escriba: 3\nPara poder realizar el �rea de un c�rculo, por favor, escriba: 4\nPara poder realizar el �ra de un trapecio escriba: 5\nAhora, introduzca el n�mero correspondiente a la operaci�n que quiera realizar:\n");
	scanf(" %i", &figura);

	if(figura == 1){
		printf("�rea de un cuadrado.\nIntroduzca la longitud de uno de sus lados:\n");
		scanf(" %i", &base1);
		resultado = base1 * base1;
	} else if (figura == 2){
		printf("�rea de un rect�ngulo.\nIntroduzca el valor de su base:\n");
		scanf(" %i", &base1);
		printf("Introduzca el valor de su altura:\n");
		scanf(" %i", &altura);

		resultado = base1 * altura;
	} else if (figura == 3){
		printf("�rea de un tri�ngulo.\nIntroduzca el valor de su base:\n");
		scanf(" %i", &base1); 
		printf("Introduzca el valor de su altura:\n");
		scanf(" %i", &altura); 

		resultado = base1 * altura / 2;
	} else if (figura == 4){
		printf("�rea de un c�rculo.\nIntroduzca el valor de su radio:\n");
		scanf(" %i", &radio);
		
		resultado = 3.141592 * radio * radio;
	} else if (figura == 5){
		printf("�rea de un trapecio.\nIntroduzca el valor de su base mayor:\n");
		scanf(" %i", &base1);
		printf("Introduzca ahora el valor de su otra base:\n");
		scanf(" %i", &base2);
		printf("Introduzca ahora el valor de su altura vertical:\n");
		scanf(" %i", &altura);

		resultado = (base1 + base2) * altura / 2;
	} else {
		printf("N�mero incorrecto. Figura no detectada. \n");
	}

	printf("El �rea de su figura es de: %i.\n", resultado);

	return EXIT_SUCCESS;
}
