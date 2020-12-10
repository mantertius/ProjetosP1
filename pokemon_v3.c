//VERSÃO 3.2
//https://thehuxley.com/problem/1250/
#include <stdio.h>
#include <string.h>
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

//v1,d1 CLODES
//v2,d2 BEZALIEL
#define clo 13
#define bez 31



int hp_clodes_turno_n(int turno_n, int dano_bez_inicial, int hp_clodes_inicial)
{
    int hp_clodes = hp_clodes_inicial - dano_bez_inicial*turno_n;
    return hp_clodes; 
}
int dano_clodes_turno_n(int turno_n, int dano_clo_inicial)
{
    int dmg_clodes = (dano_clo_inicial + (50*turno_n));
    return dmg_clodes;
}

int turnos_necessarios_para_clodes_vencer(int hp_clodes,int hp_bezaliel,int dano_clodes_inicial,int dano_bezaliel)
{   
    int turnos = (hp_bezaliel-dano_clodes_inicial)/50;
    return turnos;    
}

int turnos_necessarios_para_bezaliel_vencer (int hp_clodes,int dano_bezaliel)
{
    int turnos = hp_clodes/dano_bezaliel;
    return turnos;
}

int turns_needed(int v1,int v2,int d1,int d2)
{
    int beza = turnos_necessarios_para_bezaliel_vencer(v1,d2);
    int clod = turnos_necessarios_para_clodes_vencer(v1,v2,d1,d2);
    //printf("precisa de %d pra bez ganhar e %d pra clod ganhar\n",beza,clod);
    if (clod > beza)
    {
        return clo;
    }
    else
    {
        return beza;
    }
    
}

int battle(int v1,int v2,int d1,int d2, int round_num)
{
    //turno(v1,v2,d1,d2,round_num);
    //turns_needed(v1,v2,d1,d2);
    int d1_new = d1+50; 
    int v1_new = (v1 - d2);
    if (v1<0 && v2>0)
    {
        return bez;
    }
    if (v1>0 && v2<0)
    {
        return clo;
    }
    
    if ((v2/d1_new < v1/d2 && d2<v1) || (v2 <= 0) || (d1_new >= v2))
    {
        //printf("~~~~primeiro if\n");
        return clo;
    }
    else if (v1 <= 0 || turnos_necessarios_para_bezaliel_vencer(v1,d2) == 0)
    {
        //printf("~~~~segundo if\n");
        return bez;
    }
    else
    {
       // printf("~~~~else\n");
       
        return battle(v1_new,v2,d1_new,d2,round_num+1);
    }
    
    
}
int turno(int v1,int v2,int d1,int d2, int round_num)
{
    printf("no turno %d temos:",round_num);
    printf("DMG_CLO:[%d], HP_CLO:[%d]\n", dano_clodes_turno_n(round_num, d1), hp_clodes_turno_n(round_num, d2, v1));
}
int stat_scan (int n_battles) //recebe os inputs baseado no numero de batalhas
{
    if (n_battles <= 0)
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
    
    int resultado = battle(v1,v2,d1,d2,1); //resultado da batalha

    if (resultado == bez)
    {
        printf("Bezaliel\n");
    }
    if (resultado == clo)
    {
        printf("Clodes\n");
    }

    stat_scan(n_battles-1);
    
}
int main ()
{
    int n_battles;
    scanf("%d",&n_battles);
    stat_scan(n_battles);
    return 0;
}