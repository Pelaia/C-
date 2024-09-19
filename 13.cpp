/*Se desea arrojar 40 veces una moneda. Contabilizar cuántas caras y secas resultaron.
Informe cantidades y porcentajes. Opcional, visualizar resultados en forma gráfica con
Excel, (cantidades con barras y porcentajes con torta).*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int N=40;
const int M=10000;
int r;
int i;
float cara,ceca,porca,porce;
main(){
	srand(time(NULL));
	for(i=1;i<=N;i++)
	{
		r=rand()%M;
		if(r<5000)
		{
			cara++;
		}
		else
		{
			ceca++;
		}		
	}
	printf("Las cantidades de monedas cara son %2.0f y las cecas %2.0f",cara,ceca);
	porca=(cara*100)/N; porce=(ceca*100)/N;
	printf("\n El porcentaje de monedas cara son %4.2f y las cecas %4.2f",porca,porce);
	
}
