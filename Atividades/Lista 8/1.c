/*1 - Crie uma funcÂo que receba um valor inteiro por parâmetro e 
verifique se esse valor se encontra em um vetor de 10 posicoes. 
Retorne verdadeiro caso o valor se encontre e falso, caso contrário.
Crie um algoritmo principal para testar a funcao criada.*/

#include<stdio.h>

int vetor[10]; //declarado globalmente
int i;

bool verifica(int valor)
{
	bool a= false;
	
	for(i=0;i<10;i++)
	{
		if (vetor[i]==valor)
		{
			a = true;
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
	
	if (verifica(busca))
	{
		printf ("O valor %i foi encontrado no vetor", busca);
	}
	else
	{
		printf ("O valor %i nao foi encontrado no vetor", busca);
	}
}
