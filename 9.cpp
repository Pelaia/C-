/*Un apostador tiene 10 fichas de chance en la ruleta. Va a realizar la misma apuesta
cinco veces seguidas, la apuesta es impares y tercera docena. Mostrar por pantalla con
cuantas fichas terminó el apostador y emitir un cartel que aclare si ganó, empató o perdió.
Repetir la simulación 22 veces. Informe cantidades y totales.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int M=11250;
const int CANT=22;//37//13-24
int r,i,j;
main(){
	float par=0,impar=0,fichas,s;
	float cero;
	float paressolidos=0,suma=0,porcs=0;
	float porcsolidos;
	srand(time(NULL));
	for(i=1;i<=CANT;i++)
	{
		fichas=10;
		for(j=1;j<5;j++)
		{
		fichas=fichas-2;
	 	r = rand()%M;
	 	if(r<500)
	 	cero++;
	  	else if(r<1000)
	 	par++;
	 	else if(r<1500)
	 	impar++;
	 	else if(r<2000)
	 	par++;
	 	else if(r<2500)
	 	impar++;
	 	else if(r<3000)
	 	par++;
	 	else if(r<3500)
	 	impar++;
	 	else if(r<4000)
	 	par++;
	 	else if(r<4500)
	 	impar++;
	 	else if(r<5000)
	 	par++;
	 	else if(r<5500)
	 	impar++;
	 	else if(r<6000)
	 	par++;
	 	else if(r<6500)
	 	impar++;
	 	else if(r<7000){
	    par++;
	    s++;}
	 	else if(r<7500){
	 	impar++;
	 	s++;}
	 	else if(r<8000){
	 	par++;
	 	s++;}
	 	else if(r<8500){
	 	impar++;
	 	s++;}
	 	else if(r<9000){
	 	par++;
	 	s++;}
	 	else if(r<9500){
	 	impar++;
	 	s++;}
	 	else if(r<10000){
	 	par++;
	 	s++;}
	 	else if(r<10500){
	 	impar++;
	 	s++;}
	 	else if(r<11000){
	 	par++;
	 	s++;}
	 	else if(r<11500){
	 	impar++;
	 	s++;}
	 	else if(r<12000){
	 	par++;
	 	s++;}
	 	else if(r<12500){
	 	impar++;
	 	s++;}
	 	else if(r<13000)
	 	par++;
	 	else if(r<13500)
	 	impar++;
	 	else if(r<14000)
	 	par++;
	 	else if(r<14500)
	 	impar++;
	 	else if(r<15000)
	 	par++;
	 	else if(r<15500)
	 	impar++;
	 	else if(r<16000)
	 	par++;
	 	else if(r<16500)
	 	impar++;
	 	else if(r<17000)
	 	par++;
	 	else if(r<17500)
	 	impar++;
	 	else if(r<18000)
	 	par++;
	 	else 
	 	impar++;
	 	
	 	if(r%2==1) fichas+=2;
		if(r>=13000 && r<=18500) fichas+=3;
		
    }
	}
	printf("\n \nTermino con %d fichas",fichas);
		if(fichas==10)
		{
			printf("\nEmpato");
			//empato++;
		}else if(fichas>10)
		{
			printf("\nGano");
			//gano++;
		}
		else 
		printf("\nPerdio");
		//perdio++;
	
}
