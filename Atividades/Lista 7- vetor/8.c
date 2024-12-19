/*8 - Desenvolva um programa que encontre o maior elemento em um vetor de 
números inteiros e mostre sua posição.*/
#include <stdio.h>

main ()
{
	int tam;
	printf ("Qual o tamanho do vetor ?\n");
	scanf ("%i",&tam);
	
	int vetor[tam];
	int i;
	int maior=0;
	int pos=0;
	
	for (i=0;i<tam;i++)
	{
		printf ("Qual o valor da posicao %i?: ",(i+1));
		scanf ("%i",&vetor[i]);
		
		if (vetor[i]>maior)
		{
			maior=vetor[i];
			pos=i;
		}
	}
	printf ("Dados do vetor!\n");
		for (i=0;i<tam;i++)
	{
		printf ("%i  ",vetor[i]);
	}
	printf ("\nO maior elemento do vetor e %i e esta na posicao %i",maior,(pos+1));
	
}
