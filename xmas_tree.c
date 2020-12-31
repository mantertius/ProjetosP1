//https://thehuxley.com/problem/490?quizId=5563
#include <stdio.h>
#include <string.h>
#define BODY 21
int main ()
{
    double vA;
    int n1,n2,n3;
    double v1,v2,v3;
    scanf("%lf",&vA);
    
    scanf("%d",&n1);
    scanf("%lf",&v1);
        double f1 = n1*v1;

    scanf("%d",&n2);
    scanf("%lf",&v2);
        double f2 = n2*v2;


    scanf("%d",&n3);
    scanf("%lf",&v3);
        double f3 = n3*v3;

    double F = f1+f2+f3+vA;
    double i = F/BODY;

    printf("%.2lf\n",F);
    printf("%.2lf\n",i);


    return 0;
}