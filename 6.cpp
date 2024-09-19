/*Se tiene un grupo de 350 personas en el cual hay una probabilidad de un 38% de
mujeres, 33% de hombres y 29% de disidencias, a su vez, los grupos etarios son tres;
• menores, (menos de 18 años), con una probabilidad de 37%
• adultes, (de 18 a 65 años), con una probabilidad de 56%
• mayores, (más de 65 años), con una probabilidad de 7%
Crear un modelo de simulación teniendo en cuenta estos porcentajes, informe las
cantidades y los porcentajes que arroja la simulación, por género y grupo etario.
Realice 20 simulaciones y calcule la media y el porcentaje de los resultados de ellas.
Opcional, visualizar resultados en forma gráfica con Excel, (cantidades con barras y
porcentajes con torta).*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int N=350;
const int M=10000;
int r,r2,i,j;
main(){
	float m=0,h=0,d=0, tm=0, th=0,td=0,mem=0,adum=0,mayom=0,meh=0,aduh=0,mayoh=0,med=0,adud=0,mayod=0;
	float pormm=0,porma=0,pormma=0,porhm=0,porha=0,porhma=0,pordm=0,porda=0,pordma=0;
	float porm=0,porh=0,pord=0;
	float tmm=0,tma=0,tmma=0,thm=0,tha=0,thma=0,tdm=0,tda=0,tdma=0;
	float mtmm=0,mtma=0,mtmma=0,mthm=0,mtha=0,mthma=0,mtdm=0,mtda=0,mtdma=0;
	float mm=0,mh=0,md=0;
	srand(time(NULL));
	for(j=1;j<=20;j++){
	for(i=1;i<=N;i++)
	{
		r = rand()%M;
		r2 =rand()%M;
		if(r<3800){
		 m++;
		 if(r2<3700)
		  mem++;
		  else if(r2<9300)
		  adum++;
		  else
		  mayom++;
	    }
		else {
		
		if(r<7100){
		  h++;
		  if(r2<3700)
		  meh++;
		  else if(r2<9300)
		  aduh++;
		  else
		  mayoh++;
	     }
		  else{
		  d++;
		  if(r2<3700)
		  med++;
		  else if(r2<9300)
		  adud++;
		  else
		  mayod++;
	      }
	    }
	}
   }
	
    	tm=tm+m; th=th+h; td=td+d;
    	tmm=tmm+mem; tma=tma+adum; tmma=tmma+mayom;
    	thm=thm+meh; tha=tha+aduh; thma=thma+mayoh;
    	tdm=tdm+med; tda=tda+adud; tdma=tdma+mayod;
	printf("\nLa cantidad de mujeres %2.0f",m);
	printf("\nLa cantidad de hombres %2.0f",h);
	printf("\nLa cantidad de disidencia %2.0f",d);
	printf("\n");
	printf("\nLa cantidad de mujeres menores %2.0f",mem);
	printf("\nLa cantidad de mujeres adultas %2.0f",adum);
	printf("\nLa cantidad de mujeres mayores %2.0f",mayom);
	printf("\n");
	printf("\nLa cantidad de hombres menores %2.0f",meh);
	printf("\nLa cantidad de hombres adultos %2.0f",aduh);
	printf("\nLa cantidad de hombres mayor %2.0f",mayoh);
	printf("\n");
	printf("\nLa cantidad de disidencia menores %2.0f",med);
	printf("\nLa cantidad de disidencia adultos %2.0f",adud);
	printf("\nLa cantidad de disidencia mayor %2.0f",mayod);
	printf("\n");
	porm=(m*100)/(N*20); porh=(h*100)/(N*20); pord=(d*100)/(N*20);
	pormm=(mem*100)/(N*20); porma=(adum*100)/(N*20); pormma=(mayom*100)/(N*20); 
	porhm=(meh*100)/(N*20); porha=(aduh*100)/(N*20); porhma=(mayoh*100)/(N*20);
	pordm=(med*100)/(N*20); porda=(adud*100)/(N*20); pordma=(mayod*100)/(N*20);     
	printf("\nEl porcentaje de mujeres %4.2f (Menor %4.2f) (Adultos %4.2f) (Mayores %4.2f)",porm,pormm,porma,pormma);
	printf("\nEl porcentaje de hombres %4.2f (Menor %4.2f) (Adultos %4.2f) (Mayores %4.2f)",porh,porhm,porha,porhma);
	printf("\nEl porcentaje de disidencia %4.2f (Menor %4.2f) (Adultos %4.2f) (Mayores %4.2f)",pord,pordm,porda,pordma);
   
   mm=tm/20; mh=th/20; md=td/20;
   mtmm=tmm/20; mtma=tma/20; mtmma=tmma/20;
   mthm=thm/20; mtha=tha/20; mthma=thma/20;
   mtdm=tdm/20; mtda=tda/20; mtdma=tdma/20;
   printf("\n");
   printf("\n La media de mujeres es %4.2f  (Menor %4.2f) (Adultos %4.2f) (Mayores %4.2f)",mm,mtmm,mtma,mtmma);
   printf("\nLa media de hombre es %4.2f  (Menor %4.2f) (Adultos %4.2f) (Mayores %4.2f)",mh,mthm,mtha,mthma);
   printf("\nLa media de desidencia es %4.2f  (Menor %4.2f) (Adultos %4.2f) (Mayores %4.2f)",md,mtdm,mtda,mtdma);
   
   
   
}
