#include <stdio.h>
#include <math.h>
//todo1: receber // 85,13 +4// 127,69
        // 574,62 +7
int main()
{
    double vmax, vel;    
    scanf("%lf%lf",&vmax, &vel);

    printf("%lf,%lf", vmax, vel);
    if ( (vel > vmax) && (vel <= (vmax*(1.2))) )// maior que a max + menor ou igual 20%max
    {
        printf("85.13\n4\n");
    }
    else if ( (vel > (vmax*(1.2))) && (vel <= (vmax*(1.5))))
    {
        printf("127.69\n5\n");
    }
    else if ((vel > vmax*(1.5)))
    {
        printf("574.62\n7\n");
    }
    else
    {
        printf("0.00\n0\n");
    }


    return 0;
}
// neste problema se vmax = 6 e vel = 7.2, dá um erro.
// ele assume que 7.2 != 60*1,2