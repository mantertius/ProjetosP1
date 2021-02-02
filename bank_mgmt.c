#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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


void menu()
{
	case 1 - create account //return account_counter+1, go to main, restart the process in the end
	case 2 - edit account
	case 3 - transaction
	case 4 - view customer`s list 
	case 5 - delete account	
	case 6 - exit

}
int main()
{
	srand(time(0));
	int account_counter;
	Cliente n[100001];
	menu(account_counter); 

	return 0;
}
