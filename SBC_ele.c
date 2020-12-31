#include <string.h>
#include <stdio.h>
#define MAXN 100001
int e[MAXN];
int s[MAXN];
static int par = 0;
static int impar = 0;

void even(int n1)
{
    s[par] = n1;
    par = par+1;
}
void odd(int n1)
{
    e[impar] = n1;
    impar = impar + 1;
}

void scanner(int n, int i)
{
    if (n == i)
    {
        return;
    }
    int n1;
    scanf("%d",&n1);
    if (i%2 == 0 || i == 0)
    {
        even(n1);
    }
    else if (i == 1 || i%2 != 0)
    {
        odd(n1);
    }
    return scanner(n,i+1);
}
int cap_eva(int n,int ant, int i, int max)
{
    if (i == n)
    {
        return 99;
    }
    else
    {
        int novo = e[i] - s[i];
        int atual = ant + novo;
        
        printf("s[%d] = [%d]\n",i,s[i]);
        printf("e[%d] = [%d]\n",i,e[i]);
        printf("atual[%d] = [%d]\n",i,atual);

        if (atual>max)
        {
            return 1;
        }
        return cap_eva(n,atual,i+1, max);
    }
    
}
int main()
{
    int n1, n2;
    scanf("%d%d",&n1,&n2);
    scanner(2*n1,0);
    int result = cap_eva(n1,0,0,n2);
    if (result == 99)
    {
        printf("N\n");
    }
    else
    {
        printf("S\n");
    }
    
    return 0;
}