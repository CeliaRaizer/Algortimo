//4 – Faça um algoritmo para calcular a área de um cone(pi*r*h)

#define PI 3.14
#include<stdio.h>

main()
{
	float area=0;
	float raio;
	float alt;
	
	printf("Qual o raio do cone:\n");
	scanf("%f",&raio);
	
	printf("Qual a altura do cone:\n");
	scanf("%f",&alt);
	
	area=PI*raio*alt;
	
	printf ("A area do cone e: %.2f",area);
}
