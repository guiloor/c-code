/* 1º Leer através del teclado un polinomio y almacenarlo en una estructura.
   2º Suma de dos polinomios.
*/

#include <stdio.h>
#include <stdlib.h>

	typedef struct
	{
		int grado; 
		float *coef; 
	} 	tpolinomio;	
	
	tpolinomio LeerPol(void)
	{
	
	tpolinomio pol = {0, NULL};
	int i = 0;
	
	printf("Grado del polinomio: ");
	scanf("%d", &pol.grado);
	pol.coef = (float *)malloc((pol.grado +1) * sizeof(float));
	if ( pol.coef != NULL )
	{
		printf("Coeficientes de mayor a menor grado: ");
		for ( i = pol.grado; i >=0; i--)
			scanf("%g", &pol.coef[i]);
		}	
		
		return pol;
	}

	void VisualizarPol(tpolinomio pol)
	{
		int i = 0;
		for ( i = pol.grado; i > 0; i-- )
		  if ( pol.coef[i] ) printf("%+gx^%d ", pol.coef[i], i);
		if ( pol.coef[i] ) printf("%+g\n", pol.coef[i]);
	}
	
	tpolinomio SumarPols(tpolinomio PolA, tpolinomio PolB)
	{
		int i = 0;
		tpolinomio polresu = {0, NULL}, Polaux = {0, NULL};
		
		if ( PolA.grado < PolB.grado )
		{
			Polaux = PolA;
			PolA = PolB;
			PolB = Polaux;
		}
		
		polresu.grado = PolA.grado;
		
		polresu.coef = (float *)malloc((polresu.grado + 1) * sizeof(float));
		if ( polresu.coef != NULL )
		{
			for ( i = 0; i <= PolB.grado; i++ )
			polresu.coef[i] = PolB.coef[i] + PolA.coef[i];
			for ( ; i <= PolA.grado; i++)
			  polresu.coef[i] = PolA.coef[i];
		}
		return polresu;
		}
		
		main(void)
		{
			tpolinomio PolA, PolB, PolR;
			
			PolA = LeerPol();
			if (PolA.coef != NULL)
			{
				PolB = LeerPol();
				if (PolB.coef!= NULL)
				{
					PolR = SumarPols(PolA, PolB);
					if (PolR.coef != NULL)
					{
						VisualizarPol(PolR);
				}
			}
		}
		
		if ((PolA.coef == NULL) || (PolB.coef == NULL) || (PolR.coef == NULL))
			printf("Insuficiente memoria\n");
			
			free(PolA.coef);
			free(PolB.coef);
			free(PolR.coef);
			
	}
