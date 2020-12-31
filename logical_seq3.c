#include <stdio.h>


void pula(int n1, int n2, int n3, int p, int i)
{

    if (p == n1)
    {   
        printf("%d\n",i);
        if (i+n3 >= n2)
        {
            return;
        }
        else
        {
            return pula(n1,n2,n3,1,i+n3);
        }
        
    }
    else
    {
        if (i >= n2)
        {

            return;
        }
        else
        {
            printf("%d", i);
            if (i+n3 > n2)
            {
                printf("\n");
                return;
            }
            else if (i+n3 == n2)
            {
                printf(" %d\n",i+n3);
                return;
            }
            printf(" ");
            return pula(n1,n2,n3,p+1,i+n3);
        }
        
        
    }
}


int main ()
{
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    pula(n1,n2,n3,1,1);
    return 0;

}