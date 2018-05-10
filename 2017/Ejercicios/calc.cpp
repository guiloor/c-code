#include <stdio.h>
#include <stdlib.h>

#define N 16
#define MAX 0x100

int error = 0;
const char *mssg[] = {
    "Todo OK.",
    "Pila vacía.",
    "Pila llena."
};

typedef struct {
    char nombre[N];
    double (*op)(double, double);
} Operacion;

typedef struct {
    int data[MAX];
    int cima;
} Pila;

enum {
    suma,
    resta,
    multi,
    division,
    OPERA
};

bool push(int dato, Pila *pila){
    if (pila->cima >= MAX){
        error = 2;
        return false;
    }
    error = 0;
    pila->data[pila->cima++] = dato;
    return true;
}

int pop(Pila *pila) {
    if (pila->cima == 0){
        error = 1;
        return 0;
    }
    error = 0;
    return pila->data[--pila->cima];
}

int popFifo(Pila *pila) {
    if (pila->cima == 0){
        error = 1;
        return 0;
    }
    int value = pila->data[0];
    --pila->cima;
    for(int i = 0; i< pila->cima; i++)
        pila->data[i] = pila->data[i+1];
    error = 0;
    return value;
}

int addFifo(Pila *pila, int index, int dato) {
    if (index >= MAX || pila->cima + 1 >= MAX){
        error = 2;
        return false;
    }
    if(index > pila->cima)
        return false;
    for(int i = index; i< pila->cima; i++)
        pila->data[i+1] = pila->data[i];
    error = 0;
    pila->data[index] = dato;
    pila->cima++;
    return true;
}

double sum(double op1, double op2) { return op1 + op2; }
double res(double op1, double op2) { return op1 - op2; }
double mul(double op1, double op2) { return op1 * op2; }
double div(double op1, double op2) { return op1 / op2; }

int main(){

    Pila op, datos;
    op.cima = 0;
    datos.cima = 0;
    double op1, op2;
    char opera;
    bool finish = false;
    Operacion catalogo[] = {
        {"suma",  &sum},
        {"resta", &res},
        {"multiplacion", &mul},
        {"division", &div}
    };

    printf("Operacion: ");
    scanf(" %lf", &op1);
    push(op1, &datos);
    do {
        scanf(" %c %lf", &opera, &op1);
        push(op1, &datos);
        switch(opera) {
            case '+':
                push(suma, &op);
                break;
            case '-':
                push(resta, &op);
                break;
            case '/':
                push(division, &op);
                break;
            case '*':
                push(multi, &op);
                break;
        }
        char c =getchar();
        if (c == '\n')
            finish = true;
    } while (!finish);

    while(op.cima != 0) {
        double (*operacion)(double op1, double op2);
        op1 = popFifo(&datos);
        op2 = popFifo(&datos);
        operacion = catalogo[popFifo(&op)].op;
        int resultado = (operacion)(op1, op2);
        printf("resultado %i\n", resultado);
        addFifo(&datos, 0, resultado);

    }

    printf("Resultado: %i\n", pop(&datos));

    return EXIT_SUCCESS;
}
