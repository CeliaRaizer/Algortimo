//1 – Fazer um agoritmo para calcular a area de um cilindro
#include <stdio.h>
#define PI 3.14

main()
{
	float raio;
	float altura;
	float area=0;
	
	printf("Qual o valor do raio:\n");
	scanf("%f",&raio);
	
	printf("Qual o valor da altura:\n");
	scanf("%f",&altura);
	
	area = 2 * PI * raio * altura;
	
	printf ("A area do cilindro e: %.2f",area);
}


