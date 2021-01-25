#include <stdio.h>
#include <string.h>
/*
0 -> Caso a posição esteja vazia.
1 -> Caso a posição esteja sendo ocupada por uma torre do Protagonista.
2 -> Caso a posição esteja sendo ocupada pelo rei do Protagonista.
3 -> Caso a posição esteja sendo ocupada pelo rei de Z.

Sabendo disto, o Protagonista quer saber se a situação atual do 
jogo se configura como uma situação de Xeque-mate a seu favor ou não.
*/
#define check 221
#define yes 131313
#define no 31515151
int escape_route_favorable_for_p(int m, int comp[][m], int l, int c)
//l e c são as coordenadas do rei de protagonista
{
    int diff_counter = 0;

    //os três da linha de baixo,
    if(comp[l+1][c+1] != -7 && (l+1<8 && c+1<8))
    {
            //comp[l+1][c+1] = 3;
            //comp[l][c] = 0;
        diff_counter = diff_counter+1;
    }
    if(comp[l+1][c] != -7 && l+1<8)
    {
            //comp[l+1][c] = 3;
            //comp[l][c] = 0;
        diff_counter = diff_counter+1;
    }
    if(comp[l+1][c-1] != -7 &&  l+1 < 8 && c-1 >= 0)
    {
        //comp[l+1][c-1] = 3;
        // comp[l][c] = 0;
        diff_counter = diff_counter+1;
    } 
    
    //os três de baixo
    if (l-1>= 0)
    {
        if(comp[l-1][c+1] != -7 && (l-1>= 0 && c+1<8))
        {
                //comp[l-1][c+1] = 3;
                //comp[l][c] = 0;
            diff_counter = diff_counter+1;
        }
        if(comp[l-1][c] != -7 && l-1>= 0)
        {
            //comp[l-1][c] = 3;
                //comp[l][c] = 0;
            diff_counter = diff_counter+1;
        }
        if(comp[l-1][c-1] != -7 && (l-1>= 0 && c-1>=0))
        {
            // comp[l-1][c-1] = 3;
            //comp[l][c] = 0;
            diff_counter = diff_counter+1;
        }
    }

    //os dois da mesma linha
    if(comp[l][c+1] != -7 && c+1 < 8)
    {
       // comp[l][c+1] = 3;
        //comp[l][c] = 0;
        diff_counter = diff_counter+1;
    }
    if(comp[l][c-1] != -7 && c-1 >=0)
    {
        //comp[l][c-1] = 3;
       // comp[l][c] = 0;
        diff_counter = diff_counter+1;
    }


    //aqui dá a resposta :)
    if(diff_counter > 1)
    {   
        //printf("[%d]\n",diff_counter);
        return no;
    }
    else if (diff_counter <= 1)
    {
        return yes;
    }  
}

int tower(int m, int t[][m], int comp[][m], int l, int c)//descobre se torre pode comer o rei inimigo
{
    int l1,c1;
    for (int i = 0; i < m; i++)
    {
        t[l][i];
        if(t[l][i] == 0 && i != c)
        {
            if(t[l][i] == 1 || t[l][i] == 2)
            {

               break;
            }
            if(t[l][i] == 3)
            {
                return check;
            }
            else
            {
                comp[l][i] = -7;
            }
            
        }   
    }
    for (int i = 0; i < m; i++)
    {
        t[i][c];
        if(t[i][c] == 0 && i != l)
        {
            if(t[i][c] == 1 || t[i][c] == 2)
            {
                if (i>l)
                {
                    for (int k = c+1 ; k < 8; k++)
                    {
                        comp[i][c] = 0;
                    }
                }
               break;
            }

            if(t[i][c] == 3)
            {
                return check;
            }

            else
            {
                comp[i][c] = -7;
                //printf("[%d]",comp[i][c]);
            }
            
        }   
    }
    
}

void compromised_by_tower(int m, int comp[][m], int l1, int c1, int l2, int c2)
{
    for (int i = 0; i < 8; j++)
    {
        for (int j = 0; j < 8; j++)
        {
            if(comp[i][j]) 
        }
        
    }
    
}

void rei_p(int m, int comp[][m], int l, int c)
{
    if(comp[l+1][c+1] == 0)
    {
        comp[l+1][c+1] = -7;
    }
    if(comp[l+1][c] == 0)
    {
        comp[l+1][c] = -7;
    }
    if(comp[l+1][c-1] == 0)
    {
        comp[l+1][c-1] = -7;
    }

    if(comp[l-1][c+1] == 0)
    {
        comp[l-1][c+1] = -7;
    }
    if(comp[l-1][c] == 0)
    {
        comp[l-1][c] = -7;
    }
    if(comp[l-1][c-1] == 0)
    {
        comp[l-1][c+1] = -7;
    }

    if(comp[l][c+1] == 0)
    {
        comp[l][c+1] = -7;
    }
    if(comp[l][c-1] == 0)
    {
        comp[l][c-1] = -7;
    }
   
}

int rei_z(int m, int t[][m],int i_rei3, int j_rei3, int i_rei2, int j_rei2)// analisa se rei de z come o rei de p
{

    if(i_rei2 == i_rei3-1 || i_rei2 == i_rei3+1 || i_rei2 == i_rei3)//o rei 3 come rei2?
    {
        if (j_rei2 == i_rei3-1 || j_rei2 == i_rei3+1|| j_rei2 == i_rei3)
        {
            t[i_rei3][j_rei3] = 0;
            t[j_rei2][j_rei2] = 3;
            i_rei3 = j_rei2;
            j_rei3 = j_rei2;
            return 32;//come rei
        }
    }
    else
    {
        return -1;//não come rei
    }
    
}

int is_check(int m, int t[][m],int c[][m]) //diz se o check é favoravel para p
{
    int n_torres = 0; //contador de torres para o for saber quando parar
    int linha1,linha2,coluna1,coluna2;//stats das torres
    int Lrei2,Crei2;//stats rei protagonista
    int Lrei3,Crei3;//stats rei z

    for (int i = 0; i < 8; i++) //procura as torres
    {
        for (int j = 0; j < 8; j++)
        {
            if(t[i][j] == 1 && n_torres == 0)//encontrou a torre
            {
                n_torres = n_torres+1;
                linha1 = i;
                coluna1 = j;
                //printf("[%d][%d], torre[%d]\n",i,j,n_torres);
                continue;
            }
            if(t[i][j] == 1 && n_torres == 1)//encontrou a torre
            {
                n_torres = n_torres+1;
                linha2 = i;
                coluna2 = j;
                //printf("[%d][%d], torre[%d]\n",i,j,n_torres);
                break;
            }
        }
        
    }
    
    for (int i = 0; i < 8; i++) //procura o rei prot
    {
        for (int j = 0; j < 8; j++)
        {
            if(t[i][j] == 2)
            {
                Lrei2 = i;
                Crei2 = j;
            }
        }
        
    }

    for (int i = 0; i < 8; i++) //procura o rei z
    {
        for (int j = 0; j < 8; j++)
        {
            if(t[i][j] == 3)
            {
                Lrei3 = i;
                Crei3 = j;
            }
        }
        
    }
    
    int prot_perdeu = rei_z(8,t,Lrei3,Crei3,Lrei2,Crei2);
    if (prot_perdeu == 32)
    {
        return no;//o rei de protagonista foi comido
    }
    else
    {   
        //como o rei de protagonista não pode ser comido, sobra as torres fazendo raiva
        //analisa se as torres podem comer o rei3, criando comp[8][8]
    
        int blu = tower(8,t,c,linha1,coluna1);
        int ble = tower(8,t,c,linha2,coluna2); 
        rei_p(8,c,Lrei2,Crei2);//criar linhas comprometidas de rei

        //o rei so consegue escapar se tiver 
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                printf("%d ",c[i][j]);
            }
         printf("\n");
      //      
        }
        
        int ans = escape_route_favorable_for_p(8,c,Lrei3,Crei3);
        return ans;

    }

}
int main()
{
    int n;//numero de testes
    scanf("%d",&n);
    int tabu[8][8];//vai ser o tabuleiro
    int comp[8][8];//vai ser igual ao tabuleiro, mas onde nao puder andar vai ser -7 ao inves de 0
    for (int  p = 0; p < n; p++) //obtem os tabuleiros, n vezes
    {
        for (int i = 0; i < 8; i++) //obtem o tabuleiro
        {
            for (int j = 0; j < 8; j++)
            {
                int k;
                scanf("%d",&k);
                tabu[i][j] = k;
                comp[i][j] = k;
                //printf("%d ", k);
            }
            //printf("\n");
        }
        //começam as coisas do determinado tabuleiro
        
        int ans = is_check(8,tabu,comp);
        if(ans == no)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
        

        //printf("###########\n");
    }
    
    
}