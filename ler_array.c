#include <stdio.h>
#include <string.h>

int ler_array(int a[], int i) //lê arrays do tipo int até que o input seja -42
{   
    int tamanho = i-1;

    scanf("%d", &a[i]); 

    if (a[i] == -42)
    {
        return tamanho;
    }

    ler_array(a,i+1);
}

int main()
{
    int array[];
    printf("Digite os elementos do array e termine a lista com -42: ");
    ler_array(array,0);
    //int tamanho = sizeof(array)/sizeof(array[]);
}