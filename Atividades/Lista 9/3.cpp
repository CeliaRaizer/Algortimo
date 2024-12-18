/*3 – Considerando o registro de um produto contendo as informações: descrição e 
valor. Fazer um programa que, dado o registro de 10 produtos, exiba-os na ordem 
inversa em que foram digitados.*/

#include<stdio.h>
#define MAX 3

struct produto
{
	char desc[100];
	float valor;
};

struct produto p[MAX];
int i;

void recebeDados()
{
	for (i=0;i<MAX;i++)
	{
		printf ("Qual a descricao do Produto?:\n");
		scanf (" %[^\n]s",&p[i].desc);
		
		printf ("Qual o valor do produto?:\n");
		scanf ("%f",&p[i].valor);
	}
}
void imprimeinverso()
{
	for(i=0;i<MAX;i++)
	{
		printf ("Produto: %s\n",p[2-i].desc);
		printf ("Valor: %.f\n",p[2-i].valor);
	}
}
main()
{
	recebeDados();
	
	printf ("Ordem Normal:\n");
	for (i=0;i<MAX;i++)
	{
		printf ("Produto: %s\n",p[i].desc);
		printf ("Valor: %.f\n",p[i].valor);
	}
	printf ("\n Ordem inversa\n");
	imprimeinverso();
}
