/*2 – Faça um programa em C que leia nome, sexo e o salário de um conjunto de
pessoas. Após a digitação de todas as pessoas, informar os dados daquela que
ganha o maior salário.*/

#include<stdio.h>
#define MAX 3

struct pessoa
{
	char nome[50];
	char sexo;
	float salario;	
};

struct pessoa p[MAX];
int i;

void recebeDados() //void n tem retorno
{
	for(i=0;i<MAX;i++)
	{
		printf ("Digite o nome da pessoa %i\n",(i+1));
		scanf (" %[^\n]s", &p[i].nome);
		
		printf ("Digite o sexo da pessoa %i (M/F)\n",(i+1));
		scanf (" %c", &p[i].sexo);
		
		printf ("Digite o salario da pessoa %i\n",(i+1));
		scanf ("%f",&p[i].salario);		
	}
}
void imprimeMaior(int iMaior)
{
	printf ("Dados da pessoa com o maior salario\n");
	printf ("Nome: %s\n",p[iMaior].nome);
	printf ("Sexo: %c\n",p[iMaior].sexo);
	printf ("Salario: R$ %.2f\n",p[iMaior].salario);
}
void verificaMaior()
{
	int iMaior = 0;
	float maior = -1;
	
	for (i=0;i<MAX;i++)
	{
		if (p[i].salario > maior)
		{
			maior = p[i].salario;
			iMaior = i;
		}
	}
	imprimeMaior(iMaior);
}

main ()
{
	recebeDados();
	
	verificaMaior();
}

