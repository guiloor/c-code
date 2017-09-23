#include <stdio.h>
#include <stdlib.h>

int main (){

int numero;
do{
printf ("Ingrese el número que desea invertir: ");
scanf ("%i", &numero);
}
while (numero <= 0);

printf ("\n\n");
printf ("El número invertido es: ");

while (numero != 0)

printf ("%i", numero % 10);
numero = numero / 10;
}

printf("\n\n");

return 0;
}
