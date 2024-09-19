/*Una estudiante va todos los días a la facultad en bicicleta, tiene dos caminos
posibles, en el primer trayecto tarda 35 minutos y en el segundo tarda 43, pero en el
primer trayecto debe atravesar tres cruces ferroviarios, cuyas demoras y probabilidades
de barrera baja se ven en el siguiente cuadro: 
PRIMER CRUCE 7 15%
SEGUNDO CRUCE 8 20%
TERCER CRUCE 5 40%
Después de simular las ochenta veces que va en un cuatrimestre informar qué camino le
conviene tomar.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int N=43;
const int M=10000;
const int cant=80;
int r;
main(){
	int camino1=0,i,j,prome=0,totcamino1=0;
	srand(time(NULL));	
	
	for(j=1;j<=cant;j++)
	{
		printf("\n Simulacion numero %d",j);
		camino1=35;
	for(i=1;i<=1;i++)
	{
		  r = rand()%M;
		  if(r<1500) camino1+=7;
		  else if(r<3500) camino1+=8;
		  else if(r<7500) camino1+=5;	
		  else
		  camino1; 
		  
	}
	totcamino1=totcamino1+camino1;
	printf("\n                      Va a tardar %d minutos",camino1); 
	if(camino1<N)
	{
		printf("\n                      Conviene tomar el primer camino");
	}
	else 
	{
		printf("\n                      Conviene tomar el segundo camino");
	}
    }
    printf("\n");
    prome=totcamino1/cant;
    printf("\n Tomando el promedio le conviene tomar:");
	if(prome<N)
	{
		printf("\n El primer camino");
	}
	else 
	{
		printf("\n El segundo camino");
	}

}

