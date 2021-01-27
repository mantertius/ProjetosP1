#include <stdio.h>
#include <string.h>

typedef struct nome_da_pessoa
{
    char s[1000001];
    int dia;
    int mes;
    int ano;

}nome;

int main()
{
    nome Julia;
    printf("Digite o nome:\n");
    scanf("%s", &(*nome).Julia);
    printf("Digite o dia do nascimento:\n");
    scanf("%d / %d / %d", &Julia.dia, &Julia.mes, &Julia.ano);
    //for (int i = 0; i < sizeof((*nome)).Julia)/sizeof() ; i++)
    //{
    //    printf("%c", nome.Julia);
    //}
    //printf("\n");
    printf("Nome: %s\n",nome.Julia);
    printf("Nascimento: %d/%d/%d",)
    
  
    return 0;
}