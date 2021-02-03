#include <stdio.h>

typedef struct Clientes
{
    int codigo;
    int dia, mes, ano;
    int sexo;    
} cliente;


void imprimir(cliente * c)
{
    printf("Código: %d\n", (*c).codigo);
    printf("Data de nascimento: %d/%d/%d\n",c->dia, c->mes, c->ano);
    printf("Sexo: ");
    if ( c->sexo == 0 )
    {
        printf("Masculino\n");
    }
    else
    {
        printf("Feminino\n");
    }
}

int main()
{
    cliente clientes[100];
    int i;

    for (i = 0; i < 2; i++)
    {
        scanf("%d", &clientes[i].codigo);
        scanf("%d/%d/%d", &clientes[i].dia, &clientes[i].mes, &clientes[i].ano);
        scanf("%d", &clientes[i].sexo);
    }
    for (i = 0; i < 2; i++)
    { 
        imprimir(&clientes[i]);
    }



    

    return 0;
}