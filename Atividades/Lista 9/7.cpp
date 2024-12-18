/*7 - Crie uma estrutura (registro / struct) representando os alunos de um
determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da
primeira prova, nota da segunda prova e nota da terceira prova.
- Permita ao usuário entrar com os dados de 5 alunos;
- Encontre o aluno com maior nota da primeira prova;
- Encontre o aluno com maior média geral;
- Encontre o aluno com menor média geral;
- Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6
para aprovação.*/

#include<stdio.h>
#include<string.h>
#define MAX 2

struct alunos
{
	int matricula;
	char nome[20];
	float n1;
	float n2;
	float n3;		
};

struct alunos a[MAX];
//int i;

void recebeDados()
{
	for (int i=0;i<MAX;i++)
	{
		printf ("Informe a matricula do aluno:\n");
		scanf ("%i",&a[i].matricula);
		
		printf ("Informe o nome do aluno:\n");
		scanf ("  %[^\n]s",&a[i].nome);
		
		printf ("Informe a nota 1 de %s\n",a[i].nome);
		scanf ("%f", &a[i].n1);
		
		printf ("Informe a nota 2 de %s\n",a[i].nome);
		scanf ("%f", &a[i].n2);
		
		printf ("Informe a nota 3 de %s\n",a[i].nome);
		scanf ("%f", &a[i].n3);
	}
}

void verificaMaiorNota()
{
	float maior=-1;
	int iMaior=0;
	
	for (int i=0;i<MAX;i++)
	{
		if (maior < a[i].n1)
		{
			maior= a[i].n1;
			iMaior=i; 
		}
	}
	printf ("A maior nota na primeira prova foi %.2f de %s\n \n",a[iMaior].n1, a[iMaior].nome);
	
}

float calculaMedia(int i)
{
	return (a[i].n1+a[i].n2+a[i].n3)/3.0;
}

verificaMedia()
{
	//float media=0;
	//float maior=-1;
	//int iMaior=0;
	float maiorMedia=-1;
	float menorMedia=101.0;
	int iMenor =0;
	int iMaior=0;
	
	for(int i=0;i<MAX;i++)
	{
		float	media = calculaMedia(i);
	if(media>=6)
	{
		printf ("Aluno %s aprovado com a media: %.2f \n",a[i].nome,media);
	}
	else 
	{
		printf ("Aluno %s reprovado com a media: %.2f\n",a[i].nome,media);
	}
	
	if (media > maiorMedia)
	{
		maiorMedia=media;
		iMaior=i;
	}
	
	if (media < menorMedia)
	{
		menorMedia=media;
		iMenor=i;
	}
	}
	printf ("\nA maior media geral foi %.2f de %s\n",maiorMedia,a[iMaior].nome);
	printf ("A menor media geral foi %.2f de %s\n",menorMedia,a[iMenor].nome);

}

main()
{
	recebeDados();
	verificaMaiorNota();
	verificaMedia();
	
	return 0;
}
