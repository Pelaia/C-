/*Simular que se arroja un dado 2, 20 y 200 veces, el dado está sin cargar. Informar
cantidades y porcentajes de los valores resultantes en cada simulación. Opcional, visualizar
resultados en forma gráfica con Excel, (cantidades con barras y porcentajes con torta).*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int N=2;
const int N2=20;
const int N3=200;
const int M=10000;
int r;
int i;
main(){
	float dado1=0,dado2=0,dado3=0,dado4=0,dado5=0,dado6=0;
	float por1=0,por2=0,por3=0,por4=0,por5=0,por6=0;
	srand(time(NULL));
	//primera
	printf("\n Primera simulacion");
	for(i=1;i<=N;i++)
	{
		r=rand()%M;
		if(r<1666.67)
		 dado1++;
		 else
		if(r<3333.33)
		  dado2++;
		  else
		if(r<5000)
		  dado3++;
		  else
		if(r<6666.67)
		  dado4++;
		  else
		if(r<8333.33)
		  dado5++;
		  else
		  dado6++;	  
	}
	por1=(dado1*100)/N; por2=(dado2*100)/N; por3=(dado3*100)/N; por4=(dado4*100)/N; por5=(dado5*100)/N; por6=(dado6*100)/N;
	printf("\nLa cantidad de veces que salio el dado1 es %2.0f (%4.2f)",dado1,por1);
	printf("\nLa cantidad de veces que salio el dado2 es %2.0f (%4.2f)",dado2,por2);
	printf("\nLa cantidad de veces que salio el dado3 es %2.0f (%4.2f)",dado3,por3);
	printf("\nLa cantidad de veces que salio el dado4 es %2.0f (%4.2f)",dado4,por4);
	printf("\nLa cantidad de veces que salio el dado5 es %2.0f (%4.2f)",dado5,por5);
	printf("\nLa cantidad de veces que salio el dado6 es %2.0f (%4.2f)",dado6,por6);
	dado1=dado2=dado3=dado4=dado5=dado6=0;
	//segunda
		for(i=1;i<=N2;i++)
	{
			r=rand()%M;
		if(r<1666.67)
		 dado1++;
		 else
		if(r<3333.33)
		  dado2++;
		  else
		if(r<5000)
		  dado3++;
		  else
		if(r<6666.67)
		  dado4++;
		  else
		if(r<8333.33)
		  dado5++;
		  else
		  dado6++;	  
	}
	por1=(dado1*100)/N2; por2=(dado2*100)/N2; por3=(dado3*100)/N2; por4=(dado4*100)/N2; por5=(dado5*100)/N2; por6=(dado6*100)/N2;
	printf("\n");
	printf("\nSegunda simulacion");
	printf("\nLa cantidad de veces que salio el dado1 es %2.0f (%4.2f)",dado1,por1);
	printf("\nLa cantidad de veces que salio el dado2 es %2.0f (%4.2f)",dado2,por2);
	printf("\nLa cantidad de veces que salio el dado3 es %2.0f (%4.2f)",dado3,por3);
	printf("\nLa cantidad de veces que salio el dado4 es %2.0f (%4.2f)",dado4,por4);
	printf("\nLa cantidad de veces que salio el dado5 es %2.0f (%4.2f)",dado5,por5);
	printf("\nLa cantidad de veces que salio el dado6 es %2.0f (%4.2f)",dado6,por6);
	dado1=dado2=dado3=dado4=dado5=dado6=0;
    //tercara simulacion
    		for(i=1;i<=N3;i++)
	{
			r=rand()%M;
		if(r<1666.67)
		 dado1++;
		 else
		if(r<3333.33)
		  dado2++;
		  else
		if(r<5000)
		  dado3++;
		  else
		if(r<6666.67)
		  dado4++;
		  else
		if(r<8333.33)
		  dado5++;
		  else
		  dado6++;	  
	}
	por1=(dado1*100)/N3; por2=(dado2*100)/N3; por3=(dado3*100)/N3; por4=(dado4*100)/N3; por5=(dado5*100)/N3; por6=(dado6*100)/N3;
	printf("\n");
	printf("\nTercera simulacion");
	printf("\nLa cantidad de veces que salio el dado1 es %2.0f (%4.2f)",dado1,por1);
	printf("\nLa cantidad de veces que salio el dado2 es %2.0f (%4.2f)",dado2,por2);
	printf("\nLa cantidad de veces que salio el dado3 es %2.0f (%4.2f)",dado3,por3);
	printf("\nLa cantidad de veces que salio el dado4 es %2.0f (%4.2f)",dado4,por4);
	printf("\nLa cantidad de veces que salio el dado5 es %2.0f (%4.2f)",dado5,por5);
	printf("\nLa cantidad de veces que salio el dado6 es %2.0f (%4.2f)",dado6,por6);
    
	
	
	
	
}

