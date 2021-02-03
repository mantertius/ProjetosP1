#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void compra()
{
	//criar anotacao em ptf.txt 

}

void venda()//
{
	//hachura na portfolio.txt ou encontra algum jeito de fazer ele, se qtd_sell == qtd
	//se qtd_sell < qtd, atualizar qtd,  
	//escrever no ptf.txt com as coisas negativas 
}

void lista() //mostra todos os stocks ativos catalogados no portfolio em formato de tabela, com qtd de rendimento%
{
	//para saber se esta ativo, faz a soma das qtds de compra e venda do ativo, se for 0, nao mostra, se for >0 mostra
	//quando for mostrar e calcular rendimento, fazer preco medio?
	//mostrar alocacao; 
}

void menu()
{
	int n = 0;
	printf("Digite o numero:\n");
	scanf("%d",&n);
	
	switch (n)
		case 1: compra();	break;
		case 2: venda();	break;	
		case 3: lista();	break;
}

typedef struct papel
{
	double price_cost, price_now, profit, taxes;
	int qtd;
	char nome[6];
	int dia,mes,ano;
	
}Papel;

int main()
{	
	//abrir lista dos antigos, com append mode
	//escanear numero de stocks
	//passar para o numero de stocks atuais para menu()
	//eh possivel pegar os dados dos stocks atuais pela internet?? se sim, como faz??
	// criar ptf.txt que vai armazenar todas as transacoes, seja compra ou venda
		//em ptf.txt, exemplo de liinha: 21/02/2012 BEEF3 9.32 9.52 0.03 1 0.20
									//	dia/mes/ano nome cost atual taxes qtd profit
	//como aqiui [e liinuix e o pc la eh windows, teenho que encontrar um jeito de conseguiir trabalhar com os dois ao mesmo tempo..... existe algum jeito de descobrir o sistema operacional???					 	
	//o conflito existe por causa das abertura e do fechamento de arquivos, apareentemente [e diferente a maneira de fazer iiise for wiin oiu liinuxss
	//https://www.codingunit.com/c-tutorial-searching-for-strings-in-a-text-file
	//https://curl.se/libcurl/using/								
									
										 
	menu();
}
