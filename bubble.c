#include <stdio.h>
#include <string.h>

int a[];
int array2[];

void swap_element(int x, int y) //swap com y>x; y,x → x,y
{
    int aux;
    aux = y;
    y = x;
    x = aux;
    return;
}

void bubble(int a[], int indice, int tamanho, int count, int tamanho_inicial) //vai retornar o maior array2[],
{
//indice vai aumentando em qlqr caso, tamanho = numero de elementos de a[],
//count é quantas vezes já fez a volta inteira
// tamanho_inicial é o valor de tamanho só que no começo
    int aux;
    if (tamanho == 0)//reinicia int tamanho com tamanho_inicial
    {
        bubble(a,indice+1,tamanho_inicial, count+1, tamanho_inicial);
    }
    if (count == tamanho_inicial) //condição de parada
    {
        return;
    }
    if (a[indice]>a[indice+1])//faz o swap pra frente
    {
        swap_element(a[indice],a[indice+1]);
        
        bubble(a,indice+1,tamanho-1, count, tamanho_inicial);
    }
    else
    {
        bubble(a,indice+1,tamanho-1, count, tamanho_inicial);
    }
    
}