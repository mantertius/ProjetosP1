#include <stdio.h>

int maior(int idade)
{
	if (idade >= 18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int paridade(int idade)
{
	if (idade%2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int faltante(int idade)
	if (maior(idade))
	{
		return 0;
	}
	else
	{
		int faltante;
		faltante = 18-idade;
		
	}
int dobro(int idade)
{
	return idade*2;
}
int triplo(int idade)
	return idade*3;

 int main(){

 	int idade;
 		printf("Digite sua idade:\n");
 		scanf("%d", &idade);

 		if (idade >=18){

 			printf("Voce e' maior de idade.\n");
 		}

 		else{
            int faltante;
 			faltante = 18-idade;
 			printf("Voce e' menor de idade e faltam %d anos para que atinja a maioridade.\n", faltante);
 		}

 		int paridade = idade%2;
        /*printf("\n\n\nidade%%2 = %d\n\n\n", paridade);*/
 		if(paridade == 0){
            printf("Voce tem um numero par de anos.\n");
            int par2,parM;
            par2 = idade*2;
            parM = idade/2;
            printf("O dobro da sua idade e' %d, a metade da sua idade e' %d.\n", par2, parM);
 		}
 		else{
            printf("Voce tem um numero impar de anos.\n");
            int par3,parT;
            par3 = idade*3;
            parT = idade/3;
            printf("O triplo da sua idade e' %d, a terça parte da sua idade e' %d.\n", par3, parT);
 		}
 	return 0;
 }
