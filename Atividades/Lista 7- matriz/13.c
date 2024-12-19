/*13 - Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas: 
a) da linha 4 de M. 
b) da coluna 2 de M. 
c) da diagonal principal. 
d) da diagonal secundária. 
e) de todos os elementos da matriz. 
f) Escreva estas somas e a matriz.*/

#include<stdio.h>
main()
{
	int m[5][5];
	int i=0;
	int j=0;
	int l4=0;
	int c2=0;
	int dp=0;
	int ds=0;
	int soma=0;
	
	for (i=0;i<5;i++) //linhas
	{
		for (j=0;j<5;j++) //colunas
		{
			printf ("Qual o valor da posicao [%i][%i]",i,j);
			scanf ("%i",&m[i][j]);	
			
			if (i==3)
			{
				l4+=m[i][j];
			}
			if (j==1)
			{
				c2+=m[i][j];
			}
			if (i==j)
			{
				dp+=m[i][j];
			}
			if (i+j==4)
			{
				ds+=m[i][j];
			}
			soma+=m[i][j];
		}	
	}
	printf ("Dados da matriz \n");
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			printf ("%i\t  ",m[i][j]);	
		}	
		printf ("\n");
	}
	printf ("A soma da linha 4 e: %i\n",l4);
	printf ("A soma da coluna 2 e: %i\n",c2);
	printf ("A soma da diagonal principal e: %i\n",dp);
	printf ("A soma da diagonal secundaria e: %i\n",ds);
	printf ("A soma de todos os elementos da matriz e:%i",soma);
		
}
