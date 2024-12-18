/*11 – Escreva um algoritmo para armazenar valores inteiros em uma matriz (5,5). A
seguir, calcular a média dos valores pares contidos na matriz e escrever seu
conteúdo.*/
#include<stdio.h>
#include <stdlib.h>

main()
{
	int matriz[5][5];
	int i;
	int j;
	int soma=0;
	int cont=0;
	
	for (i=0;i<5;i++)//linhas
	{
		for (j=0;j<5;j++)//colunas
		{
			//printf ("Digite um valor para a coordenada [%i][%i]",i,j);
			//scanf ("%i",&matriz[i][j]);
			
			matriz[i][j] = rand()%100;//gera valores pseudoaleatorios entre 0 e 99;
		}
	}
	//impressao
	for (i=0;i<5;i++)//linhas
	{
		for (j=0;j<5;j++)//colunas
		{
			printf ("%i\t  ",matriz[i][j]);// \t tabulacao - espaco
		}
		printf ("\n");
	}
	
	//media entre os pares
		for (i=0;i<5;i++)//linhas
	{
		for (j=0;j<5;j++)//colunas
		{
			if (matriz[i][j]%2==0)
			{
				soma+= matriz[i][j];
				cont++;
			}
		}
	}
	
	printf ("A media entre os pares e: %.2f",(float)soma/cont);
}
