/*1 – Faça um programa em C que leia o sexo (M ou F), a idade e o salário de uma
pessoa através de um registo (Struct). Em seguida apresente na tela os dados
digitados, com o sexo escrito por extenso (Masculino ou Feminino).*/

#include<stdio.h>
#include<string.h>

struct pessoa
{
	char sexo[2];
	int idade;
	float salario;	
};

main()
{
	struct pessoa p;
	
	printf ("Digite o sexo da pessoa M/F\n");
	scanf ("%s",&p.sexo);
	printf ("Digite a idade da pessoa\n");
	scanf ("%i",&p.idade);
	printf ("Digite o salario\n");
	scanf ("%f",&p.salario);
	
	if ((strcmp(p.sexo,"M")==0) || strcmp(p.sexo,"m")==0)//comparacao entre strings ==0
	{
		printf ("Sexo Masculino\n");
	}
	else
	{
		printf ("Sexo Feminino\n");
	}
	printf ("Idade - %i\n",p.idade);
	printf ("Salario - %.2f \a\n",p.salario);
}

