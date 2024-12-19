/*9 - Faça um programa que leia os dados de 10 alunos (Nome, matricula, Media
Final), armazenando em um vetor. Uma vez lidos os dados, divida estes dados em
2 novos vetores, o vetor dos aprovados e o vetor dos reprovados, considerando a
média mínima para a aprovação como sendo 6.0. Exibir na tela os dados do vetor
de aprovados, seguido dos dados do vetor de reprovados.*/
#include<stdio.h>
#include<string.h>
#define MAX 4

struct alunos
{
	char nome[20];
	int matricula;
	float media;
};

struct alunos a[MAX];
struct alunos p[MAX];
struct alunos r[MAX];
int i;

inicializa()
{
	for(i=0;i<MAX;i++)
	{
		p[i].matricula=0;
		r[i].matricula=0;
	}
}

recebeDados()
{
	for (i=0;i<MAX;i++)
	{
		printf ("Qual o nome do aluno %i \n",(i+1));
		scanf (" %[^\n]s", &a[i].nome);
		
		printf ("Qual a matricula de %s:\n",a[i].nome);
		scanf ("%i", &a[i].matricula);
		
		printf ("Qual a media de %s:\n",a[i].nome);
		scanf ("%f",&a[i].media);
	}
}

classifica()
{
	inicializa();
	for(i=0;i<MAX;i++)
	{
		if (a[i].media >= 6)
		{
			strcpy(a[i].nome, a[i].nome);
			p[i].matricula=a[i].matricula;
			p[i].media=a[i].media;
		}
		else
		{
			strcpy(r[i].nome, r[i].nome);
			r[i].matricula=a[i].matricula;
			r[i].media=a[i].media;
		}
	}
}

imprime()
{
	int flag=0;
	printf("Alunos Aprovados:\n");
	for (i=0;i<MAX;i++)
	{
		if (p[i].matricula != 0)
		{
			printf ("Nome: %s \n",p[i].nome);
			printf ("Matricula: %i\n",p[i].matricula);
			printf ("Media: %.2f\n",p[i].media);
			flag=1;
		}
	}
	if (flag==0)
	{
		printf ("Nenhum aluno aprovado!\n");
	}
	flag=0;
	
	printf("Alunos reprovados:\n");
	for (i=0;i<MAX;i++)
	{
		if (r[i].matricula != 0)
		{
			printf ("Nome: %s \n",r[i].nome);
			printf ("Matricula: %i\n",r[i].matricula);
			printf ("Media: %.2f\n",r[i].media);
			flag=1;
		}
	}
	if (flag==0)
	{
		printf ("Nenhum aluno reprovado!\n");
	}
}

main()
{
	recebeDados();
	classifica();
	imprime();
}
