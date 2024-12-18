/*7 - Escreva um programa que receba dois vetores como entrada, some os 
elementos correspondentes e armazene o resultado em um terceiro vetor. Por 
exemplo: [1, 2, 3] + [4, 5, 6] = [5, 7, 9]. */
#include<stdio.h>

main()
{
	int tam;
	printf ("Qual o tamanho dos vetores?:\n");
	scanf ("%i",&tam);
	int v1[tam];
	int v2[tam];
	int v3[tam];
	int i;
	
	for (i=0;i<tam;i++)
	{
		printf ("Qual o valor da posicao %i do 1 vetor?: ",(i+1));
		scanf ("%i",&v1[i]);
		
		printf ("Qual o valor da posicao %i do 2 vetor?: ",(i+1));
		scanf ("%i",&v2[i]);
	}
	printf ("Vetor 1!\n");
	for (i=0;i<tam;i++)
	{
		printf ("%i  ",v1[i]);
	}
	printf ("\nVetor 2!\n");
	for (i=0;i<tam;i++)
	{
		printf ("%i  ",v2[i]);
	}
	for (i=0;i<tam;i++)
	{
		v3[i]=v1[i]+v2[i];
	}
	printf ("\nVetor 3!\n");
	for (i=0;i<tam;i++)
	{
		printf ("%i  ",v3[i]);
	}
}
