/*18 - Leia uma matriz 10 x 10 que se refere respostas de 10 questões de múltipla
escolha, referentes a 10 alunos. Leia também um vetor de 10 posições contendo o
gabarito de respostas que podem ser a, b, c ou d. Seu programa deverá comparar
as respostas de cada candidato com o gabarito e emitir um vetor Resultado,
contendo a pontuação correspondente. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define max 5 //alunos

main()
{
	char respostas[max][10][2];
	char alunos[max][10];
	char gabarito[10][2];
	int resultado[max];
	int i;
	int j;
	int ale;

	srand(time(NULL)); // chamada para gerar os aleatórios
	
	// preenchimento dos nomes dos alunos
	for (i=0; i<max; i++)
	{
		printf ("Digite o nome do aluno %i\n",(i+1));
		scanf ("%s", &alunos[i]);
		
		resultado[i] = 0;
	}
	
	//preenchimento das respostas 
	for (i=0; i<max; i++)
	{
		for (j=0; j<10; j++)
		{
			ale = rand()%4;
			
			if (ale == 0)
			{
				strcpy(respostas[i][j],"a");//atribuir a
			}
			else if (ale == 1)
			{
				strcpy(respostas[i][j],"b");//atribuir b
			}
			else if (ale == 2)
			{
				strcpy(respostas[i][j],"c");//atribuir c
			}
			else 
			{
				strcpy(respostas[i][j],"d");//atribuir d	
			}
		}
	}
	//preenchimento do gabarito
	for (j=0; j<10; j++)
		{
			ale = rand()%4;
			
			if (ale == 0)
			{
				strcpy(gabarito[j],"a");//atribuir a
			}
			else if (ale == 1)
			{
				strcpy(gabarito[j],"b");//atribuir b
			}
			else if (ale == 2)
			{
				strcpy(gabarito[j],"c");//atribuir c
			}
			else 
			{
				strcpy(gabarito[j],"d");//atribuir d
			}
		}
	//contabilização dos acertos
	for (i=0; i<max; i++)
	{
		for (j=0; j<10; j++)
		{
			if (strcmp(respostas[i][j], gabarito[j]) == 0)
			{
				resultado[i]++;
			}
		}
	}
	//impressão das respostas
	for (i=0; i<max; i++)
	{
		printf ("%s\t",alunos[i]);
		for (j=0; j<10; j++)
		{
			printf ("%s\t",respostas[i][j]);
		}
		printf ("%i\n",resultado[i]);
	}
	//impressão do gabarito
	printf("Gab\t");
	for (i=0; i<10; i++){
		printf ("%s\t",gabarito[i]);
	}
}
