#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Informacion{
	char Matricula[10];
	int Parciales[7];
	float Promedio_Alumno;
}Info[3];

FILE *pf;
int i=0;
int j=0;
int sum_prom;
int tope=3;
float Promedio_Grupal=0;
float Promedio_Parcial[7];
int No_Apro[7];
float sum_pg;
float Reprobados=0;
int No_Aprobados=0;

int Capturar_Matricula(int a);
int Capturar_Parciales(int a, int b);
int Promedio_Alumno(int c);
int Promedio_Parciall(int d);

int main()
{
	pf = fopen("Pia Calificaciones.csv","w+");
	
	for(i=0;i<tope;i++)
	{
		Capturar_Matricula(i);
		for(j=0;j<7;j++)
		{
			Capturar_Parciales(i,j);
			sum_prom=sum_prom+Info[i].Parciales[j];
		}
		Promedio_Alumno(i);
		sum_prom=0;
	}
	
	for(i=0;i<7;i++)
	{
		for(j=0;j<tope;j++)
		{
			sum_pg=Info[j].Parciales[i];
			if(Info[j].Parciales[i]<70)
			{
				No_Aprobados = No_Aprobados + 1;
			}		
		}
		Promedio_Parciall(i);
		No_Aprobados=0;
	}
	
	fprintf(pf,"Matricula, Parcial_1, Parcial_2, Parcial_3, Parcial_4, Parcial_5, Parcial_6, Parcial_7, P.C. Parciales, No Aprobados,\n");
	
	for(i=0;i<tope;i++)
	{
		fprintf(pf,"%s, ",Info[i].Matricula);
		for(j=0;j<7;j++)
		{
			fprintf(pf,"%d, ",Info[i].Parciales[j]);
		}
		fprintf(pf,"%.2f, ",Info[i].Promedio_Alumno);
		if(Info[i].Promedio_Alumno<70)
		{
			fprintf(pf,"No Aprobo, \n");
		}
		else
		{
			fprintf(pf,"Aprobo, \n");
		}
	}
	
	Promedio_Grupal = Promedio_Grupal/tope;
	fprintf(pf,"Promedios no aprobados, P.G. P_1, P.G. P_2, P.G. P_3, P.G. P_4, P.G. P_5, P.G. P_6, P.G. P_7, Promedio_Grupal, \n,");
	for(i=0;i<7;i++)
	{
		fprintf(pf," %.2f, ",Promedio_Parcial[i]);
	}
	fprintf(pf," %.2f, \n ",Promedio_Grupal);
	
	fprintf(pf,", C.R. P_1, C.R. P_2, C.R. P_3, C.R. P_4, C.R. P_5, C.R. P_6, C.R. P_7, C. Reprobados, \n,");
		
	for(i=0;i<7;i++)
	{
		fprintf(pf," %d, ",No_Apro[i]);
	}
	
	for(i=0;i<7;i++)
	{
		Reprobados = Reprobados + No_Apro[i];
	}
	fprintf(pf," %.2f, \n ",Reprobados);
	
	fclose(pf);
	
	printf("\n\nCierre Exitoso n.n");
	
	return 0;
}

int Capturar_Matricula(int a)
{
	printf("\n\t Matricula:   ");
	fflush(stdin);
	gets(Info[a].Matricula);
	fflush(stdin);
	return 0;
}

int Capturar_Parciales(int a, int b)
{
	printf("\n\t Parcial %d:  ",b+1);
	do
	{
		scanf("%d",&Info[a].Parciales[b]);
	}while(Info[a].Parciales[b]<0 || Info[a].Parciales[b]>100);
	
	return 0;
}

int Promedio_Alumno(int c)
{
	Info[c].Promedio_Alumno = sum_prom/7;
	
	Promedio_Grupal = Promedio_Grupal + Info[c].Promedio_Alumno;
	
	return 0;
}

int Promedio_Parciall(int d)
{
	Promedio_Parcial[d]=sum_pg/(float)tope;
	
	No_Apro[d]=No_Aprobados;
	
	return 0;
}

