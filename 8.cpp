/*Realizar 300 simulaciones en las cuales los resultados sean los números del 0 al 9
distribuidos de forma tal que los valores pares tengan el doble de posibilidades que los
impares. Informar cantidades en cada simulación, y cantidades totales, promedios y
porcentajes. Opcional, visualizar resultados en forma gráfica con Excel, (cantidades con
barras y porcentajes con torta).*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int M=11250;
const int CANT=300;
int r,i,j;


main(){
	float totalpar=0,totalimpar=0;
	float par=0,impar=0;
	float pp=0, pi=0;
	float prp=0, pri=0;
	srand(time(NULL));
	for(i=1;i<=CANT;i++)
	{ 
    	printf("\n Simulacion %d ",i);
	    for(j=1;j<=1;j++)
	    {
	    	r = rand()%M;
		if(r<=1500)
		par++;
		else if(r<=2250)
		impar++;
		else if(r<=3750)
		par++;
		else if(r<=4500)
		impar++;
		else if(r<=6000)
		par++;
		else if(r<=6750)
		impar++;
		else if(r<=8250)
		par++;
		else if(r<=9000)
		impar++;
		else if(r<=10500)
		par++;
		else
		impar++;
	    }
		printf("\n Par %2.0f",par);
    	printf("\n Impar %2.0f",impar);
    	printf("\n");
		system("pause");
    }
    printf("\n");
    totalpar=totalpar+par;
	totalimpar=totalimpar+impar;
	printf("\n EL total de pares es %2.0f",totalpar);
	printf("\n El total de impares es %2.0f",totalimpar);
	printf("\n");
	pp=(totalpar*100)/CANT;
	pi=(totalimpar*100)/CANT;
    printf("\n");
	printf("\n EL total de pares es %4.2f",pp);
	printf("\n El porcentaje de impares es %4.2f",pi);
	printf("\n");
	prp=totalpar/CANT;
	pri=totalimpar/CANT;
	printf("\n EL promedio de pares es %4.2f",prp);
	printf("\n El promedio de impares es %4.2f",pri);
	
	
}
