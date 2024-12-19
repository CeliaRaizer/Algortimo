/*4 – Crie uma função que receba três números reais e retorne a média deles. Crie um algoritmo principal para testar a função criada.*/
#include<stdio.h>

float media(float n1, float n2, float n3)
{
	float total=0;
	
	total=(n1+n2+n3)/3;
	return total;
}

main()
{
	float n1;
	float n2;
	float n3;
	
	printf ("Digite o 1 valor:\n");
	scanf ("%f",&n1);
	
	printf ("Digite o 2 valor:\n");
	scanf ("%f",&n2);
	
	printf ("Digite o 3 valor:\n");
	scanf ("%f",&n3);
	
	printf ("A media dos numeros e: %.2f",media(n1,n2,n3));
}
