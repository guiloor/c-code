#include <stdio.h>
#include <stdlib.h>

using namespace std;

 int main(){

	double n;
	
	void* p;
	n=3.0;
	scanf("%d",&n);
	p=(double*)malloc(n*sizeof(double));

	void *tmp_p = realloc(p, 7.0);

	if (tmp_p == NULL){
	}

	else {
	
		p = tmp_p;
	}

	return 0;
}