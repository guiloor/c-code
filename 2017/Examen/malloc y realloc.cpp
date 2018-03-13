#include <stdio.h>
#include <stdlib.h>


 int main(){

	void* p;
	double n;
	n=3.0;

	scanf("%d",&n);
	p=(double*)malloc(n*sizeof(double));

	void *otro_p = realloc(p, 7.0);
	
	p = otro_p;


	return EXIT_SUCCESS;

}
