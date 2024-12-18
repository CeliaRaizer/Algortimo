/*4 - Ler do teclado 12 números inteiros e armazená-los em um vetor N. Em
seguida, copiar os elementos pares divisíveis por 3 para o vetor X e os ímpares
divisíveis por 5 para o vetor Y.*/
#include <stdio.h>
main()
{
	int n[12];
	int x[12];
	int y[12];
	int i;
	
	for (i=0; i<12; i++)
	{
		printf ("Digite o valor da posicao:%i\n",(i+1));
		scanf ("%i",&n[i]);
		x[i]=0;
		y[i]=0;
		
		if ((n[i]%2==0) && (n[i]%3==0))
		{
			x[i]=n[i];
		}
		if ((n[i]%2==1) && (n[i]%5==0))
		{
			y[i]=n[i];
		}
	}
	
	printf ("Vetor N \n");
	for (i=0; i<12; i++)
	{
		printf ("%i  ",n[i]);
	}
	
	printf ("\n Vetor X\n");
	for (i=0; i<12; i++)
	{
		if (x[i] !=0)
		{
			printf ("%i  ",x[i]);
		}
		
	}
	printf ("\n Vetor Y \n");
	for (i=0; i<12; i++)
	{
		if (y[i] !=0)
		{
		printf ("%i  ",y[i]);
		}
	}
}
