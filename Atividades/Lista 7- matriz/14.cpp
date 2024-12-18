/*14 - Ler uma matriz 5X5 e gerar outra em que cada elemento é o cubo do 
elemento respectivo na matriz original.*/

#include<stdio.h>
#include<math.h>
main()
{
	int matriz[5][5];
	int m2 [5][5];
	int i;
	int j;
	
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			printf ("Qual o valor da posicao [%i][%i]",i,j);
			scanf ("%i",&matriz[i][j]);
			
			m2[i][j]=pow(matriz[i][j],3);
		}
	}
	printf ("Matriz 1\n");
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			printf ("%i\t  ",matriz[i][j]);
		}
		printf ("\n");
	}
	printf ("\n Matriz 2\n");
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			printf ("%i\t  ",m2[i][j]);
		}
		printf ("\n");
	}
	
	
}
