#include <stdlib.h>
#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>
#include <time.h>

#define N 200

struct Coordenada {
    double x;
    double y;
};

void actualiza(struct Coordenada lista[N]){
    for (int i=0; i<N; i++){
    lista[i].x += rand() % 3 - 1;
    lista[i].y += (rand() % 100) / 100.; /*si no pones parentesis asume que y es un puntero y te dara lo que hay en el espacio de memoria de lo que vale (y). eso es porque hay orden de prioridades*/
    //obj ->y += CAIDA; significa lo mismo
    }
}

void pinta (struct Coordenada lista[N]){
    clear(); /*borra la matriz*/
    for (int i=0; i<N; i++)
    mvprintw( (int) lista[i].y % LINES, lista[i].x, "*" ); /*para pintar algo en esa posicion*/ /*ojo va en filas (Y) y columnas (X) */ /*copo es un parametro*/
    refresh();/*vuelca la matriz en la pantalla*/

}

void inicializar(struct Coordenada lista[N]){ /*si pusieramos &obj lo usariamos ya como una variable normal*/
    for (int i=0; i<N; i++){
    lista[i].y = 1;
    lista[i].x = rand() % COLS;
    }
}
int main(){
    struct Coordenada copo[N];

    srand(time(NULL)); /* te da el numero se milisegundos que han pasado desde 1970 / esto lo hacemos para que cada vez sea diferente*/
    initscr();/*crea una matriz / mira como de grande es la matriz de la ventana con un malloc*/
    inicializar(copo);
    curs_set(0);/*para que no se vea el cursor*/

    while (1) {
        actualiza(copo); /*PASO LA DIRECCION PARA QUE SE ACTUALIZE SI NO SERAN LOS MISMOS VALORES Y NO SE MOVERA*/
        //copo.y = copo.y + CAIDA; /*es lo mismo que copo.y += CAIDA */ /* += es un poreador taquigrafico*/
        pinta(copo);
        usleep(150000); /*decima de segundo*/

    }
    curs_set(1);/*para que se vuelva a ver el cursor*/
    sleep(5);
    endwin(); /*libera el espacio de memoria de initscr*/

    return EXIT_SUCCESS;
}




