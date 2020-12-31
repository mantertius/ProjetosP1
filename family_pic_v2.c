//https://thehuxley.com/problem/50
#include <stdio.h>
#include <string.h>

#define MAXN 100001
double array[MAXN];

void bubble(double a[],int tamanho, int zero, int i, int contagem)
{
    int tamanho2 = (tamanho-1)*(tamanho-1);
    if (contagem == tamanho2)
    {
        return;
    }
    if (i == tamanho-1)
    {
       return bubble(a,tamanho,zero, 0, contagem+1);
    }
    else
    {
        if (a[i]>a[i+1])
        {
            double aux;
            aux = a[i+1];
            a[i+1] = a[i];
            a[i] = aux;

            return bubble(a,tamanho,zero,i+1,contagem); 
        }
        else
        {
            return bubble(a,tamanho,zero,i+1,contagem);
        }
    }
    
}
int main ()
{
    double n1;
    double n2;
    double n4;
    double n3;
    scanf("%lf",&n1);
    scanf("%lf",&n2);
    scanf("%lf",&n3);
    scanf("%lf",&n4);
    array[0]=n1;
    array[1]=n2;
    array[2]=n3;
    array[3]=n4;

    bubble(array,4,0,0,0);

    printf("%.2lf\n",array[0]);
    printf("%.2lf\n",array[2]);
    printf("%.2lf\n",array[3]);
    printf("%.2lf\n",array[1]);

    return 0;

}