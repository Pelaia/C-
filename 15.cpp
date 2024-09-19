/*Se desea arrojar 5 veces una moneda que tiene 70% de posibilidades de salir cara, y
30% de posibilidades de ceca. Contabilizar cuántas caras y secas resultaron. Repetir la
simulación 15 veces. Informe cantidades, promedios finales y porcentajestotales. Opcional,
visualizar resultados en forma gráfica con Excel, (cantidades con barras y porcentajes con
torta)*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int N=5;
const int M=10000;
int r;
int i,j;
float cara,ceca,porca,porce,sumac,sumace,promc,promce;
main(){
	srand(time(NULL));
    for(j=1;j<=15;j++)
    {
		for(i=1;i<=N;i++)
	{
		r=rand()%M;
		if(r<7000)
		{
			cara++;
		}
		else
		{
			ceca++;
		}		
	}
	}
	
	printf("\n Las cantidades de monedas cara son %2.0f y las cecas %2.0f",cara,ceca);	
	porca=(cara*100)/(N*15); porce=(ceca*100)/(N*15);
	printf("\n El porcentaje de monedas cara son %4.2f y las cecas %4.2f",porca,porce);	
	promc=cara/15; promce=ceca/15;
	printf("\n El promedio de monedas cara son %2.0f y las cecas %2.0f",promc,promce);
	
}
