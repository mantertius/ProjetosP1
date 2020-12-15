#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
static double numerao = 0;

double soma(int x)
{   
    double resultado;
    if (x == 1)
    {
        resultado = 1;
    }
    else
    {
        resultado = x+soma(x-1);
    }
    return resultado;
}
double denominator(int x_inicial)
{   
    double resultado;
    if (x_inicial == 1)
    {
        return soma(1);
    }
    else
    {
        resultado = soma(x_inicial)+denominator(x_inicial-1);
    }
    return resultado;
}
double prob(double n)
{
    double resultado;
    if (n == 1)
    {
        resultado = (1/(denominator(numerao)));
       // printf("n = 1 (%lf)  e 1/denomitador:%.2lf\n",n,resultado);
    }
    else
    {
       // printf ("%.2lf*(%.2lf/%.2lf)\n",n,soma(n),denominator(numerao));
        resultado = ((n*(soma(n)/(denominator(numerao))) + prob(n-1)));
    }
    
    return resultado;
    
}
int main() {
    double n1;
    scanf("%lf",&n1);
    if (n1 == 1)
    {
        numerao = n1+1;
    }
    if (n1 <= 0 || n1>100)
    {
        return 0;
    }
    numerao = n1;
    printf("%.2lf\n",prob(n1));

	return 0;
}