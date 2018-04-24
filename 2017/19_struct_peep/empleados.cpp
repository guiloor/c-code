#include <stdio.h>
#include <stdlib.h>

#define N 0x10

typedef struct{
	char nombre[N];
	char puesto[N];
	double salario;
} Empleado;


 void rellena(Empleado *nuevo){
 	printf("Nombre: ");
 	scanf("%s", nuevo->nombre);
 	printf("Puesto: ");
 	scanf("%s", nuevo->puesto);
 	printf("Salario: ");
 	scanf("%lf", &nuevo->salario);
 	
 }

void imprime(Empleado empleado){
	
	printf("\n----------\n"
		   "%s / %s [%.21lf]\n",
		   empleado.nombre,
		   empleado.puesto,
		   empleado.salario);
}

int main(){
	Empleado *primer = NULL;
	
	primer = (Empleado *)malloc(sizeof(Empleado));
	rellena(primer);
	/* -------realloc para realojar la memoria para otro empleado-----

	primer = (Empleado *) realloc(primer, 2 * sizeof(Empleado));
	rellena(primer+1)
	imprime(*(primer+1));
																	*/
	
	imprime(*primer);
	
	free(primer);	
    return EXIT_SUCCESS;
}

