#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAXN 10000
int A[MAXN];
int B[MAXN];

int s[MAXN];

void scanner(int a[], int tamanho, int counter) //TUDO OK
{
    if (tamanho-1 == counter)
    {
        int x;
        scanf("%d",&x);
        a[counter] = x;
        printf("a[%d]= [%d]-----\n",counter,a[counter]);
        return;
    }
    else
    {
        int x;
        scanf("%d",&x);
        a[counter] = x;
        printf("a[%d]=[%d]\n",counter,a[counter]);
        return scanner(a,tamanho,counter+1);
        
    }
}

void atribui_elemento(int a[],int b[], int init, int numero_de_elementos, int i) //atribui o melhor sub_array
{
    if (numero_de_elementos-1 == i)
    {
        return;
    }
    else
    {
        a[i] = b[init+i];
        atribui_elemento(a,b,init,numero_de_elementos,i+1);
    }
}

int compara_elemento(int a[],int b[],int n_elementos, int init,int i,int iguais)
{   
    if (i == n_elementos-1)
    {
        printf("{{{%d}}\n",iguais);
        return iguais;
    }
    if ()
    if (a[init]==b[i])
    {
        printf("{{{%d}}\n",iguais);
        return (a,b,n_elementos,init+1,i+1,iguais+1);
    }
    else
    {
        printf("{{{%d}}\n",iguais);
        return (a,b,n_elementos,init,i+1,iguais);
    }
    
}

int escolhe_sub(int a[],int b[], int t_a,int t_b, int i, int melhor_init, int valor_melhor_init,int init) //m começa em zero
{ // init travado, i crescente
    if (init == t_a)
    {
        return melhor_init;
    }
if (i < t_b)
{
    if (a[init]==b[i])
    {
       printf("[%d] %d == %d\n",init,a[init],b[i]);
       int valor_init = compara_elemento(a,b,t_b,init,0,0);
       printf("valor_init = %d, valor_melhor_init=%d\n",valor_init,valor_melhor_init);


       if (valor_melhor_init>valor_init)
        {
            return escolhe_sub(a,b,t_a,t_b,i+1,melhor_init,valor_melhor_init,init);
        }
        else
        {
            return escolhe_sub(a,b,t_a,t_b,i+1,init,valor_init,init);
        }
        
    }
    else
    {
        return escolhe_sub(a,b,t_a,t_b,i+1,melhor_init,valor_melhor_init,init);
    }
    
}
else if (i == t_b)
{
    if (a[init]==b[i])
    {
       printf("[%d] %d == %d\n",i,a[init],b[i]);
       int valor_init = compara_elemento(a,b,t_b,init,0,0);
       printf("valor_init = %d, valor_melhor_init=%d\n",valor_init,valor_melhor_init);
       if (valor_melhor_init>valor_init)
        {
            return escolhe_sub(a,b,t_a,t_b,0,melhor_init,valor_melhor_init,init+1);
        }
        else
        {
            return escolhe_sub(a,b,t_a,t_b,0,init,valor_init,init+1);
        }
        
    }
    else
    {
        return escolhe_sub(a,b,t_a,t_b,0,melhor_init,valor_melhor_init,init+1);
    }
}

}

void print_array(int a[],int tamanho, int counter)
{
    if(counter == tamanho-1)
    {
        printf("%d\n",a[counter]);
        return;
    }
    else
    {
        printf("%d ",a[counter]);
        print_array(a,tamanho,counter+1);
    }
    
}
int main() 
{
    int n1,n2;
    scanf("%d",&n1);
    scanner(A,n1,0);

    scanf("%d",&n2);
    scanner(B,n2,0);

    int melhor_init = escolhe_sub(A,B,n1,n2,0,0,0,0);
    printf("{%d}\n",melhor_init);
    atribui_elemento(s,A,melhor_init,n2,0);
    int numero_de_mov = n2-melhor_init;
    print_array(s,n2,0);
    printf("%d\n",numero_de_mov);
	return 0;
}