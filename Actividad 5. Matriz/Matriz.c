////////////////////////////////////////////////////////

///////		Jesus Armando Espino Rodriguez		////////

///////		Programa 4. Serie numerica  		////////

////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int Matriz_A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int Matriz_B[3][3]={{10,10,10},{10,10,10},{10,10,10}};
	int Matriz_C[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	
	int a=0;
	int x=0;
	int y=0;
	
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			Matriz_C[x][y] = Matriz_A[x][y] + Matriz_B[x][y];
		}
	}
	
	printf("\n\t Matriz A + Matriz B = Matriz C :\n\n\n\t\t   ");
	
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("%4d",Matriz_C[x][y]);
		}
		if(a==0)
		{
			printf("\n\n\t Matriz C: ");
			a++;
		}
		else
		{
			printf("\n\n\t\t   ");
		}
	}
	
	return 0;
}


