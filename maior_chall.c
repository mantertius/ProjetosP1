#include <string.h>
#include <stdio.h>

int array_scan(int a[],int i)
{
    int n1;
    scanf("%d",&n1);
    if (n1 == 0)
    {
        return i;
    }
    
    a[i] = n1;
     
    return array_scan(a,i+1);
}
void array_greatest(int a[], int indice, int tamanho, int maior,int indice_maior) //imprime o valor maior do array, com seu indice
{
    if(indice == tamanho)
    {
        //printf("[%d] MAIOR:%d, INDICE DO MAIOR:%d\n",indice, maior,indice_maior);
        printf("%d\n",maior);
        return;
    }
    if(a[indice] > a[indice_maior])
    {
        maior = a[indice];
        indice_maior = indice;
    }
    //printf("[%d] MAIOR:%d, INDICE DO MAIOR:%d\n",indice, maior,indice_maior);
    array_greatest(a,indice+1,tamanho,maior,indice_maior);
}

int main()
{
    int array[10000];
    int num_alg = array_scan(array,0);
    array_greatest(array,0,num_alg,0,0);
    return 0;
    
}