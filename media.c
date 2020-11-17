#include <stdio.h>

double mediaF (double n1, double n2, double n3, double p1, double p2, double p3) //quando quiser definir uma função, precisa definir o tipo ._.
{//<tipo> <nome> (parâmetros){return}
    return (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
}

int main()
{

    double media,x,y,z,m1,m2,m3;
    printf("Digite três números:\n");
    scanf("%lf%lf%lf",&x, &y, &z);
    
    
    printf("Digite os três pesos:\n");
    scanf("%lf%lf%lf",&m1, &m2, &m3);

    media = mediaF(x,y,z,m1,m2,m3);
        printf("Média: [%.3lf]\n", media);
    return 0;
}