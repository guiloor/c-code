#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){


for (int j=2;j<=100;j++){   
 int a=0;
 for(int i=1;i<=100;i++)  // hago un contador para dividir j entre los numeros del 1 al 100 
 {
    if(j%i==0) // si num1 módulo de i es 0, incrementamos a en 1.
    a++;
 }
 if (a==2){ //si solo tiene dos números divisores entonces es primo y se imprime
 printf("%d\n", j);
 }
 }
}




