#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 20
int main(){
	
    int i;
    char t[N];
    
    printf("Escribe: mi moto al pino derrapante \n");
    gets(t);
    for(i=0;t[i]!='\0';i++){
                      if(t[i]=='a'){
                                    t[i]='e';
                                    }
                      else if(t[i]=='i'){
                                    t[i]='e';
                                    }
                      else if(t[i]=='o'){
                                    t[i]='e';
                                    }
                     
                      }
    printf("%s\n",t);
    	
    return EXIT_SUCCESS;
}
