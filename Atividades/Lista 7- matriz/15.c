/*15 - Faça um algoritmo para ler uma matriz de 3X4 de números reais e depois 
exibir o elemento do canto superior e do canto inferior esquerdo.*/
#include<stdio.h>
main ()
{
	int m[3][4];
	int cs;
	int ci;
	int i;
	int j;
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf ("Qual o valor da posicao [%i][%i]",i,j);
			scanf ("%i",&m[i][j]);
			
			if (i==0 && j==0)
			{
				cs=m[i][j];
			}
			if (i==2 && j==0)
			{
				ci=m[i][j];
			}
		}
	}
	printf ("Dados da matriz!\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf ("%i\t  ",m[i][j]);
		}
		printf ("\n");
	}
	printf ("O elemento do canto superior e [%i]\n",cs);
	printf ("O elemento do canto inferior esquerdo e [%i]\n",ci);
}
