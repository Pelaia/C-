/*En una autopista pasan autos verdes, rojos, azules y amarillos. Sabiendo que
hay un 50% de probabilidad que el auto que pase sea azul, 30% de que sea rojo, 15% de
que sea verde y 5% que sea amarillo, simular la pasada de los autos hasta que aparezcan
7 amarillos, hacerlo 10 veces y mostrar las cantidades de cada auto en cada simulación,
promediar y mostrar el promedio final de cada color y su porcentaje respectivo.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int N=4;
const int M=10000;
const int cant=10;
int r,flag;
float color[N],tot[cant],totgral;
float prom[cant],porc[cant];
main()
{
	int i,j=0,f=7;
	float verde,amarillo,rojo,azul;
	float tot;
	float tota=0,totr=0,totaz=0,totv=0,cantidad=0;
	float proma=0,promr=0,promaz=0,promv=0;
	float porcam=0, porcr=0,porcv=0,porcaz=0;
	srand(time(NULL));	
	for(i=1;i<=cant;i++)
	{
		printf("\n En la simulacion %d pasaron",i);
	    verde=0;rojo=0;amarillo=0;azul=0;
	    tot=0;
	    flag=0;
        do{
          r = rand()%M;
		  if(r<5000) azul++;
		  else if(r<8000)rojo++;
		  else if(r<9500) verde++;
		  else amarillo++; 
		  if(amarillo==7) flag=1;
		  tot++;
	    }while (flag==0);
	    tota=tota+amarillo;
	    totr=totr+rojo;
	    totaz=totaz+azul;
	    totv=totv+verde;
	printf("\n %2.0f autos rojos ",rojo);
	printf("\n %2.0f autos amarillos",amarillo);
	printf("\n %2.0f autos verdes",verde);   
	printf("\n %2.0f autos azules",azul); 
	printf("\n La cantidad de autos %2.0f",tot);
    printf("\n");
    }
    cantidad=tota+totr+totaz+totv;
    printf("\n Total de autos");
    printf("\n Total de auto amarillos %2.0f",tota);
    printf("\n Total de autos rojos %2.0f ",totr);
	printf("\n Total de autos azules %2.0f",totaz);
	printf("\n Total de autos verdes %2.0f",totv);   
	
	proma=tota/10; promr=totr/10; promv=totv/10; promaz=totaz/10;
	printf("\n Promedio");
	printf("\n Autos amarillos %4.2f",proma);
	printf("\n Autos rojos %4.2f",promr);
	printf("\n Autos verdes %4.2f",promv);
	printf("\n Autos azules %4.2f",promaz);
	
	porcam=(tota*100)/cantidad; porcr=(totr*100)/cantidad; porcv=(totv*100)/cantidad; porcaz=(totaz*100)/cantidad;
	printf("\n Porcentaje");
    printf("\n Autos amarillos %4.2f",porcam);
	printf("\n Autos rojos %4.2f",porcr);
	printf("\n Autos verdes %4.2f",porcv);
	printf("\n Autos azules %4.2f",porcaz);
	
	printf("\n La cantidad de autos %2.0f",cantidad);
    printf("\n");
}
