#include <stdio.h>

void pula(int n1, int n2, int p, int i)
{

    if (p == n1)
    {
        printf("%d\n",i);
        if (i == n2)
        {
            return;
        }
        else
        {
            return pula(n1,n2,1,i+1);
        }
        
    }
    else
    {
        printf("%d ", i);
        return pula(n1,n2,p+1,i+1);
    }
}


int main ()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    pula(n1,n2,1,1);
    return 0;

}