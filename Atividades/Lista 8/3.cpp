/*3 - Crie uma função que receba por parâmetro um número inteiro e verifique quantas 
vezes esse valor se encontra em um vetor (declarado globalmente). Retorne a 
quantidade de vezes que o valor se encontra no vetor. Crie um algoritmo principal 
para testar a função criada.*/

#include<stdio.h>

int vetor[10];
int i;

int verifica(int valor)
{
	int x=0;
	for (i=0;i<10;i++)
	{
		if (vetor[i]==valor)
		{
			x++;
		}
	}
	return x;
}

main ()
{
	int busca;
	
	for (i=0;i<10;i++)
	{
		printf ("Informe o valor da posicao %i:\n",(i+1));
		scanf ("%i",&vetor[i]);
	}
	printf ("Qual valor vamos verificar?:\n");
	scanf ("%i",&busca);
	
	printf ("O valor %i foi encontrado %i vezes no vetor!",busca,verifica(busca));
	
}
