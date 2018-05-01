#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void imprimir_tablero(int tablero[][15], int perder);
void colocar_bombas(int minas[][15], int bum);
void frases_1(int buscar);
void frases_2(int numero);

#define RENGLON 15
#define COLUMNA 15

int main()
{
  int buscaminas[RENGLON][COLUMNA] = {0}, i, j;
  int nivel, bombas;                                    //bombas aleatorias
  int gameStatus, gameCounter = 0, victoria;            //control del juego
  int tiradas, frases;                                  //estadisticas del juego
  float rating;
  char salida;

  do{
       system("cls");
       printf("\n\tBuscaminas 1.0-\n\n");
       printf("10 bombas en el primer nivel + 5 por cada uno.\n\n");
      
       printf("~Ingresa el nivel del juego:\n%d.-Nivel 1\n", 1);
       printf("%d.-Nivel 2\n%d.-Nivel 3\n%d.-Nivel 4\n%d.-Nivel 5\n", 2, 3, 4, 5);
      
       scanf("%d", &nivel);
      
       switch(nivel){
      
           case 1: bombas = 10;
                   break;
                  
           case 2: bombas = 15;
                   break;
                  
           case 3: bombas = 20;
                   break;
                  
           case 4: bombas = 25;
                   break;
                  
           case 5: bombas = 30;
                   break;
                  
           default: printf("Seleccion invalida, intente de nuevo.\n\n");
                    break;                 
                    
       }
      
       srand(time(NULL));  //generacion de numeros aleatorios
      
       colocar_bombas(buscaminas, bombas);
      
       tiradas = 0; //este contador lleva cuenta del numero de tiradas en el juego
      
       do{
           system("cls");
           printf("\n-Buscaminas 1.0-\n\n");
          
           imprimir_tablero(buscaminas, gameStatus);
          
           printf("\n"); //nueva linea
          
           printf("*Ingrese la tirada[i, j]: ");
           scanf("%d%d",&i, &j);
          
           if(buscaminas[i][j] == 3){                              
               gameStatus = -1;
               tiradas++;
              
               system("cls");
               printf("\nBuscaminas1.0-\n\n");
               imprimir_tablero(buscaminas, gameStatus);
    
               printf("\t\t\t\t\t  ¡¡¡Perdiste, el juego ha terminado!!");
              
               getch();              
           }
           else
           {
               buscaminas[i][j] = 1;
               gameCounter++;
               tiradas++;
           }
           if(gameCounter == (225 - bombas) )
           {
               victoria = 1;
               system("cls");
               printf("\nBuscaminas1.0-\n\n");
               imprimir_tablero(buscaminas, gameStatus);
         //      gotoxy(80, 4);
               printf("\t\t\t\t\t  ¡¡¡Has ganado, felicidades!!");
      
               getch();
           }       
          
              
       }while(gameStatus != -1 || victoria == 1);
      
       system("cls");
      
       rating = ((float)gameCounter * 100) / 225;
      
       printf("\n-Buscaminas 1.0- Estadisticas del juego.\n\n");
       printf("Tu rating  de juego es %.2f %.2f%\n", rating);
       printf("*No. de tiradas %d.\n\n", tiradas);
      
       frases = 1 + rand() % 4;
      
       if(gameStatus == -1)
         frases_2(frases);
       else if(victoria == 1)
         frases_1(frases);
      
       printf("\n\n");
      
       printf("¿Desea jugar de nuevo(S/N)?: ");
      
       salida = getch();
       salida = tolower(salida);
      
       for(i = 0; i <= RENGLON - 1; i++)
         for(j = 0; j <= COLUMNA - 1; j++)
           buscaminas[i][j] = 0;
          
       gameCounter = 0;
      
      
  }while(salida == 's');          
   
  system("cls");

 
  getch();
  //system("PAUSE");   
  return 0;
}

/*La sig. funcion coloca las bombas en el tablero por medio de una
funcion aleatoria de 0-14 El valor de en el arreglo 3 es su valor logico en el programa
de bombas
*/
void colocar_bombas(int minas[][15], int bum)
{
     int i, renglon, columna;
    
     for(i = 1; i <= bum; i++)
     {
           renglon = 0 + rand() % 14;
           columna = 0 + rand() % 14;
          
           minas[renglon][columna] = 3;
     }
}

void frases_1(int buscar)
{
     switch(buscar)
     {
         case 1: printf("¡Muy bien!\n");
                 break;
                
         case 2: printf("¡Excelente!\n");
                 break;
                
         case 3: printf("¡Buen trabajo!\n");
                 break;
                
         case 4: printf("¡Sigue asi!\n");
                 break;          
     }
}

void frases_2(int numero)
{
     switch(numero)
     {
         case 1: printf("¡Muy bien!\n");
                 break;
                
         case 2: printf("¡Excelente!\n");
                 break;
                
         case 3: printf("¡Buen trabajo!\n");
                 break;
                
         case 4: printf("¡Sigue asi!\n");
                 break;
                  
     }
}

void imprimir_tablero(int tablero[][15], int perder)
{
     int i, j;
    
     for(i = 0; i <= RENGLON -1; i++)  //encabezado
       printf("%d ", i);
      
     printf("\n");  //nueva linea
    
     for(i = 0; i <= COLUMNA - 1; i++)
       printf("--");
      
     printf("\n");
    
     for(i = 0; i <= RENGLON -1; i++)
     {
           for(j = 0; j <= COLUMNA - 1; j++){
          
             if(tablero[i][j] == 1)
               printf("%d ", tablero[i][j]);
             else if((tablero[i][j] == 3) && (perder == -1))
               printf("%c ", '*');
             else
               printf("%c ", '#');        
           }
          
           printf("| %d", i);   
           printf("\n"); 
          
     }
    
        
    
}

