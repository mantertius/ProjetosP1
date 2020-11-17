#include <stdio.h>
#include <math.h>

double Delta(double a, double b, double c)//faz o delta de a,b,c
{
    double b2 = b*b;
    double ac4 = a*c*4;
    if (sqrt(b2-ac4) >= 0)
    {
        return sqrt(b2-ac4);
    }
    else
    {
        return -1;
    }
}

double fxPOS(double a, double b, double c)//raiz positiva
{
    return ((-b + Delta(a,b,c))/(2*a));
}
double fxNEG(double a, double b, double c)//raiz negativa
{
    return ((-b - Delta(a,b,c))/(2*a));
}

void solution(double a, double b, double c)//imprime as raizes ou as saidas NEESG ou NRR dependendo de Delta()
{   
    if(a == 0) 
    {
        printf("NEESG\n");
    }
    else if (Delta(a,b,c) >= 0)
    {
        printf("%.2lf\n%.2lf\n",fxPOS(a,b,c),fxNEG(a,b,c));
    }
    else if (Delta(a,b,c) == -1)
    {
        printf("NRR\n");
    }    
    
    return;
}
int main ()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a, &b, &c);
    solution(a,b,c);
 /*   printf("[[%lf]]\n",Delta(a,b,c));
    printf("{%lf}\n",sqrt(b*b-4*c*a));
    printf("{-----%lf---}\n",fxNEG(a,b,c));
    printf("{+++++++%lf+++++++++}\n",fxPOS(a,b,c));
*/
    return 0;
}