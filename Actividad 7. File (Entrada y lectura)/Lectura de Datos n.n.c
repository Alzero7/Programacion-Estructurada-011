#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Informacion{                //  Estructura con las variables a trabajar
	char Matricula[5];             //  Matricula del Alumno
	int Primer_Parcial;            //  Calificacion del primer parcial
	int Segundo_Parcial;           //  Calificacion del segundo parcial
	int Pia;                       //  Calificacion del Producto Integrador de Aprendizaje
	float Final;                   //  Calificacion Final
}Inf[3];

FILE *pf;
int i;
char Matricula[255];
char Primer_Parcial[255];
char Segundo_Parcial[255];
char Pia[255];
char Final[255];

int main()
{
	pf = fopen("Calificaciones.csv","r+");
	fscanf(pf,"%s %s %s %s %s\n",Matricula,Primer_Parcial,Segundo_Parcial,Pia,Final);
	printf("%s  %s  %s    %s    %s\n",Matricula,Primer_Parcial,Segundo_Parcial,Pia,Final);
	for(i=0;i<3;i++)
	{
		fscanf(pf,"%s %s %s %s %s\n",Matricula,Primer_Parcial,Segundo_Parcial,Pia,Final);
		strcpy(Inf[i].Matricula,Matricula);
		
		Inf[i].Primer_Parcial = atoi(Primer_Parcial);
		Inf[i].Segundo_Parcial = atoi(Segundo_Parcial);
		Inf[i].Pia = atoi(Pia);
		Inf[i].Final = atof(Final);
		
		
		printf("     %s            %d              %d     %d    %.2f\n",Inf[i].Matricula,Inf[i].Primer_Parcial,Inf[i].Segundo_Parcial,Inf[i].Pia,Inf[i].Final);
	}
	
	fclose(pf);
	
	printf("\n\nCierre Exitoso n.n");
	
	return 0;
}
