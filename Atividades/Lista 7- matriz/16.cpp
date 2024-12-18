/*16 - Crie uma matriz 7X8 onde cada elemento é a soma dos índices de sua
posição dentro da matriz;*/

#include<stdio.h>
#define li 7
#define co 8

main()
{
	int m[7][8];
	int i;
	int j;
	
	for (i=0;i<7;i++)
	{
		for (j=0;j<8;j++)
		{
			m[i][j] = i+j;
			printf ("%i\t",m[i][j]);
		}
		printf ("\n");
	}
}

