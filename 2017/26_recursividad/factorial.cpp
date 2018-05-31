#include <stdio.h>
#include <stdlib.h>
 
int Factorial(int num){
   if(num==0)
     return 1;
   else
     return (Factorial(num-1)*num);
}
 
int main(){
  int num;
  printf("Ingresa un numero para calcular su factorial : ");
  scanf("%d",&num);
  printf("\n");
  printf("El factorial de %d es %d\n",num,Factorial(num));

	return EXIT_SUCCESS;
}
