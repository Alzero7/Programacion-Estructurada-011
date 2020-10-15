////////////////////////////////////////////////////////

///////		Jesus Armando Espino Rodriguez		////////

///////		Programa 3. Imprimir Cuadrado  		////////

////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	system("color 0B");
	
	int x;
	int y;
	int i;
	int j;
	
	printf("\n\t Ingrese la base: ");
	scanf("%d",&x);
	
	printf("\n\t Ingrese la altura: ");
	scanf("%d",&y);
	
	printf("\n\n\t La figura es: \n\n\t ");
	
	for(i=1;i<=y;i++)
	{
		for(j=1;j<=x;j++)
		{
			if(i==1 || i==y)
			{
				printf("*");
			}
			else
			{
				if(j==1 || j==x)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}		
		}
		printf("\n\t ");
	}
	
	return 0;
}

