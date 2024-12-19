/*12 - Escrever um algoritmo para ler uma matriz (7,4) contendo valores inteiros 
(supor que os valores são distintos). Após, encontrar o menor valor contido na 
matriz e sua posição.*/

#include<stdio.h>
#include<limits.h>
main()
{
	int matriz[7][4];
	int menor=INT_MAX;
	int pos;
	int pos2;
	int i;
	int j;
	
	for (i=0;i<7;i++)
	{
		for (j=0;j<4;j++)
		{
			printf ("Digite o valor da posicao [%i][%i]",i,j);
			scanf ("%i",&matriz[i][j]);
			
			if (matriz[i][j]<menor)
			{
				menor=matriz[i][j];
				pos=i;
				pos2=j;
			}
		}
	}
	printf ("Dados da matriz! \n");
	for (i=0;i<7;i++)
	{
		for (j=0;j<4;j++)
		{
			printf ("%i\t ",matriz[i][j]);
		}
		printf ("\n");
	}
	printf ("O menor valor da matriz e %i e esta na posicao [%i][%i]",menor,pos, pos2);
}
