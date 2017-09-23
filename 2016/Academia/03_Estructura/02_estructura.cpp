#include <stdio.h>
#include <stdlib.h>


typedef struct
{
	int dia, mes, anyo;
} tfecha;

typedef struct 
{
	
	char nombre[30];
	char dirreccion[30];
	long telefono;
	tfecha fecha_nacimiento;
}tficha;

	 int main (){
			 
	tficha persona, otra_persona;
	
	printf("Nombre:      ");
	gets(persona.nombre);
	printf("Direccion:   ");
	gets(persona.dirreccion);
	printf("telefono:    ");
	scanf("%ld", &persona.telefono);
	printf("Fecha de nacimiento:\n");
	printf("Dia:  ");
	scanf("%d", &persona.fecha_nacimiento.dia);
	printf("mes:  ");
	scanf("%d", &persona.fecha_nacimiento.mes);
	printf("Anyo: ");
	scanf("%d", &persona.fecha_nacimiento.anyo);
	
	otra_persona = persona;
	
	printf("\n\n");
	printf("Nombre: %s\n", otra_persona.nombre);
	printf("Direccion: %s\n", otra_persona.dirreccion);
	printf("telefono: %ld\n", otra_persona.telefono);
	printf("Fecha de nacimiento: \n");
	printf(" Dia:      %d\n", otra_persona.fecha_nacimiento.dia);
	printf(" Mes:      %d\n", otra_persona.fecha_nacimiento.mes);
	printf(" Anyo:      %d\n", otra_persona.fecha_nacimiento.anyo);		 

 return 0;
}
		 


