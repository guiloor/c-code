#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	 int dd;
	 int mm;
	 int aa;
	
}Fecha;
void escribir(Fecha *fecha){
	printf("Dia %u del mes %u del anyo %u\n", fecha->dd, fecha->mm, fecha->aa); 
}


int main(){
	
	 Fecha *hoy;
	hoy = (Fecha *)malloc(sizeof(Fecha));
	if (hoy == NULL) return -1;
	
	printf("Introducir fecha (dd-mm-aa): ");
	scanf("%i, %i, %i", &hoy->dd, &hoy->mm, &hoy->aa);
	escribir (hoy);
	
	free(hoy);
    return EXIT_SUCCESS;
}


