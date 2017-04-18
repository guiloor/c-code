//Tres en Raya

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void loop (char c[3][3]);
void Intro_Primera (char c[3][3]);
void tablero (char c[3][3]);
void Intro_Me (char [3][3]);
void Intro_Random (char c[3][3]);
void tableto (char c[3][3]);

int main(){
	
	char c [3][3]; //tablero
	
	loop (c); //Lamma a todas la funciones y refresca la pantalla

	system ("pause");
    return 0;
}



void loop (char c [3][3]){
	int i;
	
	i = 0;
	
	Intro_Primera (c);
	
	do{
		system ("clear"); 
		tablero(c);
		
		if (i % 2 == 0){
			Intro_Me (c);
		}	
		else {
			Intro_Random (c);
		}
			
			i++;
		
	}while (i <= 9);
}

void Intro_Primera (char c[3][3]){
	int i, j;
	char aux;
	
	aux = '1';
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			c[i][j] = aux++;
			
		}
		
	}
		

}

void Intro_Me (char c[3][3]){			//Función para meter valores
	int i,j, k;
	char aux;
	do{
	
		do{
		
			printf ("Coloca una ficha: ");
			fflush (stdin);
			scanf ("%c", &aux);
		}while (aux < '1' || aux > '9');	   
		
		k = 0;
		
		switch (aux){	 //comprobar que el número este repetido
			case '1': {
					i = 0;
					j = 0;
					if (c[i][j] == 'x' || c [i][j] == '0'){
							k = 1;
					}   	printf ("Esta casilla esta ocupada! Intentalo con otro número!!\n\n");   
				break;
			}
			
			case '2': {
					i = 0;
					j = 1;
					if (c[i][j] == 'x' || c [i][j] == '0'){
							k = 1;
					}   	printf ("Esta casilla esta ocupada! Intentalo con otro número!!\n\n");   
				break;
			}
			
				case '3': {
					i = 0;
					j = 2;
					if (c[i][j] == 'x' || c [i][j] == '0'){
							k = 1;
					}   	printf ("Esta casilla esta ocupada! Intentalo con otro número!!\n\n");   
				break;
			}
			
				case '4': {
					i = 1;
					j = 0;
					if (c[i][j] == 'x' || c [i][j] == '0'){
							k = 1;
					}   	printf ("Esta casilla esta ocupada! Intentalo con otro número!!\n\n");   
				break;
			}
			
				case '5': {
					i = 1;
					j = 1;
					if (c[i][j] == 'x' || c [i][j] == '0'){
							k = 1;
					}   	printf ("Esta casilla esta ocupada! Intentalo con otro número!!\n\n");   
				break;
			}
			
				case '6': {
					i = 1;
					j = 2;
					if (c[i][j] == 'x' || c [i][j] == '0'){
							k = 1;
					}   	printf ("Esta casilla esta ocupada! Intentalo con otro número!!\n\n");   
				break;
			}
			
				case '7': {
					i = 2;
					j = 0;
					if (c[i][j] == 'x' || c [i][j] == '0'){
							k = 1;
					}   	printf ("Esta casilla esta ocupada! Intentalo con otro número!!\n\n");   
				break;
			}
			
				case '8': {
					i = 2;
					j = 1;
					if (c[i][j] == 'x' || c [i][j] == '0'){
							k = 1;
					}   	printf ("Esta casilla esta ocupada! Intentalo con otro número!!\n\n");   
				break;
			}
			
				case '9': {
					i = 2;
					j = 2;
					if (c[i][j] == 'x' || c [i][j] == '0'){
							k = 1;
					}   	printf ("Esta casilla esta ocupada! Intentalo con otro número!!\n\n");   
				break;
			}
												
	}
	



}while (k == 1);
	
	c[i][j] = 'x';
	
}

void Intro_Random (char c[3][3]){         //Valores aleatorios
	int i, j, k;
	char aux;
	
	srand (time(NULL));
	do{
		i = rand() % 3;  		 // En i nos dara 3 números entre el 0 al 2
		j = rand () % 3;		//  En j nos dara 3 números entre el 0 al 2
		k = 0;
		
	if (c[i][j]  == 'x' || c[i][j] == '0'){
			k = 1;
			
		}
		
	}while (k == 1);
		
	c[i][j]	= 'o';
}

void tablero (char c [3][3]){
	int i, j;
	
	for (i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if (j < 2){
				printf(" %c |",c[i][j]);   //Para dejar espacio entre un número y otro "|"
			}
			else {
				printf(" %c ",c[i][j]);
			}
		}	
		if (i < 2){
			printf ("\n-----------\n");
		}
	}
		printf("\n\n");
	}

