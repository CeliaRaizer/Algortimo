/*6 - Foi realizada uma pesquisa entre 500 habitantes de certa região. De cada 
habitante foram coletados os dados: idade, sexo, salário e número de filhos. Crie a 
estrutura de dados adequada para armazenar estas informações, ao final calcule e 
exiba a média salarial dos habitantes.*/
#include<stdio.h>
#define MAX 3

struct habitantes
{
	int idade;
	char sexo[2];
	float sal;
	int numFilhos;
};
struct habitantes h[MAX];
int i;
float media;

void recebe()
{
	float soma;
	for (i=0;i<MAX;i++)
	{
		printf ("Qual a idade do %i habitante?\n",(i+1));
		scanf ("%i",&h[i].idade);
		
		printf ("Qual o sexo do %i habitante[f/m]?\n",(i+1));
		scanf ("%s",&h[i].sexo);
		
		printf ("Qual a salario do %i habitante?\n",(i+1));
		scanf ("%f",&h[i].sal);
		
		printf ("Qual a quantidade de filhos:\n");
		scanf("%i",&h[i].numFilhos);
		
		soma+=h[i].sal;
		media=soma/MAX;
	}
}
void imprime()
{
	/*for(i=0;i<MAX;i++)
	{
		printf ("Habitante %i: \n",(i+1));
		printf ("Idade: %i\n",h[i].idade);
		printf ("Sexo: %s\n",h[i].sexo);
		printf ("Salario: %f \n",h[i].sal);
		printf ("Numero de filhos: %i \n",h[i].numFilhos);
	}*/
	printf ("A media salarial dos habitantes e %.f",media);
}
main()
{
	recebe();
	imprime();
}
