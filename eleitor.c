#include <stdio.h>
#include <math.h>
//Faça um programa que leia a idade (valor inteiro) de uma pessoa e informe sua classe eleitoral:

//nao eleitor (abaixo de 16 anos)
//eleitor obrigatorio (maior e igual a 18 ou menor e igual a 65 anos)
//eleitor facultativo (entre 16 e 18 anos ou acima dos 65 anos)
int main()
{
    int idade;
    scanf("%d", &idade);
    
    if ((idade >= 16 && idade <18) || idade > 65 )
    {
        printf("eleitor facultativo\n");
    }
    else if(idade >= 18 && idade <= 65)
    {
        printf("eleitor obrigatorio\n");
    }

    else
    {
        printf("nao eleitor\n");
    }
    return 0;
}