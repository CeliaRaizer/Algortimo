/*receber uma matriz 5x5 e para cada linha encontrar o maior valor e 
multiplicar todos os outros elementos por esse valor na referida linha*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int matriz [5][5];
	int i;
	int j;
	int maior = -1;
	
	printf ("Matriz original:\n");
	for (i=0; i<5; i++)
	{
		for (j=0; j<5; j++)
		{
			matriz[i][j] = rand()%10;
			printf ("%i\t",matriz[i][j]);
		}
		printf ("\n");
	}
	
	//multiplicacao pelo maior valor da linha
	for (i=0; i<5; i++)
	{
		//descobrir o maior
		for (j=0; j<5; j++)
		{
			if (matriz[i][j] > maior)
			{
				maior = matriz[i][j];
			}
		}
		//multiplicar pelo maior
		for (j=0;j<5;j++)
		{
			matriz[i][j] *= maior;
		}
		maior = -1;
	}
	
	printf ("Matriz final:\n");
	for (i=0; i<5; i++)
	{
		for (j=0; j<5; j++)
		{
			printf ("%i\t",matriz[i][j]);
		}
		printf ("\n");
	}
}
