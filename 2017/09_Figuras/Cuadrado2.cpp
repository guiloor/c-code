#include <stdio.h>
#include <stdlib.h>

#define COLUMNAS 0x5
#define FILAS 0x05

int main (){

	int a, b;

    for(b=1; b <= FILAS; b++){
        for(a=1; a<= COLUMNAS; a++){
            if(b==1 || b== FILAS){
                printf("*");
            }else if(a==1 || a== COLUMNAS){
                printf("*");
            }else{

                printf(" ");
			}
		}
        printf("\n");
    }

  return EXIT_SUCCESS;
}
 




		 


