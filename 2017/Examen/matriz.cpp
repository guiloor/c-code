#include<stdio.h>
#include <stdlib.h>

int a[3][3],i,j,cont,b,p,c[3][3]={0};
int main (){
for (i=0;i<=2;i++){
    for (j=0;j<=2;j++){
        printf ("introduce el numero\n");
        scanf("%d", &a[i][j]);
}
}
for (i=0;i<=2;i++){
    for (j=0;j<=2;j++){
        printf("%d\t", a[i][j]);
}
printf("\n");
}
for (i=0;i<=2;i++){
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
printf("\nEl total de numeros primos es:%d\n", p);
puts ("Y los primos son:");
for (i=0;i<=2;i++){
    for (j=0;j<=2;j++){
        if (c[i][j]!=0)
            printf("a[%d][%d] == %d\n", i, j, c[i][j]);
    }
}
return 0;
}		 


