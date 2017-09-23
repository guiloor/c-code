#include <stdio.h>
#include <stdlib.h>


#define ALUMNOS 3

struct alumno{

	char nombre[20];
	char apellido[20];
	int  clase;
	}alum[ALUMNOS];

int recogida_datos(struct alumno *alum);
int muestra_datos(struct alumno *alum);


int main()
	{	
		recogida_datos(alum);
		muestra_datos(alum);
	}
	
int recogida_datos (struct alumno *alum)
{
	int i;
	for(i=0;i<ALUMNOS;i++)
	{
		printf("Alumnos %d: \n", i);
		fflush(stdin);
		printf("Escribe el nombre: ");
		gets((alum+i)->nombre);
		fflush(stdin);
		printf("Escribe el apellido: ");
		gets((alum+i)->apellido);
		printf("Introduce la clase: ");
		scanf("%d", &(alum+i)->clase);
		
		}		
	}
	
	int muestra_datos(struct alumno *alum)
	{
		int i;
		for(i=0;i<ALUMNOS;i++)
		{
			printf("\nAlumno %d:\n",i);
			printf("Nombre: %s || Apellido: %s || De la Clase: %d\n", (alum+i)->nombre, (alum+i)->apellido, (alum+i)->clase);
		}
		
	}
	

