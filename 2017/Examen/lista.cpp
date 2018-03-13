#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100

int main(){

    char **l;
    char buffer[N];
    int len;

    printf("Dime tu nombre: ");
    scanf(" %[^\n]", buffer);
    len = strlen(buffer);

    l = (char **) malloc(sizeof(char *));

    *l = (char *) malloc (len + 1);
    strncpy(*l, buffer, N);

    printf("Dime tu nombre: ");
    scanf(" %[^\n]", buffer);
    len = strlen(buffer);

    l = (char **) realloc(l, 2*sizeof(char *));
    *(l+1) = (char *) malloc (len + 1);
    strncpy(*(l+1), buffer, N);


    free(*l);
    free(*(l+1));
    free(l);

    return EXIT_SUCCESS;
}
