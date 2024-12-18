/*10 - Elabore um algoritmo que permita ler 3 notas de alunos de uma turma e os 
respectivos nomes, identifique qual a nota máxima e a mínima e mostre quais os 
respectivos nomes dos alunos que as obtiveram.*/
#include <stdio.h>

main ()
{
	int alunos;
	printf ("Quantos alunos a turma tem?:\n");
	scanf ("%i",&alunos);
	
	float notas;
	int n;
	char nomes[alunos][50];
	int i=0;
	float maior=-1.0;
	float menor=11.0;
	int nomeMa;
	int nomeMe;
	
	for (i=0;i<alunos;i++)
	{
		printf ("Qual o nome do %i aluno?: ",(i+1));
		scanf ("%s",&nomes[i]);
		
		for (n=0;n<3;n++)
		{
		printf ("Qual a %i nota do aluno(a) %s?: ",(n+1),nomes[i]);
		scanf ("%f",&notas);
		
		if (notas>maior){
			maior=notas;
			nomeMa=i;
		}
		if (notas<menor){
			menor=notas;
			nomeMe=i;
		}
		}
	}
	printf ("A maior nota foi %2.f do aluno(a) %s \n",maior,nomes[nomeMa]);
	printf ("A menor nota foi %2.f do aluno(a) %s ",menor,nomes[nomeMe]);
	
}
