#include <stdio.h>
#include <string.h>
#define MAX 100001
//output must be 567099777308894174587386391799

int n1[MAX];
int n2[MAX];
char input[MAX];
char input2[MAX];
int res[MAX];

void soma (int a[], int b[], int c[], int i) //n1= a, n2=b, res = c
{
    if (i == MAX)
    {
        return;
    }
    int ant = c[i];
    int num = a[i]+b[i];
    if (num%10 > 0)
    {
        c[i] = num-10;
        c[i+1]= ant + (num%10);
        printf("c[%d] = %d e c[%d] = %d\n",i,c[i],i+1,c[i+1]);
        return soma(a,b,c,i+1); 
    }
    else
    {
        c[i] = num+ant;
        printf("====== c[%d] = %d e c[%d] = %d\n",i,c[i],i+1,c[i+1]);
        return soma(a,b,c,i+1); 
    }
    
}

void char_to_int(char input[], int n[], int tamanho_input, int i)// input[n_max] = n[0] && input[0] = n[n_max]
{
    if (i == tamanho_input)// com i == tamanho_input-1, recebe o ultimo valor
    {
        return;
    }
    else 
    {   
        printf("input[%d]={%c}\n",tamanho_input-1-i,input[tamanho_input-1-i]);
        n[i] = (int)input[tamanho_input-1-i] - 48; 
        input[tamanho_input-1-i] = 0; //reseta o valor de input para receber o prox valor de boas
        printf("\tn[%d]={%d}\n",i,n[i]);
        return char_to_int(input,n,tamanho_input,i+1);
    }
}

int main()
{
    scanf("%s",input);
    int tamanho = strlen(input);
    printf("tamanho = [%d]\n",tamanho);
    char_to_int(input,n1,tamanho,0);

    
    scanf("%s",input2);
    int tamanho2 = strlen(input2);
    printf("---------------TAMANHO 2  = [%d]\n",tamanho2);
    char_to_int(input2,n2,tamanho2,0);



    return 0;
}