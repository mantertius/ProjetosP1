//https://thehuxley.com/problem/407
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAXN 10001


int algorithm(int n, int new_n, int i)
{
    if (n == 1)
    {
        //printf("a");
        return n;
    }
    if (new_n == 1)
    {
        int aux = i+1;
        //printf("b");

        return aux;
    }
    if (new_n%2 == 0)
    {
        //printf("c");
       // printf("resultado = [%d]", new_n/2);

        return algorithm(n,new_n/2,i+1);
    }
    else
    {
        //printf("d");

        int aux = (new_n*3)+1;
        //printf("resultado = [%d]\n", aux);
        return algorithm(n,aux,i+1);
    }
}

int num_walker(int min, int max, int melhor, int i)
{
    int aux = algorithm(i,i,0);

    if(i == max+1) //condição de parada
    {
        return melhor;
    }
    
    if (aux > melhor)
    {
        return num_walker(min,max,aux,i+1);
    }
    else
    {
        return num_walker(min,max,melhor,i+1);
    }
    
}
void scan_eof() //scaneia até chegar em EOF
{
    int n1,n2;
    int hm = scanf("%d",&n1);
    if(hm == EOF)
    {
        return;
    }
    scanf("%d",&n2);
    
    if (n1 <0 || n2<0)
    {
        return;
    }

    printf("%d %d ",n1,n2);


    int max = num_walker(n1,n2,0,n1);
    if(n2 > n1)
    {
        int max = num_walker(n1,n2,0,n1);
        printf("%d\n",max);
    }
    else
    {
        int max = num_walker(n2,n1,0,n2);
        printf("%d\n",max);   
    }

    return scan_eof();
}


int main() {
    scan_eof();
	return 0;
}