/*3 - Escreva um algoritmo que leia um vetor de tamanho n (informado pelo usuário)
e escreva a soma de todos os elementos de índice par.*/
#include<stdio.h>

main ()
{
	int x;
	
	printf ("Qual o tamanho desejado para o vetor?:");
	scanf("%i",&x);
	
	int valores[x];
	int soma=0;
	int i;
	
	for(i=0; i<x; i++)
	{
		printf ("Informe um valor para a posicao: %i\n",(i+1));
		scanf ("%i", &valores[i]);
		
		if (i % 2 == 0)
		{
			soma += valores[i];
		}
	}
	
	//impressao do vetor
	printf ("Conteudo do vetor\n");
	for (i=0;i<x;i++)
	{
		printf ("%i  ",valores[i]);
	}
	
	printf ("\nA soma dos elementos de incide par e: %i",soma);
}
