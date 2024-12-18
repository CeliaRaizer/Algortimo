/*5 - Crie um procedimento que receba por parâmetro um número inteiro e remova 
todas as ocorrências desse valor de um vetor declarado globalmente.*/
#include<stdio.h>
#define MAX 10

int vetor[MAX];
int i;
int cont=MAX;

void recebe()
{
	int j;
	int valor;
	printf ("Qual valor deseja remover?\n");
	scanf ("%i",&valor);
	
	for (i=0;i<MAX;i++)
	{
		if (valor==vetor[i])
		{
			for (j=i;j<MAX-1;j++)
			{
				vetor[j]=vetor[j+1];
			}
			j--;
			cont--;
		}
	}
	for(i=0;i<cont;i++)
	{
		printf ("%i  ",vetor[i]);
	}
}
main ()
{
	for (i=0;i<MAX;i++)
	{
		printf ("Qual o valor da posicao %i\n",(i+1));
		scanf ("%i",&vetor[i]);
	}
	recebe();
}
