/*5 - Fazer um programa em C que cria uma estrutura livro, que contém os 
elementos título, ano de edição, número de páginas e preço. Criar uma variável 
desta estrutura que é um vetor de 5 elementos. Ler os valores para a estrutura e 
imprimir a média do número de páginas dos livros e o menor preço entre os 
produtos.*/
#include<stdio.h>

struct livro{
	char titulo[10];
	int ano;
	int num;
	float preco;
};
struct livro l[10];
int i;

float media(int soma)
{
	float media=soma/10;
	
	return media;
}
void verificaMenor()
{
	float menor=1000;
	
	for(i=0;i<5;i++)
	{
		if (l[i].preco<menor)
		{
			menor=l[i].preco;
		}
	}
	printf ("O menor preco entre os produts e %2.f",menor);
}
void recebe()
{
	int soma=0;
	for (i=0;i<5;i++)
	{
		printf ("Digite o titulo do %i livro: \n",(i+1));
		scanf ("%s",&l[i].titulo);
		
		printf ("Qual o ano de edicao?:\n");
		scanf ("%i",&l[i].ano);
		
		printf ("Digite o numero de paginas: \n");
		scanf ("%i",&l[i].num);
		
		printf ("Digite o peco:\n");
		scanf ("%f",&l[i].preco);
		
		soma+=l[i].num;
	}
	printf ("A media do numero de pagina dos livros e: %.f \n",media(soma));
	verificaMenor();
}
main()
{
	recebe();
}
