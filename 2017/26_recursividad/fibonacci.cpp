#include<stdio.h>
#include<stdlib.h>

long fibonacci(int n){

	if(n==0 || n==1)
		return n;
	else
		return fibonacci(n-2) + fibonacci(n-1);
}

int main(){

	for(int i=0;i<=20;i++)
	printf("%d\n", fibonacci(i));

}

 
