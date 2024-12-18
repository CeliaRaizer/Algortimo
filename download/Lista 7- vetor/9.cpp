/*9 – Faça um programa que receba um vetor de 10 elementos e multiplique todos 
os elementos por um valor específico fornecido pelo usuário, o resultado da 
multiplicação deve assumir a posição do vetor inicial.*/

#include<stdio.h>

main ()
{
	int vetor [10];
	int mult;
	int i;
	
	printf ("Qual valor o vetor sera multiplicado?:");
	scanf ("%i",&mult);
	
	for (i=0;i<10;i++)
	{
		printf ("Qual o valor da posicao %i?: ",(i+1));
		scanf ("%i",&vetor[i]);
		
		vetor[i]=vetor[i]*mult;
	}
	printf ("Dados do vetor!\n");
	for (i=0;i<10;i++)
	{
		printf ("%i  ",vetor[i]); 
	
	}
	
}
