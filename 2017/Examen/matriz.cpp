#include <stdio.h>
#include <stdlib.h>

#define N 3

int main (){
	
	int i,j,cont,b,p;
	int a[N][N];
	int c[N][N] = {0};  //bzero(c, sizeof(c));
	
	for (i=0;i<=2;i++){										//Inicializamos
    	for (j=0;j<=2;j++){
        	printf ("introduce el numero\n");
        	scanf("%d", &a[i][j]);
	}
}
	printf("\n");
	for (i=0;i<=2;i++){
    	for (j=0;j<=2;j++){
        	printf("%d\t", a[i][j]);
	}
	printf("\n");
}
for (i=0;i<=2;i++){											//Escribimos el algoritmo de los numeros pares
    for (j=0;j<=2;j++){
        b=1;
        cont=0;
            while((b<=a[i][j])){
                if((a[i][j]%b)==0){
                    cont=cont+1;
                    }
                b=b+1;
            }
	if(cont==2){
    	p=p+1;
    	c[i][j]=a[i][j];
		}

	}
}
	printf ("Y los primos son: \n");						//Lo sacamos por pantalla
for (i=0;i<=2;i++){
    for (j=0;j<=2;j++){
        if (c[i][j]!=0)
            printf("a[%d][%d] == %d\n", i, j, c[i][j]);
    }
}
return EXIT_SUCCESS;
}
