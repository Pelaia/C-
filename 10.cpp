/*Una persona pasa por 45 semáforos en el trayecto que realiza todos los días
hacia su trabajo. Sabiendo que hay un 50% de posibilidad que el color sea rojo, un 5% de
que sea amarillo y 45% de que sea verde) se solicita simular las 20 veces que esta persona
realiza este trayecto en un mes, visualizando totales y porcentajes diarios y mensual.
Opcional, visualizar resultados en forma gráfica con Excel, (cantidades con barras y
porcentajes con torta).*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int N=45;
const int M=10000;
const int cant=20;
int r;
main()
{
	int i,j=0;
	float verde,amarillo,rojo;
	float totverde=0,totamarillo=0,totrojo=0;
	float porcmrojo=0,porcmamarillo=0,porcmverde=0;
	float porcdrojo=0,porcdverde=0,porcdamarillo=0;
		srand(time(NULL));
			
	for(j=1;j<=cant;j++)
	{
		printf("\nEn el dia numero %d",j);
	rojo=0; verde=0; amarillo=0;
	for(i=1;i<=N;i++)
	{
		r = rand()%M;
		if(r<5000)
		 rojo++;
		else if(r<5500)
		  amarillo++;
		  else 
		  verde++;
	
	}
    totrojo=totrojo+rojo;
	totamarillo=totamarillo+amarillo;
	totverde=totverde+verde;
	porcdrojo=(rojo*100)/45; porcdverde=(verde*100)/45; porcdamarillo=(amarillo*100)/45;
	printf("\n Le toco %2.0f Rojo %4.2f",rojo,porcdrojo);
	printf("\n Le toco %2.0f Amarillo %4.2f",amarillo,porcdamarillo);
	printf("\n Le toco %2.0f Verde %4.2f",verde,porcdverde);         
	printf("\n");
    }
    
    porcmrojo=(totrojo*100)/(cant*45); porcmamarillo=(totamarillo*100)/(cant*45); porcmverde=(totverde*100)/(cant*45);
    printf("\nEl total de semaforos mensuales que Le toco %2.0f %4.2f(Rojo)    %2.0f %4.2f(Amarillo)    %2.0f %4.2f(Verde)",totrojo,porcmrojo,totamarillo,porcmamarillo,totverde,porcmverde);
}
