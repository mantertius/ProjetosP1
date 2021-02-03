#include <string.h>
#include <stdio.h>

#define MAX 1000001

#define bez 31
#define clo 17

typedef struct Pokemons 
{
    double hp;
    double dano_inicial;
    double dano_atual;

}Pokemon;

void SetPokemon(Pokemon *p, double v, double d)
{
    (*p).hp = v;
    p->dano_inicial = d;
    p->dano_atual = d;
    //printf("%d,%d\n", p->hp,p->dano_inicial);
}
int when_b_dies(Pokemon *c, Pokemon *b)
{
    int i = 0;
    double b_hp = b->hp;
    for (i = 0; 0 < b_hp ; i++)
    {   
        if(i == 0)
        {
           b_hp = b_hp - c->dano_atual;
           continue; 
        }

        b_hp = b_hp - c->dano_atual;
                
        
    }
    //printf("bmorre_em=[%d]\n",j);
    return i;
}

int when_c_dies(Pokemon *c, Pokemon *b) //calcula quantos 
{
    int i = 0;
    double c_hp = c->hp;
    for (i = 0; 0 < c_hp ; i++)
    {   
        if(i == 0)
        {
           c_hp = c_hp - b->dano_atual;
           continue; 
        }

        c_hp = c_hp - b->dano_atual;
                
  
    }
    //printf("c_morre_em=[%d]\t",j);
    return i;
}

int battle(Pokemon *c, Pokemon *b)
{
    int i = 1;
    while (c->hp > 0 && b->hp > 0)
    {
        int b_dies = when_b_dies(c,b);
        int c_dies = when_c_dies(c,b);
        if (b_dies <= c_dies)
        {
            b->hp = b->hp - c->dano_atual;
        }
        else
        {
            c->dano_atual = c->dano_atual + 50; //clodes usa habilidade
        }

        if (b->hp <= 0)
        {
            break;
        }
        else
        {
            c->hp = c->hp - b->dano_inicial;
        }

        i = i+1;
    }
    
    if (b->hp <= 0)
    {
        return clo; 
    }
    else
    {
        return bez;
    }
}



int stat_scan (int n_battles) //recebe os inputs baseado no numero de batalhas
{
    if (n_battles <= 0)
    {
        return 42;
    }
    Pokemon clodes;
    Pokemon bezaliel;

    double v1;
    double v2;
    double d1;
    double d2;
    scanf("%lf",&v1);
    scanf("%lf",&v2);
    scanf("%lf",&d1);
    scanf("%lf",&d2);

    SetPokemon(&clodes,v1,d1); //&pega o endereço de clodes e escreve lá
    SetPokemon(&bezaliel,v2,d2);

    int resultado = battle(&clodes,&bezaliel); //resultado da batalha

    if (resultado == bez)
    {
        printf("Bezaliel\n");
    }
    if (resultado == clo)
    {
        printf("Clodes\n");
    }

    return stat_scan(n_battles-1);
    
}


int main()
{
    int n_battles;
    scanf("%d", &n_battles);
    stat_scan(n_battles);
    return 0;
}