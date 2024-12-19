/* receber um vetor de 5 posicoes e depois fazer uma rotina que soma entre o primeiro valor com o segundo, passe a ser o segundo, passe a ser
o segundo elemento, a soma entre o segundo com o terceiro passe a ser o terceiro e assim por diante,
ao final imprima o vetor resultante*/

#include<stdio.h>

main()
{
	int vetor[5];
	int i;
	
	for (i=0;i<5;i++){
		printf ("Digite um valor para a posicao %i\n",(i+1));
		scanf ("%i",&vetor[i]);
	}
	//vetor original
	printf("Vetor original\n");
	for (i=0;i<5;i++){
		printf("%i  ",vetor[i]);
	}
	
	//rotina para a soma
	for (i=0;i<4;i++)
	{
		vetor[i+1] += vetor[i];
	}
	
	//vetor final
	printf("\nVetor final\n");
	for (i=0;i<5;i++)
	{
		printf("%i  ",vetor[i]);
	}
}
