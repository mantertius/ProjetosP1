//https://www.urionlinejudge.com.br/judge/pt/problems/view/2126
#include <stdio.h>
#include <string.h>

#define MAX 999999999999999999999999999999999
char input[MAX];
int input_int[MAX];

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
        //input[tamanho_input-1-i] = 0; //reseta o valor de input para receber o prox valor de boas
        printf("\tn[%d]={%d}\n",i,n[i]);
        return char_to_int(input,n,tamanho_input,i+1);
    }
}
void scan_array()
{
    memset(input, 0, sizeof(input));
    memset(input_int, 0, sizeof(input_int));

    scanf("%s", input);
    int tamanho = strlen(input);

    char_to_int(input,input_int,tamanho, 0);



}

void scan()
{
    int c = scanf("%d")
    if (c == EOF)
    {
        return;
    }
    else
    {
        scan_array();
    }
    
}
int main() {
 
    return 0;
}