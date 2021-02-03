#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//*x é endereço de variável
double fun(double *x,double *y)
{
    double aux;
    aux = *x;
    //printf("[%d]\n",aux);
    double ans = *x - *y;
    return ans;
    
    
}
int main() {
    double n1,n2,n22;
    scanf("%lf",&n1);
    scanf("%lf",&n2);
    n22 = n2;
    
    double ans = fun(&n1,&n2);
    printf("%.2lf ",ans);
    printf("%.2lf\n",n22);
	return 0;
}



