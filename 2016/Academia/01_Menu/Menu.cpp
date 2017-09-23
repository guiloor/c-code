#include <stdio.h>
#include <stdlib.h>

int main(){

	int op1, op2, resultado,  opcion, a, var1, var2, varCambio, i, lista[5];

    do
    {	printf("\n Bienvenido al menu");
        printf( "\n 1. Suma" );
        printf( "\n 2. Resta" );
        printf( "\n 3. Intercambia numeros" );
        printf( "\n 4. Muestra todos los numeros del 1 al 100");
        printf( "\n 5. Muestra toodos los numeros primos del 1 la 100" );
        printf( "\n 6. Crear lista");
        printf( "\n 7. Salir." );
        printf( "\n\n ¿Que opcion quieres? (1-7): ");

        scanf( "%d", &opcion );

       

        switch ( opcion )
        {
			case 1: 
				    printf("Introduzca un numero: ");
				    scanf( "%d", &op1 );
				    printf("Introduzca un numero: ");
				    scanf( "%d", &op2 );

				    resultado = op1 + op2;

				    printf( "La suma de %d y %d es: %d", op1, op2, resultado);
				    break;

			case 2: 
				    printf("Introduzca un numero: ");
				    scanf( "%d", &op1 );
				    printf("Introduzca un numero: ");
				    scanf( "%d", &op2 );
                    
                   			 resultado = op1 - op2;
                    
                   		    printf( "La resta de %d y %d es: %d \n ", op1, op2, resultado);
                    		    break;

	

			case 3:
					printf("Introduce un numero en la primera caja:\n");
					scanf(" %i", &var1);
					printf("Introduce un numero en la segunda caja:\n");
					scanf(" %i", &var2);

					printf("Ahora intercambiaremos los numeros de caja\n...\n...\n");
					varCambio = var1;
					var1 = var2;
					var2 = varCambio;

					printf("Ahora la primera caja contiene un %i, y la segunda caja un %i\n", var1, var2);					
					break;
 				
			case 4:
					for (int i=0; i<=100; i++)
					printf("\n %d", i);					
					break;
			case 5: 
					for (int j=2;j<=100;j++){   
 			 		int a=0;
 					for(int i=1;i<=100;i++)  
					 {
				    	if(j%i==0) 
    					a++;
					 }
 					if (a==2){ 
 					printf("%d\n", j);
					}
					}
					break;
				
			case 6:
					for(int i=0; i<5; i++){
					lista[i]=i+1;
					printf("Numero: %i\n", lista[i]);
					}
       }

    } while ( opcion != 7 );

    return 0;
}
	
