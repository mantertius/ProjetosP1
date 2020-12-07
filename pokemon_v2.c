#include <stdio.h>
#include <string.h>

#define bez_life v2 
#define bez_dmg d2
#define clo_life v1
#define clo_dmg d1 //atalho para d1

#define bez_wins 77
#define clo_wins 88

#define bez_hability 121
#define clo_hability 50

#define bez 95
#define clo 59
//Bezaliel vai atacar todos os turnos até derrotar o inimigo ou perder tentando
//Clodes vai usar a habilidade de incrementar o dano de seu pokemon até chegar num ponto que não possa mais perder(qual o ponto?) e só então começar a atacar
//Considere que o pokemon de Clodes é o mais rápido, ou seja, ele sempre ataca primeiro

int clo_dano[]={0}; //dano de clo em cada turno, reseta em cada stat_scan()
int clo_vida[]={0}; //vida de clo em cada turno, reseta em cada stat_scan()
int bez_dano[]={0}; //dano de bez em cada turno, reseta em cada stat_scan()
int bez_vida[]={0}; //vida de bez em cada turno, reseta em cada stat_scan()



int hability(int nome, int numero_do_turno)
{
    if (nome == bez)
    {
        bez_dano[numero_do_turno] = clo_dano[numero_do_turno];
        clo_vida[numero_do_turno] = clo_vida[numero_do_turno-1] - bez_dano[numero_do_turno];
        return 1;
    }
    else if (nome == clo)
    {
        if (clo_dano[numero_do_turno] == bez_vida [numero_do_turno])
        {
            bez_vida[numero_do_turno] = 0;
        }
        else
        {
            bez_vida[numero_do_turno]= bez_vida[numero_do_turno-1];
        }
        clo_dano[numero_do_turno]= clo_dano[numero_do_turno-1] + 50;
        return 2;
    }
    else
    {
        return 123123123;
    }
    
}
int turn(int nome, int numero_do_turno) //analiza o turno
{
    if (nome == bez)
    {
        return hability(bez,numero_do_turno);
    }
    else if (nome == clo)
    {
        return hability(clo,numero_do_turno);
    }
    
}
int battle(int v1, int d1, int v2, int d2, int numero_do_turno) //analisa a vida dos pokemons a cada turno e retorna o vencedor
{
    turn(clo,numero_do_turno);
    turn(bez,numero_do_turno);
    v1 = clo_vida[numero_do_turno];
    v2 = bez_vida[numero_do_turno];
    d1 = clo_dano[numero_do_turno];
    d2 = bez_dano[numero_do_turno];
   
    printf("\n------------------------- RODADA %d -------------------------\n",numero_do_turno);
    printf("STORAGE: clo_vida[%d] = [%d], bez_vida[%d] = [%d]\nSTORAGE: clo_dano[%d] = [%d], bez_dano[%d] = [%d]\n",numero_do_turno,clo_vida[numero_do_turno],numero_do_turno,bez_vida[numero_do_turno],numero_do_turno,clo_dano[numero_do_turno],numero_do_turno,bez_dano[numero_do_turno]);

    if (clo_life <= 0)
    {
        return bez_wins; //bez wins
    }
    if (bez_life <= 0)
    {
        return clo_wins;
    }


    battle(v1,d1,v2,d2,numero_do_turno+1);

}

int stat_scan (int n_battles) //recebe os inputs baseado no numero de batalhas
{
    if ( n_battles == 0)
    {
        return 42;
    }
    int v1;
    int v2;
    int d1;
    int d2;
    scanf("%d",&v1);
    scanf("%d",&v2);
    scanf("%d",&d1);
    scanf("%d",&d2);

    clo_dano[0]=clo_dmg;
    clo_vida[0]=clo_life;
    bez_dano[0]=bez_dmg;
    bez_vida[0]=bez_life;
    
    printf("\n======================== COMEÇO DA BATALHA ======================================\n");
    printf("INPUT:            v1 = {%d},          v2 = {%d},          d1 = {%d},          v2 = {%d}\n",v1,v2,d1,d2);
    printf("STORAGE: clo_vida[0] = [%d], bez_vida[0] = [%d], clo_dano[0] = [%d], bez_dano[0] = [%d]\n",clo_vida[0],bez_vida[0],clo_dano[0],bez_dano[0]);
  //  printf("END: n capsulas...%d\n\n",capsulas);
    int resultado = battle(v1,v2,d1,d2,1); //resultado da batalha

    if (resultado == bez_wins)
    {
        printf("Bezaliel\n");
    }
    if (resultado == clo_wins)
    {
        printf("\n!Clodes!\n");
    }
    stat_scan(n_battles-1);
    
}

int main () //recebe o numero de batalhas e começa o processo
{
    int n_battles;
    scanf("%d",&n_battles);
    stat_scan(n_battles);
    return 0;
}