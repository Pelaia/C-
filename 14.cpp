/*En un puesto de peaje pasan diariamente vehículos de distintas marcas. La probabilidad de cada marca se muestra en la siguiente tabla:
MARCA	PROBABILIDAD	ACUMULADO
FIAT	30%	0,30	0,30
FORD	21%	0,21	0,51
VOLKSWAGEN	16%	0,16	0,67
RENAULT	12%	0,12	0,79
CHEVROLET	9%	0,09	0,88
CITROEN	7%	0,07	0,95
PEUGEOT	4%	0,04	0,99
OTRAS	1%	0,01	1,00
TOTAL	100%		
Simular el paso de vehículos hasta que pase el quinto Citroën, hacerlo además para los siete días de la semana, es decir,
 hacer un total de siete simulaciones. Mostrar los totales de cada simulación, los totales generales y el promedio y porcentaje general.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int M=10000;
const int cant=7;
int r,flag;
main()
{
	int i,j=0,f=7;
	float fiat,ford,vol,rena,chev,citro,peu,otras;
	float tot;
	float totfiat=0,totford=0,totvol=0,totrena=0,totchev=0,totcitro=0,totpeu=0,tototras=0,cantidad=0;
	float promfiat=0,promford=0,promvol=0,promrena=0,promchev=0,promcitro=0,prompeu=0,promotras=0;
	float porcfiat=0,porcford=0,porcvol=0,porcrena=0,porcchev=0,porccitro=0,porcpeu=0,porcotras=0;
	srand(time(NULL));	
	for(i=1;i<=cant;i++)
	{
		printf("\n En la simulacion %d pasaron",i);
	    fiat=ford=vol=rena=chev=citro=peu=otras=0;
	    tot=0;
	    flag=0;
        do{
          r = rand()%M;
		  if(r<3000) fiat++;
		  else if(r<5100)ford++;
		  else if(r<6700) vol++;
		  else if(r<7900) rena++;
		  else if(r<8800) chev++;
		  else if(r<9500) citro++;
		  else if(r<9900) peu++;
		  else otras++; 
		  if(citro==5) flag=1;
		  tot++;
	    }while (flag==0);
	    totfiat=totfiat+fiat;
	    totford=totford+ford;
	    totvol=totvol+vol;
	    totrena=totrena+rena;
	    totchev=totchev+chev;
	    totcitro=totcitro+citro;
	    totpeu=totpeu+peu;
	    tototras=tototras+otras;
	printf("\n %2.0f autos marca fiat ",fiat);
	printf("\n %2.0f autos marca ford",ford);
	printf("\n %2.0f autos marca volkswagen",vol);   
	printf("\n %2.0f autos marca renault",rena);
	printf("\n %2.0f autos marca chevrolet",chev);
	printf("\n %2.0f autos marca citroen",citro);
	printf("\n %2.0f autos marca peugeot",peu);
	printf("\n %2.0f autos de otra marca",otras); 
	printf("\n La cantidad de autos %2.0f",tot);
    printf("\n");
    }
    cantidad=totfiat+totford+totvol+totrena+totchev+totcitro+totpeu+tototras;
    printf("\n Total de autos");
    printf("\n Total de auto fiat %2.0f",totfiat);
    printf("\n Total de autos ford %2.0f ",totford);
	printf("\n Total de autos volkswagen %2.0f",totvol);
	printf("\n Total de autos renault %2.0f",totrena);
	printf("\n Total de autos chevrolet %2.0f",totchev);
	printf("\n Total de autos citroen %2.0f",totcitro);
	printf("\n Total de autos peugeot %2.0f",totpeu);
	printf("\n Total de autos de otras marcas %2.0f",tototras);   
	printf("\n");
	
	promfiat=totfiat/cant; promford=totford/cant; promvol=totvol/cant; promrena=totrena/cant; promchev=totchev/cant; promcitro=totcitro/cant;
	prompeu=totpeu/cant; promotras=tototras/cant;
	printf("\n Promedio");
	printf("\n Autos marca fiat %4.2f",promfiat);
	printf("\n Autos marca ford %4.2f",promford);
	printf("\n Autos marca volkswagen %4.2f",promvol);
	printf("\n Autos marca renault %4.2f",promrena);
	printf("\n Autos marca chevrolet %4.2f",promchev);
	printf("\n Autos marca citroen %4.2f",promcitro);
	printf("\n Autos marca peugeot %4.2f",prompeu);
	printf("\n Autos de otra marca %4.2f",promotras);
    printf("\n");
    
	porcfiat=(totfiat*100)/cantidad; porcford=(totford*100)/cantidad; porcvol=(totvol*100)/cantidad; porcrena=(totrena*100)/cantidad;
	porcchev=(totchev*100)/cantidad; porccitro=(totcitro*100)/cantidad; porcpeu=(totpeu*100)/cantidad; porcotras=(tototras*100)/cantidad;
	printf("\n Porcentaje");
    printf("\n Autos marca fiat %4.2f",porcfiat);
	printf("\n Autos marca ford %4.2f",porcford);
	printf("\n Autos marca volkswagen %4.2f",porcvol);
	printf("\n Autos marca renault %4.2f",porcrena);
	printf("\n Autos marca chevrolet %4.2f",porcchev);
	printf("\n Autos marca citroen %4.2f",porccitro);
	printf("\n Autos marca peugeot %4.2f",porcpeu);
	printf("\n Autos de otra marca %4.2f",porcotras);
	
	printf("\n La cantidad de autos %2.0f",cantidad);
    printf("\n");
}
