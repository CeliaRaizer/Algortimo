/*11 - Faça um algoritmo para calcular e exibir o valor de uma prestação em atraso.
prestacao_atrasada <- prestacao + (prestacao*(taxa/100)*num_dias_atraso), taxa
é o percentual de juros por dia, num_dias_atraso é o número de dias em atraso e
prestação é o valor da prestação normal. O valor da prestação, a taxa e o número
de dias em atraso devem ser fornecidos pelo usuário.*/

#include<stdio.h>

main()
{
	float prestacao;
	float taxa;
	int diasAtraso;
	float prestAtrasada=0;
	
	printf("Qual o valor da prestacao:");
	scanf("%f",&prestacao);
	
	printf("Qual o valor da taxa de juros:");
	scanf("%f",&taxa);
	
	printf("Quantos dias atrasados:");
	scanf("%i",&diasAtraso);
	
	prestAtrasada= prestacao + (prestacao * taxa/100 * diasAtraso);
	
	printf ("O valor com atraso da prestacao e: %2.f",prestAtrasada);
}



