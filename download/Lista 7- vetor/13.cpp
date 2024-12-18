/* receber um vetor com valores inteiros e preencher um segundo vetor com os
valores do primeiro de maneira contraria, ou seja, o primeiro valor do
vetor1 e o ultimo do 2, o segundo do vetor 1 é o penultimo do 2 
e assim por diante */

#include<stdio.h>
main()
{
	int vet1[5];
	int vet2[5];
	int i;
	
	for (i=0; i<5; i++)
	{
		printf ("Digite um valor para a posicao %i\n",(i+1));
		scanf ("%i",&vet1[i]);
	}
	
	printf ("Vetor 1\n");
	for (i=0; i<5; i++){
		printf ("%i  ",vet1[i]);
	}
	
	//rotina para gerar o vetor 2
	for (i=4; i>=0; i--)
	{
		vet2[i] = vet1[4-i];
	}
	printf ("\nVetor 2\n");
	for (i=0; i<5; i++){
		printf ("%i  ",vet2[i]);
	}
}
