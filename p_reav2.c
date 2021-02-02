#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
n corresponde ao n�mero de casas do tabuleiro.
m corresponde ao n�mero de jogadores.
o corresponde ao n�mero de rodadas.
k corresponde a quantidade de faces de cada dado.
*/

void scan_sapo(int it, int m, int id[], int c[], int k, int dado[][k],int  atual[])//it � o jogador atual m � o numero do jogador, o jogadores est�o indexados pelo index de id[]e de c[]
{
    //printf("come�ou o scan\n");
    if(it > m-1)
    {
        return;
    }
    
    int x;
    scanf("%d",&x);
    c[it]=x;
    atual[it]=x;

    int Id;
    scanf("%d",&id[it]);

    //printf("%d ",c[it]);
    //printf("%d, dado:\n", id[it]);

    for (int i = 0; i < k; i++)
    {
        int pl;
        scanf("%d",&pl);
        dado[it][i] = pl;
        //printf("%d ",dado[it][i]);
    }

    //printf("\n#######\n");
    return scan_sapo(it+1,m,id,c,k,dado,atual);
}

int array_lowest(int a[], int indice, int tamanho, int menor, int indice_menor) //imprime o valor menor do array, com seu indice
{
    if(indice == tamanho)
    {
        return indice_menor;
    }
    if(a[indice] < a[indice_menor])
    {
        menor = a[indice];
        indice_menor = indice;
    }
    //printf("[%d] MENOR:%d, INDICE DO MENOR:%d\n",indice, menor,indice_menor);

    return array_lowest(a,indice+1,tamanho,menor,indice_menor);
}

void rodada(int n_s, int c[], int k, int dado[][k], int casas[], int atual[], int n_face, int n_casas)
{
    //printf("come�a a rodada, sapo %d \n",n_s);
    int hm;
    
    hm = dado[n_s][n_face];//quanto vai andar por causa da face
    //printf("\t\tdado[%d][%d]=[%d]\t ",n_s,n_face,hm);
    atual[n_s] = atual[n_s] + hm;// lugar onde o sapo vai ficar depois de ver a face do dado
    
    if(atual[n_s]<0)
    {
        atual[n_s] = n_casas + atual[n_s] + 1;
    }
    else if(atual[n_s] > n_casas)
    {
        atual[n_s] = atual[n_s] - n_casas - 1;
    }
    //printf(" \t meido da rodada: atual[%d]= %d \t ", n_s,atual[n_s]);
    int L = atual[n_s];//casa atual

    int qt_vai_andar = casas[L];//quanto vai andar por causa do valor da casa
  

    atual[n_s] = atual[n_s] + qt_vai_andar;

    if(atual[n_s]<0)
    {
        atual[n_s] = n_casas + atual[n_s] + 1;
    }
    else if(atual[n_s]>n_casas)
    {
        atual[n_s] = atual[n_s] - n_casas - 1;
    }
    //printf("fim> position[%d]= %d \n ", n_s,atual[n_s]);
    return;

}

int main() 
{
    int n,m,o,k;
    scanf("%d",&n);//n casas
    scanf("%d",&m);//n jogadores
    scanf("%d",&o); //numero de rodadas
    scanf("%d",&k);//n faces
    int casas[n];//valor das casas do tabuleiro
    int c[m];//casa inicial
    int id[m];
    int dado[m][k];
    int atual[m];

    for (int i = 0; i < n; i++)//recebe as casas do tabuleiro
    {
        int plum;
        scanf("%d",&plum);
        casas[i]=plum;
        //printf("[%d] ",casas[i]);
    }
    //printf("\n");

    scan_sapo(0,m,id,c,k,dado,atual);

    for (int i = 0; i < o; i++)
    {
        //printf("===RODADA %d====\n",i);
        for (int t = 0; t < m; t++)
        {
            int n_face;
            scanf("%d",&n_face);
            rodada(t,c,k,dado,casas,atual,n_face,n-1);  

        }
        
    }

    int indice_do_menor_id = array_lowest(id,0,m,id[0],0);
    for (int i = 0; i < m; i++)
    {
        int indice_do_menor_id = array_lowest(id,0,m,id[0],0);
        printf("position:%d id:%d\n", atual[indice_do_menor_id], id[indice_do_menor_id]);
        id[indice_do_menor_id] = 1215752191;
    }
	return 0;
}