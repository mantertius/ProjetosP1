//https://thehuxley.com/problem/1036
#include <stdio.h>
#include <string.h>

#define MAXN 10000
int p[MAXN];//coeficientes de p
int q[MAXN];//coeficientes de q
int r[MAXN];//coeficientes de resultado

static int caso = 0; //numero de casos

void imprimir(int tamanho, int atual)
{
    if (tamanho == atual)
    {
        printf("\n");
        return;
    }
    else
    {
        printf(" %d",r[atual]);
        imprimir(tamanho,atual+1);
    }
    
}

void poli_multiplier(int array1[],int array2[], int tamanho_a,int tamanho_b,int array3[], int index_a, int index_b)
//index_a fica travado e index_b vai aumentando até que index_b == tamanho_b, dai recomeça e  vai até index_a == tamanho_a e index_b == tamanho b
{  
    int grau_result = index_a+index_b;
    int anterior = r[grau_result];
    
    //printf("p[%d]*q[%d] = r[%d], anterior[%d] = %d →→ r[%d] = ",index_a,index_b,grau_result,grau_result,anterior,grau_result);
    //printf("%d*%d\n", array1[index_a],array2[index_b]);
    if(index_b == tamanho_b)
    {
        
        if(index_a < tamanho_a-1)
        {
            r[grau_result] = ((array1[index_a]*array2[index_b])+anterior);
           // printf("%d\n",r[grau_result]);
            poli_multiplier(array1,array2,tamanho_a,tamanho_b,array3,index_a+1,0);
        }
        else if (index_a == tamanho_a-1)//chegou ao fim
        {
            r[grau_result] = ((array1[index_a]*array2[index_b])+anterior);
            //printf("%d\n",r[grau_result]);
            caso = caso+1;
            return;
        }
    }
    else //index_b != tamanho_b
    {
        r[grau_result]=((array1[index_a]*array2[index_b])+anterior);
        //printf("%d\n",r[grau_result]);
        poli_multiplier(array1,array2,tamanho_a,tamanho_b,array3,index_a,index_b+1);
        
    }
    

}

int scan_coef(int numero_de_coef, int counter, int tipo) //escaneia até chegar no numero maximo de coeficientes = grau+1
{
    if (counter>=numero_de_coef) //caso de parada
    {
        return counter;
    }

    int coef;
    scanf("%d",&coef);
    //printf("coef%d:%d\n",counter,coef);

    if(tipo == 1)
    {
        p[counter] = coef;
        return scan_coef(numero_de_coef,counter+1,tipo);
        
    }
    else
    {
        q[counter] = coef;
        return scan_coef(numero_de_coef,counter+1,tipo);
    }
}
void scan_eof() //scaneia até chegar em EOF
{
    int g1,g2;
    int hm = scanf("%d",&g1);
    if(hm == EOF)
    {
        return;
    }
    scanf("%d",&g2);
    
    memset(p,0,sizeof(p));
    memset(q,0,sizeof(q));

    int tamanho_p = scan_coef(g1+1,0,1); //numero de coeficientes em p
    int tamanho_q = scan_coef(g2+1,0,2); //numero de coeficientes em q
    
    int tamanho_r = g1+g2+1; //numero de coeficientes em r
    //printf("~~tamanho do r[]:%d~~\n",tamanho_r);
   
    //limpa_array(r,MAXN,0);
    memset(r,0,sizeof(r));

    poli_multiplier(p,q,tamanho_p,tamanho_q,r,0,0);
    printf("Caso #%d:", caso); 
    imprimir(tamanho_r, 0);
    scan_eof();

}
int main ()
{
    scan_eof();
    return 0;
}