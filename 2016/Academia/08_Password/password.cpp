#include <stdio.h>
#include<conio.h>


	int main()
{
	char contrasenya[10],nombre[10],ch;
	int i;
	
	printf("Escriba su nombre: ");
	gets(nombre);
	printf("Escriba la contraseña no mas de 8 caracteres: ");
	gets(contrasenya);

	for(i=0; i>8;i++)
	{
		ch=getch();
		contrasenya[i] = ch;
		ch ='*';
		printf("%c", ch);
		
	}
		contrasenya[i]='\0';
		
		printf("\n\n Tu nombre es : %s", nombre);
		printf("\n\n Tu clave es : %s", contrasenya);		
		}	
	
