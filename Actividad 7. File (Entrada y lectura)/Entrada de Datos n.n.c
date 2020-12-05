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
int Capturar_Datos(int posicion);
int Almacenar_Datos(int posicion_a);

int main()
{
	pf = fopen("Calificaciones.csv","w+");
	
	for(i=0;i<3;i++)
	{
		Capturar_Datos(i);
	}
	
	fprintf(pf,"Matricula, PrimerParcial, SegundoParcial, PIA, Final,\n");
	for(i=0;i<3;i++)
	{
		Almacenar_Datos(i);
	}
	
	fclose(pf);
	
	printf("\n\nCierre Exitoso n.n");
	
	return 0;
}

int Capturar_Datos(int posicion)
{
	int Mat=0;
	int i=0;
	int Vez=0;
	
	printf("\nMatricula:        ");                   // La matricula debe ser de 4 digitos
	do
	{
		scanf("%d",&Mat);
	}while(Mat<1000 || Mat>10000);                    // Validacion
	
	sprintf(Inf[posicion].Matricula,"%d",Mat);        // Conversion a String
	
	
	printf("\nPrimer Parcial:   ");
	do
	{
		scanf("%d",&Inf[posicion].Primer_Parcial);
	}while(Inf[posicion].Primer_Parcial<0 || Inf[posicion].Primer_Parcial>100);
	fflush(stdin);
	
	printf("\nSegundo Parcial:  ");
	do
	{
		scanf("%d",&Inf[posicion].Segundo_Parcial);
	}while(Inf[posicion].Segundo_Parcial<0 || Inf[posicion].Segundo_Parcial>100);
	fflush(stdin);
	
	printf("\nPIA:              ");
	do
	{
		scanf("%d",&Inf[posicion].Pia);
	}while(Inf[posicion].Pia<0 || Inf[posicion].Pia>100);
	fflush(stdin);
	
	Inf[posicion].Final = Inf[posicion].Primer_Parcial + Inf[posicion].Segundo_Parcial + Inf[posicion].Pia;
	Inf[posicion].Final = Inf[posicion].Final / 3;
	
	printf("\nFinal:        %.2f",Inf[posicion].Final);
	fflush(stdin);
	
	return 0;
}

int Almacenar_Datos(int posicion_a)
{
	fprintf(pf,"\n%s,  %d,  %d,  %d,  %.2f,",Inf[posicion_a].Matricula,Inf[posicion_a].Primer_Parcial,Inf[posicion_a].Segundo_Parcial,Inf[posicion_a].Pia,Inf[posicion_a].Final);
}
