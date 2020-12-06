#include <stdio.h>

//1. Calcule A * B mod C para valores de B de 0 a C-1
//2. O inverso modular de A mod C é o valor de B que faz A * B mod C = 1
int algoritmo(int a, int d) //encontra mdc
{
    int q = a/d; //quociente1
    int r = a%d; //resto1
    a = d*q + r;
    int mdc;
    if (a >= d)
    {
        if (r == 0) // oresto = 0 
        {
            mdc = d;
        }
        else if (r > 0)  //resto1 maior q zer
        {
            mdc = algoritmo(d,r);
        }
    }
    else if (a < d)
    {
     int q = d/a; //quociente1
     int r = d%a; //resto1
     d = a*q + r; 
        if (r == 0) // resto = 0
        {
            mdc = a;
        }
        else if (r > 0)  // resto1 maior q zero
        {
            mdc = algoritmo(a,r);
        }
    }
    return mdc;
}
int inversefinder(int num, int mod, int init) //encontra inverso por exaustão
{
    int inverse;
    int search_num = num*init; 
    int rest = search_num%mod; //resto da divisão do A*B%mod
    //printf("%d * %d ≡ %d (mod %d) ≡ %d (mod %d)\n", num, init, search_num, mod, rest, mod);
    //printf("[%d]::",init);
    if ( init >= (mod-1))
    {
        printf("%d não tem um inverso modular (mod %d)\n",num,mod);
       return -42;
    }
    //if (search_num < mod)
    //{
    //    printf("%d * %d ≡ %d (mod %d)\n", num, init, search_num, mod);
   // }
    else if (search_num%mod == 1)
    {
        inverse = init;
        printf("%d * %d ≡ %d (mod %d) ≡ %d (mod %d)\n", num, init, search_num, mod, rest, mod);
        printf("%d é o inverso de %d mod %d.\n", inverse, num, mod);
        return init;
    }
    printf("%d * %d ≡ %d (mod %d) ≡ %d (mod %d)\n", num, init, search_num, mod, rest, mod);
    inversefinder(num,mod,init+1);
}
void solver(int inverse, int congruence, int mod, int numero)
{
    int q;
    q = inverse*congruence; 
    int resto = q%mod;
    if (inverse == -42)
    {
        printf("\nComo %d e %d não são coprimos, não há solução para os inteiros.\n",mod,numero);
    }
    else
    {
    printf("(%d)*(%d) = %d → %d%%%d = %d\n",inverse,congruence,q,q,mod,resto);
    printf("%d + %dk com k inteiro.\n",resto,mod);
    }

}
int main ()
{
    int num,mod, congruence;
    printf("Digite o número, o outro número e a congruência:\n");
    //int init = 1;
    scanf ("%d%d%d",&num,&congruence,&mod);
   // int search_num = num*init; 
   // int rest = search_num%init; //resto da divisão do A*B%mod
   // printf("%d * %d ≡ %d (mod %d) ≡ %d (mod %d)", num, init, search_num, mod, rest, mod);
    //inversefinder(num,mod,1);
    int mdc = algoritmo(num,congruence);
    if (congruence%mdc == 0 && mdc != 1)
    {
        solver(inversefinder(num/mdc,mod/mdc,1),congruence/mdc,mod/mdc,num/mdc);
    }
    else
    {
        solver(inversefinder(num,mod,1),congruence,mod,num);
    }
    return 0;
}