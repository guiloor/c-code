 #include <stdio.h>
 #include <stdlib.h>


 //define rojo 1
 //define azul 2
 //define amarillo 3
 //define morado 4

 int main() {

	int rojo=1, azul=2, amarillo=3, morado=4, opcion=0;


	printf("Introduce un numero para saber cual es el color: ");
	scanf("%i", &opcion);

	if(opcion == 1) {
		printf ("Es el color rojo. %i\n", opcion);
	}
	else if(opcion == 2){
		printf("Es el color azul. %i\n", opcion);
	}
	else if(opcion == 3){
		printf("Es el color amarillo. %i\n", opcion);
	}

	else if(opcion == 4){
		printf("Es el color morado. %i\n", opcion);

	}

	else if (opcion > 4){
		printf("Es el color negro. %i\n", opcion);
	}
	return EXIT_SUCCESS;

 }
