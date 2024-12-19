/*4 - Criar uma estrutura chamada DadosAluno, que  armazena a média e idade de 
um aluno. Na função main: criar uma variável que é um vetor da estrutura 
DadosAluno. O programa deve obter a média e a idade de 10 alunos. Depois, 
estes dados devem ser exibidos juntamente com a média geral da turma.*/
#include<stdio.h>
#define MAX 3
struct dadosAluno
{
	float media;
	int idade;
};

struct dadosAluno d[MAX];
int i;

void imprime(float media)
{	
	printf ("Dados da Turma\n");
	for (i=0;i<MAX;i++)
	{
		printf ("Aluno %i \n",(i+1));
		printf ("Media: %.f \n",d[i].media);
		printf ("Idade: %i \n",d[i].idade);
	}
	printf ("Media Geral: %f",media);
}
main()
{
	int dadosAluno[MAX];
	float mediaG=0;
	float soma=0;
	
	
	for (i=0;i<MAX;i++)
	{
		printf ("Qual a media do %i aluno:\n",(1+i));
		scanf ("%f",&d[i].media);
		
		printf ("Qual a idade do %i aluno:\n",(1+i));
		scanf ("%i",&d[i].idade);
		
		soma+=d[i].media;
		mediaG=soma/MAX;
	}
	imprime(mediaG);
}
