#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define V 21
#define H 75
#define N 100

typedef struct{
	int x, y;
	int ModX,ModY;
	char imagen;
}snk;

typedef struct{
	int x,y;
}frt;

snk snake[N]; // el cuerpo de la serpiente
frt fruta;

void inicio(int *tam, char campo[V][H]);
void intro_Campo(char campo[V][H]);
void intro_Datos(char campo[V][H], int tam);
void dibujar (char campo[V][H]);
void loop(char campo[V][H], int tam);
void input (char campo[V][H], int *tam, int *muerto);



void inicio(int *tam, char campo[V][H]){
	int i;
	//La cabeza de nuestra serpiente
	snake[0].x = 32;
	snake[0].y = 10;

	//Tama?o de la serpiente
	*tam = 4;

	//Corrdenadas Fruta
	 srand(time(NULL));

	fruta.x = rand() % (H - 1) + 1;
	fruta.y = rand() % (V - 1) + 1;

	// El borde es 0 y la muerte, por eso si la fruta aparece en el borde moririamos.
	while(fruta.x == 0){
			fruta.x = rand() % (H -1);
	}
	while(fruta.y == 0){
			fruta.y = rand() % (V -1);
	}

	for (i = 0; i < *tam; i++){
		snake[i].ModX = 1;
		snake[i].ModY = 0;
	}

		intro_Campo(campo);
		intro_Datos(campo,*tam);
}



//Creacion del campo de juego
void intro_Campo(char campo[V][H]){
	 int i, j;

	  for (i = 0 ; i < V; i++){
	  		 for (j = 0; j < H; j++){
	  		 	 if (i == 0 || i == V - 1){
	  		 	 	 campo [i][j] = '-';
		}
		else if (j == 0 || j == H - 1){
		 	 campo [i][j] = '|';
		}
		else if (j == 0 || j == H -1){
			campo[i][j] = '|';
		}
		else{
			campo[i][j]=' ';
			}
		}
	}
}



//Meter todos los datos en la matriz campo
void intro_Datos(char campo[V][H], int tam){
	int i;

	for (i = 0; i < tam; i++){
		snake[i].x = snake[i -1].x - 1;
		snake[i].y = snake[i -1].y;

		snake[i].imagen = 'X';
	}

	snake[0].imagen = 'O';

	for(i = 0; i < tam; i++){
		campo[snake[i].y][snake[i].x] = snake[i].imagen;  //meter dentro de la matriz las cordenadas de de la serpiente
	}
	campo[fruta.y][fruta.x] = '%';
}

void dibujar (char campo[V][H]){
	int i, j;

	for(i = 0; i < V; i++){
		for (j = 0; j < H; j++){
			printf("%c", campo[i][j]);
		}
		printf("\n");
	}

}

void loop(char campo[V][H], int tam){
	
	int muerto;
	
	muerto = 0;
	
	do{
		dibujar(campo);
		input(campo, &tam, &muerto);
	}while (muerto == 0);
}

void input (char campo[V][H], int *tam, int *muerto){   //colisiones
	int i;
	char key;
	
	//comprobar si hemos muerto
	if(snake[0].x == 0 || snake[0].x == H -1 || snake[0].y == 0 || snake[0].y == V -1){
		*muerto = 1;
	}	
	
	for (i = 1; i < *tam && *muerto == 0; i++){
		if (snake[0].x == snake[i].x && snake[0].y == snake[i].y){
			*muerto = 1;
		}
	}
	
	// Comprobar si nos hemos comido la fruta;
	
	if (snake[0].x == fruta.x && snake[0].y == fruta.y){
		*tam += 1;
		snake[*tam -1].imagen = 'X'; // volvemos a darle la imagen para que genere otra "X"
		
		fruta.x = rand() % (H - 1) + 1;
		fruta.y = rand() % (V - 1) + 1;
	
		
		while(fruta.x == 0){
				fruta.x = rand() % (H -1);
		}
		while(fruta.y == 0){
				fruta.y = rand() % (V -1);
		}
						
	}
	
	if (*muerto == 0){
		if (kbhit() == 1){
			key = getchar();
			
			if (key == '2'){
				snake[0].ModX = 0;
				snake[0].ModY = 1;	
			}
			
			if (key == '8'){
				snake[0].ModX = 0;
				snake[0].ModY = -1;
			}
			
			if (key == '4'){
				snake[0].x = -1;
				snake[0].y = 0;
			}
			
			if (key == '6'){
				snake[0].x = 1;
				snake[0].y = 0;
			}
			
		}
	}
}

int main(){

	int tam;
	char campo[V][H]; //matriz donde recogeremos todos los elementos
	
	inicio(&tam, campo);

	loop(campo, tam);

	
	system("pause");
    return EXIT_SUCCESS;
}














