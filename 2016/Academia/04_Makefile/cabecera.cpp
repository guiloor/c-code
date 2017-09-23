#include "menu.h"
#include <stdio.h>
using namespace std;

int suma (int op1, int op2)
{

	return op1 + op2;
}

int resta (int op1, int op2)
{
	return op1 - op2;
}

void Intercambio_numeros (int var1, int var2, int varCambio)
{
	varCambio = var1;
	var1 = var2;
	var2 = varCambio;
	printf("%d", varCambio);

}

void Muestra_Numereros (int i)
{
	for (int i=0; i<=100; i++)
	printf("\n %d", i);	
}

void Muestra_numeros_pimos (int j)
{

			for (int j=2;j<=100;j++){   
 			int a=0;
 			for(int i=1;i<=100;i++)  
		 {
		    if(j%i==0) 
    		a++;
			}
 			if (a==2){ 
 			printf("%d\n", j);
			}
			}

}

void Muestra_Lista (int lista[5])
{
				for(int i=0; i<5; i++){
				lista[i]=i+1;
				printf("Numero: %i\n", lista[i]);
				}
}


