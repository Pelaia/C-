/*Se desean arrojar 30 veces un par de monedas. Contabilizar la totalidad de cara-cara,
seca-seca y cara-seca han salido. Repetirlo 15 veces. Informe cantidades y porcentajes
totales. Opcional, visualizar resultados en forma gráfica con Excel, (cantidades con barras y
porcentajes con torta).*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int N=30;
const int M=10000;
int r1,r2;
int i,j;
main(){
	int x;
	float ceca;
	float tot_ceca,cecacara,tot_caraceca,caracara,tot_caracara;
	float porcarcar,porcarce,porceca;
	srand(time(NULL));
    for(j=1;j<=15;j++)
    {
		for(i=1;i<=N;i++)
	{
		x=0;
		r1=rand()%M;
		if(r1<5000)
		x++;
	   r2=rand()%M;
	   if(r2<5000)
          x++;
	   switch(x){
	   	     case 0:{ceca++;tot_ceca++;break;}
	   	     case 1:{cecacara++;tot_caraceca++;break;}
	   	     case 2:{caracara++;tot_caracara++;break;}
	   }
	}
    }
	printf("\n Las cantidades totales de monedas cara/cara son %2.0f",tot_caracara);
	printf("\n Las cantidades totales de monedas cara/ceca son %2.0f",tot_caraceca);
	printf("\n Las cantidades totales de monedas ceca/ceca son %2.0f",tot_ceca);
	porcarcar=(tot_caracara*100)/(N*15); porcarce=(tot_caraceca*100)/(N*15); porceca=(tot_ceca*100)/(N*15);
	printf("\n El porcentaje total de monedas cara/cara es %4.2f",porcarcar);
	printf("\n El porcentaje total de monedas cara/ceca es %4.2f",porcarce);
	printf("\n El porcentaje total de monedas ceca/ceca es %4.2f",porceca);
		
}
