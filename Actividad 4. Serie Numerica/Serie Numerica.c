////////////////////////////////////////////////////////

///////		Jesus Armando Espino Rodriguez		////////

///////		Programa 4. Serie numerica  		////////

////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int elementos_maximos = 100;
	int serie[elementos_maximos];
	int indice;
	
	for(indice = 1; indice <= elementos_maximos; indice++)
	{
		serie[indice] = indice * indice;
	}
	
	int sumatoria = 0;
	
	for(indice = 1; indice <= elementos_maximos; indice++)
	{
		sumatoria = sumatoria + serie[indice];
	}
	
	printf("\n\t Valores sumados: \n\n\t ");
	
	for(indice = 1; indice <= elementos_maximos; indice++)
	{
		printf("%5d ", serie[indice]);
		if(indice%10==0)
		{
			printf("\n\t ");
		}
	}
	
	printf("\n\n\t Sumatoria: %d", sumatoria);
	
	int total_calculado = (elementos_maximos*(elementos_maximos+1)*(2*elementos_maximos+1))/6;
	
	printf("\n\t Total calculado: %d", total_calculado);

	return 0;
}


