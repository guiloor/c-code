#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
     char letra1; 
     printf("Teclea la primera letra del abecedario.\n"); 
     scanf("%c", &letra1); 
     if (letra1 != 'a') 
          printf("No es esa, intentalo de nuevo.\n"); 
     else 
          printf("Has acertado!\n"); 
     putchar('\a'); 
     system("pause"); 
     return 0; 
} 
