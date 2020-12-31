#include <stdio.h>
//https://thehuxley.com/problem/396?quizId=5563
#define MULTA 12.89
#define MAXN 10000

int n_carros[MAXN];

static double mult = 0;

int multa(int a[], int i)
{
    int passantes = a[i]-2;
    double aux = mult;
    double this_mult = (double)passantes*MULTA;
    mult = aux + this_mult;
    //printf("MULTA = {%.2lf}\n", mult);
    return mult;
}

int scan_999(int i)
{
    int n1;
    scanf("%d",&n1);
    if (n1 == 999)
    {
        return i;
    }
    else
    {
        //printf("n_carros[%d] = [%d]\n",i,n1);
        n_carros[i] = n1;
        return scan_999(i+1);
    }
}
int checker(int a[], int tA, int multados, int i)
{
    //printf("checando n_carros[%d].", i);
    if (i == tA-1)
    {
        return multados;
    }

    if (a[i] > 2)
    {
        //printf("Multado\n");
        multa(a,i);
        return checker(a,tA,multados+1,i+1);
    }
    else
    {
        return checker(a,tA,multados,i+1);
    }
    
}
int main ()
{
    int i = scan_999(0);
    if (i == 0)
    {
        printf("0.00\n0\n");
        return 0;
    }
    int multados = checker(n_carros,i,0,0);
    printf("%.2lf\n",mult);
    printf("%d\n",multados);
    return 0;
}