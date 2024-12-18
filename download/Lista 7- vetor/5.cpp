/*5 - Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada 
informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa a 
ordem lida.*/

#include<stdio.h>

main()
{
	int idade[5];
	int alt[5];
	int i;
	
	for (i=0;i<5;i++)
	{
		printf ("Informe a idade da posicao %i\n",(i+1));
		scanf ("%i",&idade[i]);
		
		printf ("Informe a altura da posicao %i\n",(i+1));
		scanf ("%i",&alt[i]);
	}
	/*printf ("Ordem inicial\n");
	for (i=0;i<5;i++)
	{
		printf ("%i   ",idade[i]);
	}
	printf ("\n");
	for (i=0;i<5;i++)
	{
		printf ("%i  ",alt[i]);
	}*/
	printf ("\n Ordem inversa\n");
	for (i=0;i<5;i++)
	{
		printf ("Idade %i    ",idade[4-i]);
	}
	printf ("\n");
	for (i=0;i<5;i++)
	{
		printf ("Altura %i  ",alt[4-i]);
	}
	
}
