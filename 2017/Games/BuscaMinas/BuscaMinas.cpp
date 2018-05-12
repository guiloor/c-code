#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

#define RENGLON 15
#define COLUMNA 15


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

void colocar_bombas(int minas[][15], int bum)
{
     int i, renglon, columna;

     for(i = 1; i <= bum; i++)
     {
           renglon = 0 + rand() % 14;
           columna = 0 + rand() % 14;
<<<<<<< HEAD

           minas[renglon][columna] = 3;
=======

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

>>>>>>> 4a845e436d6731b6f6ac8fac13937fd96093b558
     }
}


int main()
{
  int buscaminas[RENGLON][COLUMNA] = {0}, i, j;
  int nivel, bombas;                                    //bombas aleatorias
  int gameStatus, gameCounter = 0, victoria;            //control del juego                                 //estadisticas del juego
  float rating;
  char salida;



  do{
       system("cls");
       system("toilet -Fborder --gay -fpagga BUSCAMINAS");
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

<<<<<<< HEAD
           case 5: bombas = 60;
=======
           case 5: bombas = 30;
>>>>>>> 4a845e436d6731b6f6ac8fac13937fd96093b558
                   break;

           default: printf("Seleccion invalida, intente de nuevo.\n\n");
                    break;

       }

       srand(time(NULL));  //generacion de numeros aleatorios

       colocar_bombas(buscaminas, bombas);

<<<<<<< HEAD
=======
       tiradas = 0; //este contador lleva cuenta del numero de tiradas en el juego
>>>>>>> 4a845e436d6731b6f6ac8fac13937fd96093b558

       do{
           system("cls");
           printf("\n-Buscaminas\n\n");

           imprimir_tablero(buscaminas, gameStatus);

           printf("\n"); //nueva linea

           printf("*Ingrese la tirada[i, j]: ");
           scanf("%d%d",&i, &j);

           if(buscaminas[i][j] == 3){
               gameStatus = -1;
<<<<<<< HEAD
            
=======
               tiradas++;
>>>>>>> 4a845e436d6731b6f6ac8fac13937fd96093b558

               system("cls");
               printf("\nBuscaminas\n\n");
               imprimir_tablero(buscaminas, gameStatus);

<<<<<<< HEAD
               printf("\t\t\t\t\t  ???Perdiste, el juego ha terminado!!");
=======
               printf("\t\t\t\t\t  ¡¡¡Perdiste, el juego ha terminado!!");
>>>>>>> 4a845e436d6731b6f6ac8fac13937fd96093b558

               getchar();
           }
           else
           {
               buscaminas[i][j] = 1;
           
           }
           if(gameCounter == (225 - bombas) )
           {
               victoria = 1;
               system("cls");
               printf("\nBuscaminas\n\n");
               imprimir_tablero(buscaminas, gameStatus);
<<<<<<< HEAD
         
               printf("\t\t\t\t\t  ???Has ganado, felicidades!!");
=======
         //      gotoxy(80, 4);
               printf("\t\t\t\t\t  ¡¡¡Has ganado, felicidades!!");
>>>>>>> 4a845e436d6731b6f6ac8fac13937fd96093b558

               getchar();
           }


       }while(gameStatus != -1 || victoria == 1);

       system("cls");

<<<<<<< HEAD

       printf("\n-Buscaminas \n\n");
   


       if(gameStatus == -1)
       


       printf("\n\n");

       printf("?Desea jugar de nuevo(S/N)?: ");
=======
       rating = ((double)gameCounter * 100) / 225;

       printf("\n-Buscaminas \n\n");
       printf("Tu rating  de juego es %lf %lf\n", rating);
       printf("*No. de tiradas %d.\n\n", tiradas);

       frases = 1 + rand() % 4;

       if(gameStatus == -1)
         frases_2(frases);
       else if(victoria == 1)
         frases_1(frases);

       printf("\n\n");

       printf("¿Desea jugar de nuevo(S/N)?: ");
>>>>>>> 4a845e436d6731b6f6ac8fac13937fd96093b558

       salida = getchar();
       salida = tolower(salida);

       for(i = 0; i <= RENGLON - 1; i++)
         for(j = 0; j <= COLUMNA - 1; j++)
           buscaminas[i][j] = 0;

<<<<<<< HEAD
       
=======
       gameCounter = 0;
>>>>>>> 4a845e436d6731b6f6ac8fac13937fd96093b558


  }while(salida == 's');

  system("cls");


<<<<<<< HEAD
=======
  getchar();
>>>>>>> 4a845e436d6731b6f6ac8fac13937fd96093b558

  return EXIT_SUCCESS;
}










