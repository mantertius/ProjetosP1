#include <string.h>
#include <stdio.h>

#define MAXN 10001

double q[MAXN];

void swap_element(int x, int y) //swap com y>x; y,x → x,y
{
    int aux;
    aux = y;
    y = x;
    x = aux;
    return;
}
void bubble(double a[], int indice, int tamanho, int count, int tamanho_inicial) //vai retornar o maior array2[],
{
    // esse é um bubble invertido, o maior vai ficar em a[0]

//indice vai aumentando em qlqr caso, tamanho = numero de elementos de a[],
//count é quantas vezes já fez a volta inteira
// tamanho_inicial é o valor de tamanho só que no começo
    int aux;
    if (tamanho == 0)//para reiniciar a contagem
    {
        return bubble(a,indice+1,tamanho_inicial, count+1, tamanho_inicial);
    }
    if (count == tamanho_inicial) //condição de parada
    {
        return;
    }
    if (a[indice]>a[indice+1])//faz o swap pra frente
    {
        swap_element(a[indice],a[indice+1]);
        
        return bubble(a,indice+1,tamanho-1, count, tamanho_inicial);
    }
    else
    {
        return bubble(a,indice+1,tamanho-1, count, tamanho_inicial);
    }
    
}

int main()
{
    double n1,n2,n3,n4;
    scanf("%lf",&n1);
    scanf("%lf",&n2);
    scanf("%lf",&n3);
    scanf("%lf",&n4);
    q[0]=n1;
    q[1]=n2;
    q[2]=n3;
    q[3]=n4;
    bubble(q,0,4,0,4);
    printf("%.2lf\n",q[3]);
    printf("%.2lf\n",q[1]);
    printf("%.2lf\n",q[0]);
    printf("%.2lf\n",q[2]);


}
