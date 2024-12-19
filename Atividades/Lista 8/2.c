/*2 – Crie uma função que receba um valor por parâmetro um nome (char) e verifique 
se esse valor se encontra em um vetor (também de char, declarado globalmente). 
Retorne verdadeiro caso o valor se encontre e falso, caso contrário. Crie um 
algoritmo principal para testar a função criada.*/
#include<stdio.h>
 
char n [5];
int i;

bool verifica(char nome)
{
	bool a= false;
	
	for (i=0;i<5;i++)
	{
		if (n[i]==nome)
		{
			a=true;
		}
	}
	return a;
}

main()
{
	char busca;
	int i=0;
	for (i=0;i<5;i++)
	{
		printf ("Qual o nome da %i posicao?:\n",(i+1));
		scanf (" %s",&n[i]);
	}
	
	printf ("Qual o nome deseja buscar?:\n");
	scanf (" %s",&busca);
	
	if (verifica(busca))
	{
		printf ("Verdadeiro \nO nome %s foi encontrado no vetor!",busca);
	}
	else
	{
		printf ("falso \n O nome %c nao foi encontrado no vetor!",busca);
	}
	return 0;
}
