#include <stdio.h>
/*x é maior que y           ok 
x é igual a y               ok 
x é menor que y             ok
x é diferente de y          ok
x é maior ou igual a y      ok
x é menor ou igual a y      ok */

int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    if (n1 > n2)
    {
        printf("1\n");
    }
    if (n1 < n2 || n2 == n1)
    {
        printf("0\n");
    }
    if (n1 == n2)
    {
        printf("1\n");
    }
    if (n1 != n2)
    {
        printf("0\n");
    }
    if (n1 < n2)
    {
        printf("1\n");
    }
    if (n1 > n2 || n2==n1)
    {
        printf("0\n");
    }
    if (n1 != n2)
    {
        printf("1\n");
    }
    if (n1 == n2)
    {
        printf("0\n");
    }
    if (n1 >= n2)
    {
        printf("1\n");
    }
    if (n1 < n2)
    {
        printf("0\n");
    }
    if (n1 <= n2)
    {
        printf("1\n");
    }
    if (n1 > n2)
    {
        printf("0\n");
    }
    
     
    return 0;

}