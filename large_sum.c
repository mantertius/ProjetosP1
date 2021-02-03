#include <stdio.h>
#include <string.h>
#define MAX 100001
//output must be 567099777308894174587386391799

int n1[MAX];
int n2[MAX];
char input[MAX];
char input2[MAX];
int res[MAX];
int ans = 0;

void sominha(int m, int a[], int b[], int r[])
{

    int i=0;
    int passa = 0;
    for (i = 0; i < m; i++)
    {
        if(i == 0)
        {
            int old = 0;
            r[i] = a[i] + b[i] + old;
        }
        else
        {  
            r[i] = a[i] + b[i] + passa;
        }


        if (r[i]>=10)
        {
            passa = r[i]/10;
            int resto = r[i]%10;
            r[i] = resto;        
        }
        else
        {
            passa = 0;
        }
       //printf("\n"); 
    }
}

int subtracao(int M[], int m[], int m_, int r[],int sinal)//subtracao(n1,n2,m,res,1)
{

    int i=0;

    for (i = 0; i < m_ ; i++)
    {
        r[i] = M[i] - m[i];
        
      
        
        if (r[i] < 0)
        {
            r[i] = 0;
            r[i] = M[i] + 10 - m[i];
            r[i+1] = res[i+1] - 1;
        }
    /****
    *   printf("M[%d] = %d",i,M[i]);
    *   printf(" e  m[%d] = %d\n",i,m[i]);
    *   printf("r[%d] = %d\n",i,r[i]);
    ****/        
    }

    return sinal;
}

void print_array(int m, int a[])
{
    int i;
    int m_max = m;
    for (i = m-1; i > -1 ; i--)
    {
        if (i == m_max-1 && a[i] == 0)
        {
           continue;
        }
        
        int n = a[i];
        printf("%d",n);
       
    }
    printf("\n");
}

int is_negative (int n)
{
    if (n == 1)
    {
        ans = ans+1;
    }
    else
    {
        ans = 0 + ans;
    }
    return ans;
}

void char_to_int(char input[], int n[], int tamanho_input, int i)// input[n_max] = n[0] && input[0] = n[n_max] 
{//transforma input[] em n[]
    if (i == tamanho_input)// com i == tamanho_input-1, recebe o ultimo valor
    {
        return;
    }
    else 
    {   
        if (input[tamanho_input-1-i] == '-')
        {
            is_negative(1);
            return char_to_int(input,n,tamanho_input,i+1);
        }

        n[i] = (int)input[tamanho_input-1-i] - 48; 

        /***        
        * printf("input[%d]={%c}\n",tamanho_input-1-i,input[tamanho_input-1-i]);
        * input[tamanho_input-1-i] = 0; //reseta o valor  de input para receber o prox valor de boas
        * printf("\tn[%d]={%d}\n",i,n[i]);
        ***/        

        return char_to_int(input,n,tamanho_input,i+1);
    }
}

int main()
{
    int neg1,neg2;
    int tamanho,tamanho2;

    scanf("%s",input);
    tamanho = strlen(input);
    char_to_int(input,n1,tamanho,0);
    neg1 = is_negative(42);
    
    scanf("%s",input2);
    tamanho2 = strlen(input2);
    char_to_int(input2,n2,tamanho2,0);
    neg2 = is_negative(42);
/*
    printf("TAMANHO1 = [%d], neg1 = [%d]\n",tamanho,neg1);
    printf("TAMANHO2 = [%d], neg2 = [%d]\n",tamanho2,neg2);
    for (int i = 0; i < tamanho; i++)
    {
        printf("%c",input[i]);
    }
    printf("\n");
    for (int i = 0; i < tamanho2; i++)
    {
        printf("%c",input2[i]);
    }
    printf("\n");
*/
    
    int m = 0;
    int wat;

    if(neg1 == 1 && neg2 == 1)//so tem 1º negativo
    {
        if (tamanho2 > tamanho-1)//resultado é positivo
        {
            m = tamanho2+1;
            wat = subtracao(n2,n1,m,res,1);//maior,menor,tamanho_maximo,resultado,sinal

        }
        else //resultado é negativo
        {
            m = tamanho+1;
            wat = subtracao(n1,n2,m,res,-1);
        }
        
    }
    else if (neg1 == 0 && neg2 == 1)//so tem 2º negativo
    {
        if (tamanho2-1 > tamanho)//resultado é negativo
        {
            m = tamanho2-1;
            wat = subtracao(n2,n1,m,res,-1);//maior,menor,tamanho_maximo,resultado,sinal

        }
        else //resultado é positivo
        {
            m = tamanho+1;
            wat = subtracao(n1,n2,m,res,1);
        }
       
    }
    else if (neg1 == 1 && neg2 == 2) //2 negativos
    {
        if (tamanho2 > tamanho)//resultado é negativo
        {
            m = tamanho2;
        }
        else //resultado é negativo
        {
            m = tamanho;
        }
        wat = -1;
        sominha(m,n1,n2,res);
    }
    else //2 positivos
    {
        if (tamanho2 > tamanho-1)//resultado é positivo
        {
            m = tamanho2+1;
        }
        else //resultado é negativo
        {
            m = tamanho+1;
        }
        wat = 1;
       sominha(m,n1,n2,res);

    }
    
    if (wat != 1) //analisa o sinal da resposta final
    {
        printf("-");
    }

    print_array(m,res);
    return 0;
}