#include <stdio.h>

int main()
{
    int c1,c2,c3;
    scanf("%d%d%d",&c1,&c2,&c3);
    int dif1 = c1-c2;
    int dif2 = c1-c3;
    int dif3 = c2-c3;
    int sum1 = c1+c2;
    int sum2 = c1+c3;
    int sum3 = c2+c3;
    if( (dif1 == 0) || (dif2 == 0) || (dif3 == 0))
    {
        printf("S\n");
    }
    else if ((sum1 == c3) || (sum2 == c2) || (sum3 == c1))
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    return 0;
}