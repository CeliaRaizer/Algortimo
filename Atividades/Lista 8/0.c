/*1 - Crie uma funcÂo que receba um valor inteiro por parâmetro e 
verifique se esse valor se encontra em um vetor de 10 posicoes. 
Retorne verdadeiro caso o valor se encontre e falso, caso contrário.
Crie um algoritmo principal para testar a funcao criada.*/

#include<stdio.h>

int vetor[10]; //declarado globalmente
int i;

int verifica(int valor)
{
	int a=0;
	
	for(i=0;i<10;i++)
	{
		if (vetor[i]==valor)
		{
			a++;
		}
	}
	return a;
}

main()
{
	int busca;
	
	for (i=0;i<10;i++)
	{
		printf ("Digite um valor para a posicao %i:\n",(i+1));
		scanf ("%i", &vetor[i]);
	}
	
	printf ("Qual o valor para buscar:\n");
	scanf ("%i",&busca);
	
		printf ("O valor %i foi encontrado %i vezes no vetor", busca, verifica(busca));
}
	
