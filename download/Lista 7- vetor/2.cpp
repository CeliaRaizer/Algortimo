/*2 - Escreva um algoritmo que leia um vetor de 20 posi��es e escreva a posi��o de
cada elemento igual a 10 dentro dele.*/

#include<stdio.h>
main ()
{
	int vetor[20];
	int i;
	
	for (i=0; i<20; i++)
	{
		printf ("Digite um valor da posicao:%i\n",(i+1));
		scanf ("%i",&vetor[i]);
		
	}
	
	printf ("A posicao dos elementos iguais a 10 e:\n");
	for (i=0; i<20; i++)
	{
		if (vetor[i]==10)
		{
			printf ("%i  ",i);
		}
	}
}

