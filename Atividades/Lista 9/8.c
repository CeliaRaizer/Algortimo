/*8 – Faça um programa que realize a leitura dos seguintes dados relativos a um
conjunto de alunos: Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2.
Considere uma turma de 10 alunos. Após ler todos os dados digitados, e depois
de armazená-los em um vetor de estrutura, exibir na tela a listagem final dos
alunos com as suas respectivas médias finais (use uma média ponderada: Nota1
com peso=1.0 e Nota2 com peso=2.0).*/
#include<stdio.h>
#include<string.h>
#define MAX 2 //para 2 alunos

struct alunos
{
	int matricula;
	char nome[20];
	int codDisciplina;
	float nota1;
	float nota2;
};

struct alunos a[MAX];
int i;

void recebeDados()
{
	for(i=0;i<MAX;i++)
	{
		printf ("Qual a matricula do aluno %i:\n",(i+1));
		scanf ("%i",&a[i].matricula);
		
		printf ("Qual o nome do aluno %i?:\n",(i+1));
		scanf (" %[^\n]s",&a[i].nome);
		
		printf ("Qual o codigo da disciplina:\n");
		scanf ("%i", &a[i].codDisciplina);
		
		printf ("Qual a nota 1 de %s?:\n",a[i].nome);
		scanf ("%f",&a[i].nota1);
		
		printf ("Qual a nota 2 de %s?:\n",a[i].nome);
		scanf ("%f",&a[i].nota2);
	}
}

float calculaMedia(int i)
{
	return (a[i].nota1+(a[i].nota2*2))/3.0;
}
void imprime()
{
	for(i=0;i<MAX;i++)
	{
		printf ("\nDados do aluno %i:\n",(i+1));
		printf ("Matricula: %i\n",a[i].matricula);
		printf ("Nome: %s \n",a[i].nome);
		printf ("Codigo da disciplina:%i\n",a[i].codDisciplina);
		printf ("Media: %.2f\n",calculaMedia(i));
	}
}

main()
{
	recebeDados();
	imprime();
}

