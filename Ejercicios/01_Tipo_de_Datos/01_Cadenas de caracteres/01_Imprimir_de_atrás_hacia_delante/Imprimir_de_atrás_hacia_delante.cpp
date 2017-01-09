#include <stdio.h>
#include <stdlib.h>

 //Busca el final de una cadena de caracteres e imprímela de atrás hacia delante.//
 
int main ()
{
    char c, palabra[14];
    int i;
    printf("Teclee una palabra de menos de 15 letras:\n");
    scanf("%s", palabra);
    i = 0;
    while(palabra[i++] != '\0')
      ;
    printf("%s tiene %d letras.\n", palabra, i);
    printf("%s escrita al revés es: ", palabra);
    while (i >= 0)
        printf("%c", palabra[i--]);
        
        return EXIT_SUCCESS;
}
