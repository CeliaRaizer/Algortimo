/*11 - Fa�a um algoritmo para calcular e exibir o valor de uma presta��o em atraso.
prestacao_atrasada <- prestacao + (prestacao*(taxa/100)*num_dias_atraso), taxa
� o percentual de juros por dia, num_dias_atraso � o n�mero de dias em atraso e
presta��o � o valor da presta��o normal. O valor da presta��o, a taxa e o n�mero
de dias em atraso devem ser fornecidos pelo usu�rio.*/

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



