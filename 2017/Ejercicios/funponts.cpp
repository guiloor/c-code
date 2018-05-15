#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100

typedef struct {
    double x;
    double y;
} Coord;

typedef struct {
    Coord pos;
    Coord vel;
    Coord acc;
    void (*haz)(Coord *pos, Coord *vel, Coord *acc);
} Barco;

typedef struct {
    Barco data[MAX];
    int cima;
} Pila;

bool push(Barco dato, Pila *pila){
    if (pila->cima >= MAX){
        return false;
    }
    pila->data[pila->cima++] = dato;
    return true;
}

Barco pop(Pila *pila) {
    if (pila->cima == 0){
        return Barco();
    }
    return pila->data[--pila->cima];
}

void haz_a (Coord *pos, Coord *vel, Coord *acc) {
    pos->x += vel->x * acc->x;
}

void haz_b (Coord *pos, Coord *vel, Coord *acc) {
    pos->y += vel->y * acc->y;
}

int main(){
    Pila pila;
    pila.cima = 0;

    Barco ob1 = {{8,4},{1,1},{9,90}, haz_a}, ob2 {{0,0},{1,2},{0.3,9},haz_b}, ob3 {{0,0},{3,0.5},{9,30}, haz_a};

    push(ob1, &pila);
    push(ob2, &pila);
    push(ob3, &pila);

    while(pila.cima != 0) {
        Barco objeto = pop(&pila);
        objeto.haz(&objeto.pos, &objeto.vel, &objeto.acc);
        printf("x: %06.2f, y: %06.2f\n", objeto.pos.x, objeto.pos.y);
    }

    return EXIT_SUCCESS;
}

