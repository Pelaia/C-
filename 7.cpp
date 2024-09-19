/*Se tiene un mazo de naipes españoles de 50 cartas. Se desea que se saquen cartas
del mazo hasta que aparezca el as de espadas, contando cuantas cartas se han sacado hasta
que apareció dicha carta. Realizar la simulación 30 veces, calcular la media y mostrar los
resultados..*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int N=50;
const int M=10000;
const int CANTSIM=30;
int r,i;
int mazo,as;
bool esta;
float carta, media;
main(){
	
	srand(time(NULL));
	media=0;
	for(i=1;i<=CANTSIM;i++)
	{
		printf("\n Simulacion %d ",i);
		esta=false;
		mazo=N; // mazo completo
		as=0;  // cuento las cartas que saco
		while(not esta)
		{
			as++;
			r = rand()%M;
			carta=M/mazo; //calculo la probabilidad de acierdoo a la cantidad de cartas que quedan en el mazo
            if(r<=carta)
			esta=true; //salio el as
			else
			mazo--; //no salio el as de espada
			}
			printf("El as de espada aparecio en la posicion %d \n",as);
			media+=as;
		}
		media=media/CANTSIM;
		printf("\n En promedio, el as de espada aparecio en la posicion %4.2f",media);
		
		printf("\n");
		system("pause");
}
