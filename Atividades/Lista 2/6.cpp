//6 – Faça um algoritmo para calcular o volume de uma esfera(4/3*pi*r^3)

#include<stdio.h>
#include<math.h>
#define PI 3.14

main()
{
	float raio;
	float vol;
	
	printf("Qual o raio da esfera:\n");
	scanf("%f",&raio);
	
	vol=4/3*PI*pow(raio,3);
	
	printf ("O volume da esfera e:%2.f",vol);
}
