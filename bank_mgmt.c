#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10000
typedef struct
{
	int cpf;
	char endereco[1000];
	int numero_da_conta;
	double saldo;
	char nome[1000];
	int dia,mes,ano;
	int senha;
	
}Cliente;
void create_account(Cliente n[], int k)
{
	printf("Digite seu nome:\n");
	scanf("%s",n[k].nome);
	
	printf("Digite seu nascimento(dia/mes/ano):\n");
	scanf("%d/%d/%d", &n[k].dia, &n[k].mes, &n[k].ano);
	
	printf("Digite seu endereco:\n");
	scanf("%s",&n[k].endereco);
	
	printf("Digite seu CPF:\n");
	scanf("%d",&n[k].cpf);
	
	printf("Digite sua senha:\n");
	scanf("%d", &n[k].senha);
	
	n[k].saldo = 0.0;
	n[k].numero_da_conta = rand();
	
	printf("O numero da sua conta eh: [%d]\n",n[k].numero_da_conta);
	
	return; 
}

void edit(Cliente n[], int n_clientes)//como fazer o programa lembrar do valor de k para cada conta?
{
	int lo;
	int numero_do_cliente;
	printf("Digite o numero da sua conta:\n");
	scanf("%d",&lo);
	for (int i = 0; i<n_clientes;i++)
	{
		if (lo == n[i].numero_da_conta)
		{numero_do_cliente = i;break;}
	}
	printf("Digite sua senha atual:\n");
	int blu = 90;
	scanf("%d", &blu)
	
	if (blu == n[numero_do_cliente].senha)
	{
		printf("Digite sua nova senha:\n");
		scanf("%d", &n[numero_do_cliente].senha);
		printf("Senha alterada com sucesso.\n")
	}
	else
	{
		printf("Senha antiga invalida.\n");
		
	}
}


void menu(Cliente n[], int k)
{
	int num;
	
	printf("\t\t1 - Criar conta\n");
	printf("\t\t2 - Editar conta\n");
	printf("\t\t3 - Fazer transacao\n");
	printf("\t\t4 - Ver Lista de Clientes\n");
	printf("\t\t5 - Deletar Conta\n");
	printf("\t\t6 - Sair\n");
	
	printf("Digite um numero:");
	scanf("%d",&num);
		
	switch(num)
	{	
		case 1: create_account(n,k);	break; 
								//return account_counter+1, go to main, restart the process in the end
		case 2: edit_account(n,k);	break;
		case 3: transaction(n,k); break;
		case 4: view(n,k);	break; 
		case 5: delete(n,k);	break;	
		case 6:	break;
	}
	printf("Operacao concluida com sucesso. Deseja fazer algo mais? 1 para sim 0 para nao\n")
	scanf("%d",&num);
	if (num == 1)
	{
		return menu(Cliente n[], int k);						
	}
	return;
}
int main()
{
	srand(time(0));
	int account_counter = 0;
	
	Cliente n[10000];
		
	menu(account_counter); //cada cliente vaii ter um numero, que eh diferente do niumero da conta, qiue entra no indice de n[]. Como fazer para sempre abrir e ver quantos tem escritos??
	//como salvar a senha de modo binario?
	 //

	return 0;
}
