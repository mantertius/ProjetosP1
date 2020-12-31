//https://thehuxley.com/problem/468?quizId=5563

#include <stdio.h>

#define DISC 0.2
int main()
{
    double n1,n2,n3,n4,n5;
    double f1,f2,f3,f4,f5;
    int tot = 0;
    double t_d;

    scanf("%lf",&n1);
    scanf("%lf",&f1);
    t_d = n1 - (n1*DISC);
    if (f1 <= t_d)
    {
        tot = tot + 1;
    }
    
    
    scanf("%lf",&n2);
    scanf("%lf",&f2);
    t_d = n2 - (n2*DISC);
    if (f2 <= t_d)
    {
        tot = tot + 1;
    }
    
    scanf("%lf",&n3);
    scanf("%lf",&f3);
    t_d = n3 - (n3*DISC);
    if (f3 <= t_d)
    {
        tot = tot + 1;
    }
    
    
    scanf("%lf",&n4);
    scanf("%lf",&f4);
    t_d = n4 - (n4*DISC);
    if (f4 <= t_d)
    {
        tot = tot + 1;
    }
    
    
    scanf("%lf",&n5);
    scanf("%lf",&f5);
    t_d = n5 - (n5*DISC);
    if (f5 <= t_d)
    {
        tot = tot + 1;
    }

    printf("%d\n",tot);
    return 0;
    
    

    
    

}