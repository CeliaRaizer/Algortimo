//3 – Faça um algoritmo para calcular a área superficial de uma esfera (4*pi*r^2)
#include <stdio.h>
#include <math.h>
#define PI 3.14

main()
{
	float raio;
	float area=0;
	
	printf ("Qual o raio da esfera:");
	scanf ("%f", &raio);
	
	area= 4 * PI * pow(raio, 2);//pow=potencia
	
	printf("A area da esfera da raio %.2f e: %.2f", raio, area);
}
