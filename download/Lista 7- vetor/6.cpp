/*6 - Faça um Programa que leia dois vetores com 10 elementos cada. Gere um 
terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos 
elementos intercalados dos dois outros vetores. */

#include <stdio.h>
main(){
	int v1 [10];
	int v2[10];
	int v3[20];
	int i;
	int j;
	
	for (i=0;i<10;i++)
	{
		v1[i]=0;
		v2[i]=0;
		printf ("Informe o valor da posicao %i do 1 vetor: ",(i+1));
		scanf ("%i",&v1[i]);
		
		printf ("Informe o valor da posicao %i do 2 vetor: ",(i+1));
		scanf ("%i",&v2[i]);
	}
	printf ("Vetor 1!!!\n");
	for (i=0;i<10;i++)
	{
		printf ("%i  ",v1[i]);
	}
	printf ("\nVetor 2!!!\n");
	for (i=0;i<10;i++)
	{
		printf ("%i  ",v2[i]);
	}
	printf ("\nVetor 3!!!\n");
	for (i=0;i<10;i++)
	{
		v3[j]=v1[i];
		j++;
		v3[j]=v2[i];
		j++;
	}
	for (i=0;i<20;i++)
	{
		printf ("%i  ",v3[i]);
	}
}
