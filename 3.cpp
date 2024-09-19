/*Simular que se arrojan dos dados 200 veces, ambos están sin cargar. Calcular la suma
que arrojan los dados en cada tirada (de 2 a 12). Informar cantidades y porcentajes de los
valores resultantes. Si se les da a elegir 2 combinaciones de dados para acertar la mayor
cantidad de veces, ¿cuál elegirían? Opcional, visualizar resultados en forma gráfica con
Excel, (cantidades con barras y porcentajes con torta).*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int N=200;
const int M=10000;
int r1,r2;
int i;
main(){
	float dado1,dado2;
	float por2,por3,por4,por5,por6,por7,por8,por9,por10,por11,por12;
	float suma2,suma3,suma4,suma5,suma6,suma7,suma8,suma9,suma10,suma11,suma12;
	
	
	int cant;
	srand(time(NULL));
	for(i=1;i<=N;i++)
	{
		r1=rand()%M;
		if(r1<1666.67)
		 dado1=1;
		 else
		if(r1<3333.33)
		  dado1=2;
		  else
		if(r1<5000)
		  dado1=3;
		  else
		if(r1<6666.67)
		  dado1=4;
		  else
		if(r1<8333.33)
		  dado1=5;
		  else
		  dado1=6;	  
	
		r2=rand()%M;
		if(r2<1666.67)
		 dado2=1;
		 else
		if(r2<3333.33)
		  dado2=2;
		  else
		if(r2<5000)
		  dado2=3;
		  else
		if(r2<6666.67)
		  dado2=4;
		  else
		if(r2<8333.33)
		  dado2=5;
		  else
		  dado2=6;	
		   
	cant=dado1+dado2;
	switch(cant)
	{
		case 2:{suma2++;break;}
		case 3:{suma3++;break;}
		case 4:{suma4++;break;}
		case 5:{suma5++;break;}
		case 6:{suma6++;break;}
		case 7:{suma7++;break;}
		case 8:{suma8++;break;}
		case 9:{suma9++;break;}
		case 10:{suma10++;break;}
		case 11:{suma11++;break;}
		case 12:{suma12++;break;}
	} 
	}
    por2=(suma2*100)/N; por3=(suma3*100)/N; por4=(suma4*100)/N; por5=(suma5*100)/N; por6=(suma6*100)/N; por7=(suma7*100)/N; por8=(suma8*100)/N; por9=(suma9*100)/N; por10=(suma10*100)/N; por11=(suma11*100)/N; por12=(suma12*100)/N;
	
	printf("\nLa cantidad de veces que las suma de los dados dio2 es %2.0f (%4.2f)",suma2,por2);
	printf("\nLa cantidad de veces que las suma de los dados dio3 es %2.0f (%4.2f)",suma3,por3);
	printf("\nLa cantidad de veces que las suma de los dados dio4 es %2.0f (%4.2f)",suma4,por4);
	printf("\nLa cantidad de veces que las suma de los dados dio5 es %2.0f (%4.2f)",suma5,por5);
	printf("\nLa cantidad de veces que las suma de los dados dio6 es %2.0f (%4.2f)",suma6,por6);
	printf("\nLa cantidad de veces que las suma de los dados dio7 es %2.0f (%4.2f)",suma7,por7);
	printf("\nLa cantidad de veces que las suma de los dados dio8 es %2.0f (%4.2f)",suma8,por8);
	printf("\nLa cantidad de veces que las suma de los dados dio9 es %2.0f (%4.2f)",suma9,por9);
	printf("\nLa cantidad de veces que las suma de los dados dio10 es %2.0f (%4.2f)",suma10,por10);
	printf("\nLa cantidad de veces que las suma de los dados dio11 es %2.0f (%4.2f)",suma11,por11);
	printf("\nLa cantidad de veces que las suma de los dados dio12 es %2.0f (%4.2f)",suma12,por12);
	
	

}
