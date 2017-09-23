#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char letraDNI(int dni)
{
  char letra[] = "TRWAGMYFPDXBNJZSQVHLCKE";

  return letra[dni%23];
}

short verificaDNI(char *dni)
{
  if (strlen(dni)!=9)
      return 0;
  else
    return (letraDNI(atoi(dni))==dni[8]);
}

int main(int argc, char *argv[])
{
  char dni[20];
  
  printf ("Introduce tu DNI con letra (sin espacios): ");
  scanf("%s", dni);

  if (verificaDNI(dni))
    printf ("El DNI es correcto\n");
  else
    printf ("El DNI no es correcto\n");
    
  return EXIT_SUCCESS;
}
