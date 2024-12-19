/*7 - Desenvolva uma calculadora onde devem conter as seguintes operações: 
adição, subtração, divisão, multiplicação, exponenciação e raiz quadrada. Cada 
uma delas deve ser chamada da main e deve retornar o resultado diretamente da 
função correspondente.*/
#include<stdio.h>
#include<math.h>

void adicao()
{
	float n1;
	float n2;
	float soma=0;
	
	printf ("Digite um valor:\n");
	scanf ("%f",&n1);
	
	printf ("Digite outro valor:\n");
	scanf ("%f",&n2);
	
	soma=n1+n2;
	
	printf("----------------------\n");
	printf ("%2.f + %2.f = %2.f",n1,n2,soma);
	printf ("\n");
	printf("----------------------\n");
}

void subtracao()
{
	float n1;
	float n2;
	float subtracao=0;
	
	printf ("Digite um valor:\n");
	scanf ("%f",&n1);
	
	printf ("Digite outro valor:\n");
	scanf ("%f",&n2);
	
	subtracao=n1-n2;
	printf("----------------------\n");
	printf ("%2.f - %2.f = %2.f",n1,n2,subtracao);
	printf ("\n");
	printf("----------------------\n");
}
void divisao()
{
	float n1;
	float n2;
	float divisao=0;
	
	printf ("Digite um valor:\n");
	scanf ("%f",&n1);
	
	printf ("Digite um valor para dividir:\n");
	scanf ("%f",&n2);
	
	divisao=n1/n2;
	printf("----------------------\n");
	printf ("%2.f %% %2.f = %2.f",n1,n2,divisao);
	printf ("\n");
	printf("----------------------\n");
}
void multiplicacao()
{
	float n1;
	float n2;
	float multi=0;
	
	printf ("Digite um valor:\n");
	scanf ("%f",&n1);
	
	printf ("Digite um valor para multiplicar:\n");
	scanf ("%f",&n2);
	
	multi=n1*n2;
	printf("----------------------\n");
	printf ("%2.f X %2.f = %2.f",n1,n2,multi);
	printf ("\n");
	printf("----------------------\n");
}
void exponenciacao()
{
	float n1;
	float n2;
	float exp;
	
	printf ("Digite um valor\n");
	scanf ("%f",&n1);
	
	printf ("Qual o valor do expoente para calcular?\n");
	scanf ("%f",&n2);
	
	exp=pow(n1,n2);
	
	printf("----------------------\n");
	printf ("%2.f ^ %2.f = %2.f",n1,n2,exp);
	printf ("\n");
	printf("----------------------\n");
}
void raiz()
{
	float num;
	float raiz=0;
	
	printf ("Digite um valor\n");
	scanf ("%f",&num);
	
	raiz=sqrt(num);
	
	printf("----------------------\n");
	printf ("A raiz quadrade de %2.f = %f",num,raiz);
	printf ("\n");
	printf("----------------------\n");
}
main()
{
	int opc;
	for(;;)
	{
		printf ("Qual operacao deseja realizar?\n");
		printf ("1- Adicao\n");
		printf ("2- Subtracao\n");
		printf ("3- Divisao\n");
		printf ("4- Multiplicacao\n");
		printf ("5- Exponenciacao\n");
		printf ("6- Raiz quadrada\n");
		printf ("7- Sair\n");
		scanf("%i",&opc);
		
		if(opc==7)
		{
			printf("Finalizando...");
			break;
		}
		else if (opc==1)
		{
			adicao();
		}
		else if (opc==2)
		{
			subtracao();
		}
		else if (opc==3)
		{
			divisao();
		}
		else if (opc==4)
		{
			multiplicacao();
		}
		else if (opc==5)
		{
			exponenciacao();
		}
		else if (opc==6)
		{
			raiz();
		}
		else
		{
			printf ("Opcao invalida!!!\n");
		}
	}
}
