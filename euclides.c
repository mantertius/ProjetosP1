//https://thehuxley.com/problem/552
#include <stdio.h>

int algoritmo(int a, int d)
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
void scan ()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int mdc = algoritmo(x,y); 
    printf("MDC(%d,%d) = %d\n",x,y, mdc);
    return;
}
void contador(int  x) //vai chamar a função scan quantas vezes for necessário. recebe ncasos
{
    if (x <= 1) //se n casos = 0
    {
        scan();
        return;
    }
    else //se n casos !=0
    {
      
        scan();
        contador(x-1);
    }
    return;
}
int main()
{
    int ncasos;
    scanf("%d", &ncasos);
    /*int n1,n2;
    scanf("%d%d", &n1, &n2);
    int mdc  =  algoritmo(n1,n2);*/
    contador(ncasos);
    static int iteration = 0;
    int *ponteiro;
    /*if (ncasos > iteration)
    {
        iteration ++;
        *ponteiro = &iteration; 
        printf("iteration = [%d]\n",*ponteiro);
        scan();
    }
    else
    {
        printf("iteration* = [%d]\n",*ponteiro);
    }
    */
  // printf("iteraRion = [%d]\n",*ponteiro);
    //printf("MDC(%d,%d) = %d\n",n1,n2, mdc);

    return 0;
}

/*todo:

1 - Arrumar um jeito de ALOCAR os valores do input
2 - Imprimir todos os MDC's juntos.



*/