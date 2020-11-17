#include <stdio.h>

float converter(float y)
{
    return (100*y-3200)/180;
}
int main()
{   
    float temp;
    scanf("%f", &temp);
    printf("%.2lf\n",converter(temp));
    return 0;
}