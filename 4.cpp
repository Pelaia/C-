/*Simular la cantidad de veces que se deben arrojar 5 dados al mismo tiempo para
conseguir una generala servida. Realice 5 simulaciones y calcule el promedio.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int N=5;
const int M=10000;
const int cant=5;
int r;
int flag,generala,i,j,k,cont;
int dado[N], tirada[N],cantidad[cant];
float prom;
main()
{
	srand(time(NULL));
	
	for(k=0;k<cant;k++)
	{
		flag=0; cont=0;
		while(flag==0)
		{
			cont++;
			generala=0;
			for(i=0;i<N;i++)
				tirada[i]= rand()%M;
			for(i=0;i<N;i++)
			{
				if(tirada[i]<=1666.67) dado[i]=1;
				else if(tirada[i]<=3333.33) dado[i]=2;
				else if(tirada[i]<=5000) dado[i]=3;
				else if(tirada[i]<=6666.67) dado[i]=4;
				else if(tirada[i]<=8333.33) dado[i]=5;
				else dado[i]=6;
			}
			printf("\n tirada %d :",cont);
			for(i=0;i<N;i++)
			{ 
			printf("\t %d",dado[i]);
			}
			printf("\n");
			
			i=0; j=1;
			do{
				if(dado[i]==dado[j])
				 generala=1;
				 else
				 generala=0;
				 j++;
			}
			while((generala==1)&&(j<N));
			if(generala==1)
			flag=1;
		}
		printf("La generala servida salio en la tirada %d \n",cont);
		system("pause");
	}
	  prom=cont/N;
	  printf("El promedio es %4.2f \n",prom);
}


