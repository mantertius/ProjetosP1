#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define count 3

typedef struct personagem
{
    int l;
    int v;
}Personagem;

int is_valid(int atacante[][3])//retorna true se for válido e false se não for válido
{
    int center = 0;
    int outside = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
           if (atacante[i][j] == 1)
           {
               if (i==j || i+j = count-1)
               {
                   center = center+1;
                   printf("[%d][%d]\t center = %d\n",i,j,center);
               }
               else
               {
                   outside = outside +1;
               }
           }
           
        }
        
    }
    if (center == 3 && outside == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void round(int luke[][3], int vader[][3], int l, int v)
{
    int lucao = is_valid(luke);
    int vado = is_valid(vader);

    if(lucao != vado)//não é empate
    {
        if (lucao == 1)//vado = 0
        {
            v = v - 15;
        }
        
    }


}
void scan_array(int l,int v)
{
    int i,j;
    int luke[3][3];
    int vader[3][3];
    
    for (i = 0; i < 3; i++)//gets luke's attack
    {
        for ( j = 0; j < 3; j++)
        {
            int n;
            int blue = scanf("%d",&n);
            if (blue == EOF)
            {
                return;
            }
            
            luke[3][3] = n;
            //printf("matrix[%d][%d] = %d\t",i,j,n);
        }
        //printf("\n");
        
    }
    for (i = 0; i < 3; i++)//gets vader's attack
    {
        for ( j = 0; j < 3; j++)
        {
            int n;
            int blue = scanf("%d",&n);
            if (blue == EOF)
            {
                return;
            }
            
            vader[3][3] = n;
            //printf("matrix[%d][%d] = %d\t",i,j,n);
        }
        //printf("\n");
        
    }
    
    round(luke,vader, l, v);

    memset(luke , 0, (sizeof(luke)/sizeof(luke[0])) );
    memset(vader, 0, (sizeof(luke)/sizeof(luke[0])) );
    scan_array();
}
int main()
{
    Personagem Luke,Vader;

    int l,v;
    scanf("%d %d", &Luke.l,&Vader.l);

    scan_array(l,v);

    return 0;
}