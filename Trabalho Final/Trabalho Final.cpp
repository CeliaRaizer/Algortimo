#include <stdio.h>
#include<string.h>
#define MAX 100

struct cadastroClientes{
	int cod;
	char nome[50];
	char sexo[2];	
	char dataNasc[11];
	char cpf[12];
	char tel[15];
	char email[50];
	char endereco[50];
};

struct cadastroClientes c[MAX];
int i;
int codCliente=0;
int cont;

//funcao valida cpf
bool validaCpf(char cpf[]){
	int j=0;
	
	while(cpf[j] != 0)
	{
		j++;
	}
	if (j != 11)
	{
		return 0; //falso
	}
	return 1; //verdadeiro
}
//cadastrar clientes 
void cadastro(){
	printf ("-------------\n");
	printf ("Novo Cadastro: \n"); 
	
	c[codCliente].cod = codCliente + 1;
	printf ("Codigo do Novo Cliente: %i \n",c[codCliente].cod);
	
	printf ("Informe o Nome Completo: \n");
	scanf (" %[^\n]s",&c[codCliente].nome);
	
	printf ("Informe o Sexo [M/F] \n");
	scanf ("%s",&c[codCliente].sexo);
	
	printf ("Informe a data de nascimento: (Ex:00/00/0000)\n");
	scanf (" %[^\n]s",&c[codCliente].dataNasc);
	
	do {
        printf("Informe o numero do CPF: (Apenas Numeros)\n");
        scanf(" %s", c[codCliente].cpf);

        if (!validaCpf(c[codCliente].cpf)) {
            printf("CPF invalido! Tente novamente.\n");
        }
    } while  (!validaCpf(c[codCliente].cpf));
	
	printf ("Informe o numero de telefone:\n");
	scanf (" %[^\n]s",&c[codCliente].tel);
	
	printf ("Informe o E-mail: \n");
	scanf (" %[^\n]s",&c[codCliente].email);
	
	printf ("Informe o endereco: (Rua/Cidade)\n");
	scanf (" %[^\n]s",&c[codCliente].endereco);
	
	printf ("Cliente Cadastrado!!!\n");
	
	codCliente++;
	cont++;
}
//alterar dados
void alterar(){
	int cod;
	int opc;
	int flag=0;
	
	printf ("-------------\n");
	printf ("Digite o codigo do Cliente que deseja realizar a alteracao\n");
	scanf ("%i",&cod);
	
	for(i=0;i<codCliente;i++)
	{
		if (c[i].cod==cod){
			printf ("Deseja realizar alteracao do cliente %s?\n",c[i].nome);
		  	printf ("1- Confirmar\n");
		  	printf ("2- Cancelar\n");
		  	scanf ("%i",&opc);
		  
		  	flag=1;
		  	
		  	if (opc==1){
		  		printf ("Informe o Nome Completo: \n");
				scanf (" %[^\n]s",&c[i].nome);
				
				printf ("Informe o Sexo [M/F] \n");
				scanf ("%s",&c[i].sexo);
	
				printf ("Informe a data de nascimento(Ex:00/00/0000):\n");
				scanf (" %[^\n]s",&c[i].dataNasc);
	
				do {
        			printf("Informe o numero do CPF: (Apenas Numeros)\n");
        			scanf(" %s", c[i].cpf);

        			if (!validaCpf(c[i].cpf)) {
            		printf("CPF invalido! Tente novamente.\n");
        			}
    			} while  (!validaCpf(c[i].cpf));
	
				printf ("Informe o numero de telefone:\n");
				scanf (" %[^\n]s",&c[i].tel);
	
				printf ("Informe o E-mail: \n");
				scanf (" %[^\n]s",&c[i].email);
				
				printf ("Informe o endereco: (Rua/Cidade)\n");
				scanf (" %[^\n]s",&c[i].endereco);
				
				printf ("\nDados Alterados com sucesso!\n");
			  }
			  else{
			  	break;
			  }
		}
	}
	if (flag==0){
			printf ("Cliente nao encontrado!\n");
		}
}
//excluir cliente
void excluirCliente(){
	int cod;
	int flag=0;
	int opc;
	
	printf ("-------------\n");
	printf ("Informe o codigo do cliente que deseja remover:\n");
	scanf ("%i",&cod);
	
	for(i=0;i<codCliente;i++)
	{
		if (c[i].cod==cod){
			printf ("Deseja excluir o cliente %s?\n",c[i].nome);
		  	printf ("1- Confirmar\n");
		  	printf ("2- Cancelar\n");
		  	scanf ("%i",&opc);
		  	flag=1;
		  	if (opc==1){
				for (int j=i;j<codCliente;j++)
				{
					c[j]=c[j+1];
				}
				cont--;
				printf ("Cliente Excluido!!!\n");
			}
			else{
				break;
			}
		}
	}
	if(flag==0){
		printf ("Cliente nao encontrado!\n");
	}
}
//consultar cliente por codigo
void consultaCod(){
	int flag=0;
	int cod;
	printf ("-------------\n");
	printf ("Digite o Codigo do Cliente:\n");
	scanf ("%i",&cod);
	
	for (i=0;i<codCliente;i++)
	{
		if (c[i].cod==cod){
			printf ("--------------------\n");
			printf ("Cliente Encontrado:\n");
			printf ("Codigo Cliente: %i \n",c[i].cod);
			printf ("Nome: %s \n",c[i].nome);
			if ((strcmp(c[i].sexo,"F")==0) || (strcmp(c[i].sexo,"f")==0)){
				printf ("Sexo: Feminino \n");
			}
			else {
				printf ("Sexo: Masculino \n");
			}
			printf ("Data de Nascimento: %s \n",c[i].dataNasc);
			printf ("CPF: %s \n",c[i].cpf);
			printf ("Telefone: %s \n",c[i].tel);
			printf ("E-mail: %s \n",c[i].email);
			printf ("Endereco: %s\n",c[i].endereco);
			flag=1;
		}
	}
	if (flag==0){
		printf ("Cliente nao encontrado!!!\n");
	}
}
//consultar por nome
void consultaNome(){	
	int flag=0;
	char nome[50];
	
	printf ("-------------\n");
	printf ("Digite o Nome Completo para Busca:\n");
	scanf (" %[^\n]s",&nome);
	printf ("--------------------\n");
	
	for(i=0;i<codCliente;i++)
	{
		if (strcmp(c[i].nome,nome)==0){
			printf ("Cliente Encontrado:\n");
			printf ("Codigo Cliente: %i \n",c[i].cod);
			printf ("Nome: %s \n",c[i].nome);
			if ((strcmp(c[i].sexo,"F")==0) || (strcmp(c[i].sexo,"f")==0)){
				printf ("Sexo: Feminino \n");
			}
			else{
				printf ("Sexo: Masculino \n");
			}
			printf ("Data de Nascimento: %s \n",c[i].dataNasc);
			printf ("CPF: %s \n",c[i].cpf);
			printf ("Telefone: %s \n",c[i].tel);
			printf ("E-mail: %s \n",c[i].email);
			printf ("Endereco: %s\n",c[i].endereco);
			flag=1;
		}
	}
	if (flag==0){
		printf ("Cliente nao encontrado!!!\n");
	}	
}
//listar clientes
void lista(){
	printf ("-------------\n");
	printf ("Lista de Clientes:\n");
	
	if (codCliente==0){
		printf ("Nenhum Cliente Registrado!\n");
	}
	for (i=0;i<codCliente;i++)
	{
		if (c[i].cod != 0){
		printf ("Codigo Cliente: %i \n",c[i].cod);
		printf ("Nome: %s \n",c[i].nome);
		
		if ((strcmp(c[i].sexo,"F")==0) || (strcmp(c[i].sexo,"f")==0)){
			printf ("Sexo: Feminino \n");
		}
		else {
			printf ("Sexo: Masculino \n");
		}
		
		printf ("Data de Nascimento: %s \n",c[i].dataNasc);
		printf ("CPF: %s \n",c[i].cpf);
		printf ("Telefone: %s \n",c[i].tel);
		printf ("E-mail: %s \n",c[i].email);
		printf ("Endereco: %s\n",c[i].endereco);
		printf ("------------------\n");
	}
	}
}
//relacao cliente-codigo
void relacao(){
	printf ("-------------\n");
	printf ("Relacao Cliente-Codigo\n");

	if (codCliente==0){
		printf ("Nenhum Cliente Registrado!\n");
	}
	for(i=0;i<codCliente;i++)
	{
		if (c[i].cod!=0){
			printf ("Nome: %s   -   Codigo: %i \n",c[i].nome,c[i].cod);
		}
	}
}
//relatorio feminino/masculino
void relatorioSexo()
{
	int masc=0;
	int fem=0;
	
	for(i=0;i<codCliente;i++)
	{
		if ((strcmp(c[i].sexo,"F")==0) || (strcmp(c[i].sexo,"f")==0)){
			fem++;
		}
		else if ((strcmp(c[i].sexo,"M")==0) || (strcmp(c[i].sexo,"m")==0)){
			masc++;
		}
	}
	printf("-------------\n");
    printf("Relatario por Sexo:\n");
    printf("Total de Clientes Femininos: %i\n", fem);
    printf("Total de Clientes Masculinos: %i\n", masc);
}
//funcao principal-Menu
main()
{
	int opc;
	int subopc;
	for (;;)
	{
		printf ("-------------------------------\n");
	 	printf (" Bem Vindo a Empresa HyperSoft\n");
		printf ("-------------------------------\n");
		printf ("Escolha uma opcao:\n");
		printf("------------------\n");
		printf ("1- Cadastro de clientes\n");
		printf ("2- Alterar dados do cliente\n");
		printf ("3- Excluir clientes\n");
		printf ("4- Consultar clientes por: \n");
		printf ("5- Listar todos os clientes cadastrados\n");
		printf ("6- Relacao cliente/codigo\n");
		printf ("7- Relatorio por genero \n");
		printf ("8- Sair\n");
		scanf ("%i",&opc);
		
		if (opc==8){
			printf ("--------------------------------\n");
			printf ("Agradecemos a participacao!!!\n");
			printf ("Finalizando...");
			break;
		}
		if (opc==1){
			cadastro();
		} 
		else if (opc==2){
			alterar();
		}
		else if (opc==3){
			excluirCliente();
		}
		else if (opc==4){
			printf ("-------------\n");
			printf ("Selecione a opcao:\n");
			printf ("1- Codigo\n");
			printf ("2- Nome\n");
			scanf ("%i",&subopc);
			if (subopc==1){
				consultaCod();
			}
			else if (subopc==2){
				consultaNome();
			}
			else{
				printf ("Opcao Invalida!\n");
			}
		}
		else if (opc==5){
			lista();
		}
		else if (opc==6){
			relacao();
		}
		else if (opc==7)
		{
			relatorioSexo();
		}
		else{
			printf ("Opcao Invalida!!!\n");
		}
	}
}
