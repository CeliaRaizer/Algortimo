/*14 - Fa�a um algoritmo que l� o nome de um vendedor, l� o sal�rio fixo do
vendedor, l� o total (em reais) de vendas por ele efetuadas e l� o percentual que
ganha sobre o total de vendas. O algoritmo deve calcular o sal�rio total do
vendedor e exibir, ao final, a seguinte frase: O vendedor <nome do vendedor> recebeu <salario total> reais.*/

#include <stdio.h>

main()
{
	char nome[10];
	float salFixo;
	float totalVendas;
	float comissao;
	float salTotal=0;
	
	printf("Qual o nome do vendedor:\n");
	scanf("%s", &nome); //usa s em vez de c
	
	printf("Qual o salario do vendedor:\n");
	scanf("%f",&salFixo);
	
	printf("Qual o total de vendas:\n");
	scanf("%f",&totalVendas);
	
	printf("Qual a porcentagem de comissao:\n");
	scanf("%f",&comissao);
	
	salTotal= salFixo + (totalVendas*comissao/100);
	
	printf ("O vendedor %s recebera R$ %.2f",nome, salTotal);
	
	
}
