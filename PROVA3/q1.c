#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
No reino de nem tão distante, uma nova brincadeira surgiu: A dança dos arrays!
A brincadeira consiste em receber um array de "n" posições, 
listado de 0 a n-1 que armazena números inteiros. O jogador começa sempre na posição zero do array e as regras são as seguintes: 
1 - Os números que estão nas posições pares do array indicam quantos passos 
o jogador deve andar para frente (sentido crescente do índice);
2 - Os números que estão nas posições ímpares do array indicam quantos 
passos o jogador deve andar para trás (sentido decrescente do índice);
3 - Quando o jogador chega ao fim do array e tem que ir para frente, 
ele retorna ao começo. Se estiver no começo e andar para trás, ele vai para o final. 
Desse modo, ele sempre estará dentro dos limites.
Após ler todos os valores, o jogador deve executar os comandos. 
(ele não precisa estar na posição para executar o comando que a mesma indica).


IN:A entrada é constituída por um inteiro n, que indica o tamanho do array, seguido por n inteiros, que são os movimentos que devem ser executados pelo jogador, respeitando as regras.

OUT A saída deve ser um inteiro que representa a posição final do jogador.

*/
#define MAXN 10000
int comandos[MAXN];
int position[MAXN];
int andador(int comandos[], int tamanho_a, int ultimo_valor, int counter)
{
    if(counter == tamanho_a)
    {
       printf("fim, counter = %d\n",counter);

        return ultimo_valor;
    }

    if(counter%2 == 0)
    {
       printf("primeiro if, counter = %d\n",counter);


        int anterior;
        if (counter == 0)
        {
            
            int anterior = 0;
            int new_value = comandos[counter]+anterior;
            
            printf("counter = 0 → anterior = 0\n");
            printf("anterior = %d\n",anterior);
            printf("new_value = %d\n",new_value);

            if (new_value > tamanho_a)
            {
                int nova_pos = new_value-tamanho_a;
                printf("nova_pos = %d\n",nova_pos);
                return andador(comandos,tamanho_a,nova_pos,counter+1);
            }
            else if(new_value < 0)
            {
                int negativo = (-1)*new_value;
                int nova_pos = (tamanho_a)-negativo-1 ;
                return andador(comandos,tamanho_a,nova_pos,counter+1);
            }
            else
            {
                return andador(comandos,tamanho_a,new_value,counter+1);
            }
            
        }
        else //counter != 0
        {

            int anterior = ultimo_valor;
            int new_value = comandos[counter]+anterior; 
            
            printf("[%d]anterior = %d\n",counter,anterior);
            printf("[%d]new_value = %d\n",counter,new_value);

            if (new_value > tamanho_a-1)
            {
                int nova_pos = new_value-tamanho_a-1;
                return andador(comandos,tamanho_a,nova_pos,counter+1);
            }
            else if(new_value < 0)
            {
                int negativo = (-1)*new_value;
                int nova_pos = (tamanho_a-1)-negativo-1 ;
                return andador(comandos,tamanho_a,nova_pos,counter+1);
            }
            else
            {
                return andador(comandos,tamanho_a,new_value,counter+1);
            }
            
        }
    }
    else if(counter%2 != 0)
    {
        printf("primeiro elif, counter = %d\n",counter);

        
        if (counter == 0)
        {
            
            int anterior = 0;
            int new_value = comandos[counter]-anterior;

            printf("anterior = %d",anterior);
            printf(", new_value = %d\n",new_value);

            if (new_value > tamanho_a-1)
            {
                int nova_pos = new_value-tamanho_a-1;
                return andador(comandos,tamanho_a,nova_pos,counter+1);
            }
            else if(new_value < 0)
            {
                int negativo = (-1)*new_value;
                int nova_pos = (tamanho_a-1)-negativo -1;
                return andador(comandos,tamanho_a,nova_pos,counter+1);
            }
            else
            {
                return andador(comandos,tamanho_a,new_value,counter+1);
            }
            
        }
        else
        {
            int anterior = ultimo_valor;
            int new_value = anterior - comandos[counter];
            printf("comandos[%d]=[%d]\n",counter,comandos[counter]);

            printf("[%d]anterior = %d\n",counter,anterior);
            printf("[%d]new_value = %d\n",counter,new_value);


                if (new_value > tamanho_a-1)
                {
                    int nova_pos = new_value-tamanho_a-1;
                    printf("nova_pos=%d\n",nova_pos);
                    return andador(comandos,tamanho_a,nova_pos,counter+1);
                }
                else if(new_value < 0)
                {
                    int negativo = (-1)*new_value;
                    int nova_pos = (tamanho_a-1)-negativo-1;
                    printf("nova_pos=%d\n",nova_pos);
                    return andador(comandos,tamanho_a,nova_pos,counter+1);
                }
                else
                {
                    return andador(comandos,tamanho_a,new_value,counter+1);
                }
                
    }
}
}

void scanner(int a[], int tamanho, int counter)
{
    if (tamanho-1 == counter)
    {
        int x;
        scanf("%d",&x);
        a[counter] = x;
        //printf("[%d]\n",a[counter]);
        return;
    }
    int x;
    scanf("%d",&x);
    a[counter] = x;
    scanner(a,tamanho,counter+1);
}

int main() 
{
    int tamanho;
    scanf("%d",&tamanho);
    if(tamanho < 0)
    {
        return 0;
    }
    scanner(comandos,tamanho,0);
    int result = andador(comandos,tamanho,0,0);
    printf("%d\n",result);
	return 0;
}