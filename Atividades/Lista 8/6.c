/*6 - Escreva um algoritmo que apresente um menu com quatro op��es: 
? 1 � Inserir 
? 2 � Remover 
? 3 � Imprimir 
? 4 � Substituir 
? 5 � Sair 
Considere um vetor de inteiro de 20 posi��es declarado globalmente.  
Quando for escolhida a: 
Op��o 1: um sub algoritmo Insere deve ser chamado para inserir o valor na pr�xima 
posi��o livre do vetor 
Op��o 2: chamar o sub algoritmo Remover e eliminar o elemento na posi��o 
passada como par�metro 
Op��o 3: chamar o sub algoritmo Imprimir para escrever na tela os valores que se 
encontram no algoritmo 
Op��o 4: chamar o sub algoritmo Substituir, que recebe por par�metro um valor e 
uma posi��o. O sub algoritmo deve substituir o valor existente na posi��o informada 
pelo valor passado por par�metro. Se ainda n�o houver elemento na posi��o 
informada, deve-se inserir o valor na pr�xima posi��o livre. 
Op��o 5: O programa dever� ser encerrado.*/

#include<stdio.h>

int vetor[20];
int cont=0;
int i;

void insere()
{
	printf ("Qual o valor para inserir:\n");
	scanf ("%i",&vetor[cont]);
	
	cont++;
}

void imprime()
{
	printf ("Valores atuais:\n");
	for (i=0;i<cont;i++)
	{
		printf ("%i  \n",vetor[i]);
	}
}

void remove()
{
	int pos;
	
	printf ("Qual a posicao para remover:\n");
	scanf ("%i",&pos);
	
	if (pos > cont)
	{
		printf ("Posicao inexistente!\n");
	}
	else 
	{
		for (i= (pos-1); i<cont; i++)
		{
			vetor [i] = vetor[i+1];
		}
		cont --;
	}
}

void substitui()
{
	int valor;
	int pos;
	
	printf ("Qual o valor para substituir um existente:\n");
	scanf ("%i",&valor);
	
	printf ("Qual a posicao para substiruir:\n");
	scanf ("%i",&pos);
	
	if (pos > cont)
	{
		vetor[cont]=valor;
		cont++;
	}
	else
	{
		vetor[pos-1]=valor;
	}
}

main()
{
	int op;
	
	for (;;)
	{
		printf ("Escolha uma opcao:\n");
		printf ("1- Inserir\n");
		printf ("2- Remover\n");
		printf ("3- Imprimir\n");
		printf ("4- Substituir\n");
		printf ("5- Sair\n");
		scanf ("%i",&op);
		
		if (op==1)
		{
			insere();
		}
		else if (op==2)
		{
			remove();
		}
		else if (op==3)
		{
			imprime();
		}
		else if (op==4)
		{
			substitui();
		}
		else if (op==5)
		{
			printf ("Finalizando...");
			break;
		}
		else 
		{
			printf ("Opcao invalida\n");
		}
	}
}
