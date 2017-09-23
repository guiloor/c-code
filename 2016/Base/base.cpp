#include <stdio.h>
#include <stdlib.h>

int main(){
     int decimal;

  printf("Decimal: ");
  scanf(" %i", &decimal);

  //   Hacer
  //   imprimir decimal %2
  //   decimal =decimal/2
  //   Mientras decimal > 0

 do {
    printf ("%i", decimal % 2);
    decimal /= 2;
 } while (decimal>0);

  //& operador que lee la direccion de memoria de..//
 // La variable decimal va a contener la informacion que ha introducido el usuario por teclado//
printf("/n");

return EXIT_SUCCESS;

}



