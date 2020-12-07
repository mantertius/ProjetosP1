#include <stdio.h>
//vida V 
//dano inicial inteiro D.
//A batalha termina quando um dos pokemons perde toda sua vida.
//normal = D_enemy_atual
//especial →  D_new = D_0 + 50.

//Bezaliel vai atacar todos os turnos até derrotar o inimigo ou perder tentando
//Clodes vai usar a habilidade de incrementar o dano de seu pokemon até chegar num ponto que não possa mais perder(qual o ponto?) e só então começar a atacar
//Considere que o pokemon de Clodes é o mais rápido, ou seja, ele sempre ataca primeiro
/*3
100 500 20 50
1000 1000 20 30
10000 10500 10 50*/
#define clo D_enemy
#define bez D_new
#define clo_v v1
#define clo_d d1

#define bez_v v2
#define bez_d d2

int clodes_dmg[]={0};
int bezaliel_dmg[]={0};

void dmg_comparator(int x, int y)
{
    if (x>y)
    {

    }
}

void battle(int clo_v, int bez_v, int clo_d, int bez_d,int counter)
{
    int clo_d_new = clo_d + 50; //clodes usa habilidade especial
    clodes_dmg[counter] = clo_d_new;
    bez_d = clo_d_new;
    bezaliel_dmg[counter] = clodes_dmg[counter];
    int clo_v_new = clo_v - bez_d;
    int bez_v_new = bez_v - clo_d_new;

    printf("%d\n",bez_v_new);
    printf("%d\n",clo_v_new);
    if (clo_d_new >= bez_v) //se o dmg de clodes for maior q a vida do bez, ganha
    {
       printf("Clodes\n");
       return;
    }    
    else if ((bez_v-clo_d_new <= 50) && (clo_v_new > clo_d_new))//estamos avaliando o proximo round
    {
       printf("Clodes!\n");
       return;
    }
    else //se o dmg do clodes nao for maior que a vida do bez, ele ataca
    {
       //int clo_v_new = clo_v - clo_d_new; //nova vida de cloves, com menos hp q antes
        if(clo_v_new <= 0 && bez_v_new > 0)
        {
            printf("Bezaliel\n");
            return;
        }
    }

    printf("clodes_dmg[%d] = %ls, bezaliel_dmg[%d] = %ls",counter, &clodes_dmg[counter],counter, &bezaliel_dmg[counter]);

    //int bez_v_new = bez_v - clo_d_new
    battle(clo_v_new,clo_d_new,bez_v,bez_d,counter+1);
}
void scan(int x)
{
    if (x == 0)
    {
        return;
    }
    int v1,v2,d1,d2;
    scanf("%d",&v1);
    scanf("%d",&v2);
    scanf("%d",&d1);
    scanf("%d",&d2);
    battle(clo_v,bez_v,clo_v,bez_d,0);
    scan(x-1);
}

int main ()
{
    int n_battles;
    scanf("%d",&n_battles);
    scan(n_battles);
    //printf("Clodes\n");
   // printf("Bezaliel\n");

}