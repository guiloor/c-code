#include <stdio.h>
#include <stdlib.h>


#define ALUMNOS 10

struct alumno{

	char *nombre;
	char *apellido;


};


int	main(){

	
	int posicion = 0;
	alumno alum[ALUMNOS];


	alum[0].nombre="Pepe";
	alum[0].apellido="El_Calvo";
	posicion =2;

		int num_alumno;
		for( num_alumno=0; num_alumno<posicion-1; num_alumno++){
		printf("\n el nombre es %s: \n. ",alum[num_alumno].nombre);
		printf("\n el apellido es %s: \n. ",alum[num_alumno].apellido);
	


		return 0;
		}
}
