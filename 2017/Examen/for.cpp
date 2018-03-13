#include <stdlib.h>
#include <stdio.h>

#define N 3
int main (){

    double a[N] = {6, 1, 9};
    double b[N] = {1, 5, 3};
    
    double multi;
    double suma;

    for( int f=0; f<N; f++){
        multi = a[f] * b[f];
        suma += multi;
    }

    printf(" La suma es: %.2lf", suma);


	return EXIT_SUCCESS;
	
}

