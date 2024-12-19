//17 - Escreva um programa que receba duas matrizes 3 x 3 como entrada e retorne 
//a soma dessas matrizes; 
#include<stdio.h>
main()
{
	int m1[3][3];
	int m2[3][3];
	int m3[3][3];
	int i;
	int j;
	
	printf ("Dados da matriz 1\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("Qual o valor da posicao [%i][%i]",i,j);
			scanf ("%i",&m1[i][j]);
		}
	}
	printf ("Dados da matriz 2\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("Qual o valor da posicao [%i][%i]",i,j);
			scanf ("%i",&m2[i][j]);
			
			m3[i][j]=m1[i][j]+m2[i][j];
		}
	}
	printf ("Dados da matriz 1\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("%i\t  ",m1[i][j]);
		}
		printf ("\n");
	}
		printf ("\nDados da matriz 2\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("%i\t  ",m2[i][j]);
		}
		printf ("\n");
	}
	printf ("A soma das 2 matrizes e:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("%i\t  ",m3[i][j]);
		}
		printf ("\n");
	}
}
