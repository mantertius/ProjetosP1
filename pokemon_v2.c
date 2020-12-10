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
//int bez_dano[]={0}; //dano de bez em cada turno, reseta em cada stat_scan()
int bez_vida[]={0}; //vida de bez em cada turno, reseta em cada stat_scan()
static int bez_d = 0;

int turn_counter(int numero_do_turno)
{
    if (bez_vida[numero_do_turno]/clo_dano[numero_do_turno] < clo_vida[numero_do_turno]/bez_d)
    {
        return clo;
    }
    else
    {
        return bez;
    }
}



void hability(int nome, int numero_do_turno, int d2)
{   
   printf("\nantes da analise:{%d}\n",clo_vida[numero_do_turno]);
    
    if (nome == clo)
    {
        clo_vida[numero_do_turno] = clo_vida[numero_do_turno-1];
        clo_dano[numero_do_turno] = clo_dano[numero_do_turno-1] + 50;


        if (clo_dano[numero_do_turno] >= bez_vida [numero_do_turno] || turn_counter(numero_do_turno) == clo)
        {
            bez_vida[numero_do_turno] = 0;
        }
        else
        {
            bez_vida[numero_do_turno] = bez_vida[numero_do_turno-1];
        }
       // printf("\ndepois de analisar clo:[%d]",clo_vida[numero_do_turno]);
    } 


    else
    {
        clo_vida[numero_do_turno] = (clo_vida[numero_do_turno-1] - d2);
        printf("clo_vida-1:{%d}\n",clo_vida[numero_do_turno-1]);
        printf("clo_vida:{%d}\n",clo_vida[numero_do_turno]);

        return;
    }
}
void turn(int nome, int numero_do_turno,int d2) //analiza o turno
{
    if (nome == bez)
    {
        hability(bez,numero_do_turno, d2);
    }
    else if (nome == clo)
    {
        hability(clo,numero_do_turno, d2);
    }
    
}
int battle(int v1, int v2, int d1, int d2, int numero_do_turno) //analisa a vida dos pokemons a cada turno e retorna o vencedor
{
    bez_d = bez_dmg;
    turn(clo,numero_do_turno,d2);
    turn(bez,numero_do_turno,d2);  
    //depois de analisar o turno, atualiza as variaveis com o que aconteceu
    clo_life = clo_vida[numero_do_turno];
    bez_life = bez_vida[numero_do_turno];
    clo_dmg = clo_dano[numero_do_turno];
    
   
    printf("\n------------------------- STATS NO FIM DA RODADA %d -------------------------\n",numero_do_turno);
    printf("STORAGE: clo_vida[%d] = [%d], bez_vida[%d] = [%d]\nSTORAGE: clo_dano[%d] = [%d], bez_d = [%d]\n",numero_do_turno,clo_vida[numero_do_turno],numero_do_turno,bez_vida[numero_do_turno],numero_do_turno,clo_dano[numero_do_turno],bez_d);

    if (clo_life <= 0)
    {
        return bez_wins; //bez wins
    }
    if (bez_life <= 0)
    {
        return clo_wins;
    }


    battle(v1,v2,d1,d2,numero_do_turno+1);

}

int stat_scan (int n_battles) //recebe os inputs baseado no numero de batalhas
{
    if (n_battles == 0)
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
    bez_vida[0]=bez_life;
    bez_d = bez_dmg; //bez_d recebe bez_dmg
    
    printf("======================== COMEÇO DA BATALHA ======================================\n");
    printf("INPUT:            v1 = {%d},          v2 = {%d},          d1 = {%d},    d2 = {%d}\n",v1,v2,d1,d2);
    printf("STORAGE: clo_vida[0] = [%d], bez_vida[0] = [%d], clo_dano[0] = [%d], bez_d = [%d]\n",clo_vida[0],bez_vida[0],clo_dano[0],bez_d);
  //  printf("END: n capsulas...%d\n\n",capsulas);
    int resultado = battle(v1,v2,d1,d2,1); //resultado da batalha

    if (resultado == bez_wins)
    {
        printf("WINNER:::Bezaliel\n\n");
    }
    if (resultado == clo_wins)
    {
        printf("!WINNER:::Clodes!\n");
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