#include <stdio.h>
#include <math.h>

int main()
{
    float inicial;
    scanf("%f", &inicial);
    if (inicial > 500)
    {
       float aumento = inicial*(1.1);
       printf("%.2f\n", aumento); 
    }
    else if ((inicial > 300) && (inicial <=500))
    {
        float aumento = inicial*(1.07);
        printf("%.2f\n", aumento);
    }
    else
    {
        float aumento = inicial*(1.05);
        printf("%.2f\n", aumento);
    }
    return 0;

}