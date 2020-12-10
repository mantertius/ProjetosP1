//https://thehuxley.com/problem/1109?quizId=5562
/*Escreva um programa que receba como entrada a quantidade de programas e a quantidade de linhas de código feitas por ele em
cada um dos sete dias da semana, e exiba em quantos dias ele cumpriu as duas metas 
e o dia em que ele mais produziu linhas de código. 

Assuma que o primeiro dia da semana é DOMINGO.

Se a produção de programas for a mesma todos os dias, será exibido o último dia da semana

META: 5 programas e 100 linhas*/
#include <stdio.h>
#include <string.h>

char dias[7]={'d','s','t','q','Q','x','b'};
int programas[7];
int linhas[7];

int bubble()
int scan(int n) //pega os valores de p e de l
{
    if (n == 7)
    {
        return 0;
    }
    int p,l;

        scanf("%d",&p);
        programas[n] = p;
        //printf("p[%d]:%d\n",n,programas[n]);
   
        scanf("%d",&l);
        linhas[n] = l;
        //printf("l[%d]:%d\n",n,linhas[n]);
    
    scan(n+1);
}
int analist_p(int numero_de_dias_na_semana, int dias_bons) //analisa os valores p, para saber se chegou até a media; n = 7
{
    if (numero_de_dias_na_semana >= 7)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d",dias_bons);
    }
    if (programas[numero_de_dias_na_semana])
}

int main ()
{
    scan(0);
    return 0;
}