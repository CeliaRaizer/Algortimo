//2 – Faça um algoritmo para calcular a área de um cubo retangular
//((h*l)+(h*b)+(l*b))*2

#include <stdio.h>

main()
{
	float area=0;
	float altura;
	float lado;
	float base;
	
	printf("Qual a altura do cubo:\n");
	scanf("%f",&altura);
	
	printf("Qual o lado do cubo:\n");
	scanf("%f",&lado);
	
	printf("Qual a base do cubo:\n");
	scanf("%f",&base);
	
	area=((altura*lado)+(altura*base)+(lado*base))*2;
	
	printf ("A area do cubo e: %.2f",area);
	
}
