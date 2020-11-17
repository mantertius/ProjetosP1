#include <stdio.h>

int main()
{
    double salary, compromised;
    scanf("%lf%lf",&salary, &compromised);
    double limit = compromised/salary;
    
    if(limit >= 0.3)
    {
        printf("0.00\n");
    }
    else
    {
        double Newlimit = 0.3-limit;
        double newcompromised = salary*Newlimit;
        printf("%.2lf\n",newcompromised);
    }
    
    return 0;
}