#include <stdio.h>

#define linea 0x7

int main(){
	
    int i,j;
    
    for(j=0;j<=linea;j++){
        for(i=0;i<j;i++){
        	printf(" ");
        
        }
        printf("*");
        printf("\n");
    }
    getchar();
}
