#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero;
	int resto;

	printf("Introduce tu número de DNI sin los ceros iniciales:\n ");
	scanf(" %i", &numero);
	resto = numero%23;
	printf("Tu letra es ");

	switch(resto){
		case 0 : printf ("T\n");
			 break;

		case 1 : printf ("R\n");
			 break;

		case 2 : printf ("W\n");
			 break;

		case 3 : printf ("A\n");
			 break;

		case 4 : printf ("G\n");
			 break;

		case 5 : printf ("M\n");
			 break;

		case 6 : printf ("Y\n");
			 break;

		case 7 : printf ("F\n");
			 break;

		case 8 : printf ("E\n");
			 break;

		case 9 : printf ("D\n");
			 break;

		case 10 : printf ("X\n");
			  break;

		case 11 : printf ("B\n");
			  break;

		case 12 : printf ("N\n");
			  break;

		case 13 : printf ("J\n");
			  break;

		case 14 : printf ("Z\n");
			  break;

		case 15 : printf ("S\n");
			  break;

		case 16 : printf ("Q\n");
			  break;

		case 17 : printf ("V\n");
			  break;

		case 18 : printf ("H\n");
			  break;

		case 19 : printf ("L\n");
			  break;

		case 20 : printf ("C\n");
			  break;

		case 21 : printf ("K\n");
			  break;

		case 22 : printf ("E\n");
			  break;


	}
	return EXIT_SUCCESS;
}
