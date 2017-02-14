#include <stdio.h>
#include <stdlib.h>

typedef struct

{
int grado; //grado del polinomio
float *coef; // coeficiente del polinomio
}


tpolimonio LeerPol (void)
{

tpolinomio pol = {0, NULL};
int i = 0;

printf("Grado del polinomio: ");
scanf("%d", &Pol.grado);

// asignar la memoria

pol.coef = (float *)malloc((pol.grado + 1) * sizeof(float));
if ( pol.coef != NULL )

// lee los coeficientes


printf("Coeficientes: ");
for (i = pol.grado; i >= 0; i-- )
scanf("%g", &pol.coef[i]);
}

return pol;
}


}

