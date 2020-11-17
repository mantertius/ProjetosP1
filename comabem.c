#include <stdio.h>
double fullprice(double x)
{
    return (x*0.1)+x;
}

double main()
{
    double price;
    scanf("%lf", &price);
    printf("%lf",fullprice(price));

    return 0; 
}