/*1 � Escreva um algoritmo que leia um vetor de 10 posi��es e imprima os
elementos que s�o maiores que 20, caso n�o houver nenhum elemento mostrar
uma mensagem de aviso ao usu�rio.*/
#include<stdio.h>
main()
{
	int valores[10];
	int i;
	int flag=0;
	
	for (i=0; i<10; i++)
	{
		printf ("Digite o valor da posicao: %i\n",(i+1));
		scanf("%i",&valores[i]);
	}
	for (i=0; i<10; i++);
	{
		if (valores[i] > 20)
		{
			if(flag==0)
			{
				printf ("Valores maiores que 20:\n");
			}
			printf ("%i\n",valores[i]);
			flag=1;
		}
	}
	if (flag==0)
	{
		printf ("Nenhum valor maior que 20 encontrado!");
	}
}
