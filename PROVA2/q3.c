#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Como o Protagonista é muito gentil, Z irá começar jogando.
PROTAGONISTA:
1) 1 < X < N.
2)  X é um divisor de N
3)  X é par.
4) O valor de X tem que ser o menor possível.

Z
1) 1 < X < N.
2) X é um divisor de N.
3) X é primo.
4) O valor de X tem que ser o menor possível.

Caso o jogador atual não possa escolher nenhum número que satisfaça as suas condições, ele perde o jogo.
Sua missão nesse problema é dizer quem vai ser o ganhador do jogo e o número de rodadas que irão ser realizadas.
quantidade de rodadas que irão ser realizadas. (descobrir o numero de divisores)
*/
#define prot 333
#define zeta 222


static int numero_divisores = 0;
static int numero_divisores1 = 0;
static int p_number = 0;
static int z_number = 0;

static int round_numb = 0;

int divisores[]={0};
int p_numbers[]={0};
int z_numbers[]={0};



int verificaPRIMO(int x, int y) //verifica se um numero é primo, x é o numero, y = x-1
{
    if (x%y == 0 && y==1)
    {
        return 1; //x é primo
    }
    else if (x%y == 0 && y != 1)
    {
        return 0; //x não é primo
    }
    else
    {
        return verificaPRIMO(x,y-1); // chama recursivamente para verificar se é primo
    }
    
}

int p(int divisor)//analisa o divisor de n para saber se encaixa nas condições de p
{
    if (divisor%2 == 0)
    {
        p_numbers[p_number] = divisor;
        p_number = p_number+1;
        return 1;
    }
    return -1;
}

int  z(int divisor) //analisa o divisor de n para saber se encaixa nas condições de z
{
    if (verificaPRIMO(divisor,divisor-1) == 1)
    {
        z_numbers[z_number] = divisor;
        z_number = z_number+1;
        return 1;
    }
    return -1;
}
void encontradivisores_p(int x, int y, int y2)
{   
    int z = y2;
    if (y2 == 1)
    {
        printf("Z\n%d\n",round_numb);
        return;  
    }
    else if (x%y2 == 0)
    {
        num_div_p(z,x);
        //encontradivisores(x,y,y2-1);
    }
    else if (x%y2 != 0)
    {
       encontradivisores_p(x,y2-1);
    }
}
void num_div_p(int l,int x)
{
    numero_divisores1 = numero_divisores1 + 1;
    if (p(l) == 1)
    {
        round_numb = round_numb + 1;
        encontradivisores(x/l,(x/l)-1);
    }
    else if (p(l)== -1)
    {
        encontradivisores_p(x,l-1);
    }
    
    //printf("%d\n",l);
}

void num_div (int l,int x)
{
    numero_divisores1 = numero_divisores1 + 1;
    if (z(l) == 1)
    {
        round_numb = round_numb + 1;
        encontradivisores_p((x/l),(x/l)-1);
    }
    else if (z(l)== -1)
    {
        encontradivisores(x,l-1);
    }
  
    //printf("%d\n",l);
}
void encontradivisores(int x, int y2)
{   
    int z = y2;
    if (y2 == 1)
    {
        printf("Protagonista\n%d\n",round_numb);
        return;  
    }
    else if (x%y2 == 0)
    {
        num_div(z,x);
        //encontradivisores(x,y,y2-1);
    }
    else if (x%y2 != 0)
    {
       encontradivisores(x,y2-1);
    }
}
void analista (int n1)
{
    p_number = 0;
    z_number = 0;
    round_numb = 0;
    encontradivisores(n1,n1-1);
    return;
}

void scan() //recebe os N
{
    int n1;
    scanf("%d",&n1);
   
    if (n1 < 2 || n1 >300) 
    {
        return;
    } 
    //printf("NUMERO A SER TESTADO: %d\n", n1);
    analista(n1);
    
    scan();
 
}

int main() 
{
    scan();
	return 0;
}