/*Se tiene un grupo de 300 personas en el cual hay una probabilidad de un 46% de
mujeres, 42% de hombres y un 12% de disidencias. Crear un modelo de simulación teniendo
en cuenta estos porcentajes, informe las cantidades y los porcentajes que arroja la
simulación, realice 15 simulaciones y calcule la media y el porcentaje de los resultados de
ellas. Opcional, visualizar resultados en forma gráfica con Excel, (cantidades con barras y
porcentajes con torta).*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int N=300;
const int M=10000;
int r,i,j;
main(){
	float m=0,h=0,d=0, tm=0, th=0,td=0;
	float porm=0,porh=0,pord=0;
	float mm=0,mh=0,md=0;
	srand(time(NULL));
	for(j=1;j<=15;j++)
	{
	for(i=1;i<=N;i++)
	{
		r = rand()%M;
		if(r<4600)
		 m++;
		else if(r<8800)
		  h++;
		  else 
		  d++;
	}
	
	}
    	tm=tm+m; th=th+h; td=td+d;
	printf("\nLa cantidad de mujeres %2.0f",m);
	printf("\nLa cantidad de hombres %2.0f",h);
	printf("\nLa cantidad de disidencia %2.0f",d);
	porm=(m*100)/(N*15); porh=(h*100)/(N*15); pord=(d*100)/(N*15);
	printf("\nEl porcentaje de mujeres %4.2f",porm);
	printf("\nEl porcentaje de hombres %4.2f",porh);
	printf("\nEl porcentaje de disidencia %4.2f",pord);
   
   mm=tm/15; mh=th/15; md=td/15;
   printf("\n La media de mujeres es %4.2f hombre %4.2f y disidencia %4.2f",mm,mh,md);
   
   
   
}
