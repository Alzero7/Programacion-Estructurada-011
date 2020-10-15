///////////////////////////////////////////////////////////

///////		Jesus Armando Espino Rodriguez			///////

///////		Programa 2. Deteccion de Operadores		///////

///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	system("color 0B");

	char c;
 
    printf("\n\t Introduce un caracter: ");
    c = getchar();
	fflush(stdin);

	int a = (int) c;
	printf("\n\t ");
	system("pause");
	system("cls");
 
    if(c>=65 && c<=90)
	{
		printf("\n\t El caracter es alfabetico y es mayuscula\n\n\t c = %c",a);
	}
	else
	{			
		if(c>=97 && c<=122)
		{
			printf("\n\t El caracter es alfabetico y es minuscula\n\n\t c = %c",a);
		}
		else
		{
			if(isdigit(a))
			{
				printf("\n\t El caracter es numerico \n\n\t c = %c",a);
			}
			else
			{
				printf("\n\t El caracter es un simbolo\n\n\t c = %c",a);
			}
		}
	}

	
	return 0;
}
