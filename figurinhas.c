#include <stdio.h>
#include <string.h>
#define MAX 1111111
int iguais[MAX];
int unicos[MAX];
int eq[MAX];

void zera_iguais(int a[], int N)//zera todos os valores que aparecem mais de uma vez! recebe uma matriz de irmao e o numero de figurinhas desse irmao
{
    int i = 0;
    for (i = 0; i < N; i++)//trava um valor de eq
    {
        int p = eq[i];
        
        for (int t = 0; t < N; t++)
        {
            if(p == a[t])//zera todos os iguais a ela 
            {
                int aux = 0;
                a[t] = 0;
            }
        }
        
    }
}

void equal_finder(int a[], int N)//recebe o 
{
    int n_iguais = 0;
    
    for(int i = 0; i<N; i++) //trava um elemento da principal e 
    {
        int k = 0;
        k = a[i];
        int t = 0;

        for (t = i+1; t < N; t++)//com o elementro travado sai passando em todos os outros pra ver se tem algum igual
        {
            if(k == a[t])
            {
                eq[n_iguais] = a[t];

                if (eq[n_iguais-1] != eq[n_iguais]) //elimina repetição no array dos iguais
                {
                    n_iguais = n_iguais++;
                }
            }
        }
        
    }
}
int sominha(int a[], int N)
{
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum = a[i]+eq[i]+sum;
       // printf("sum = [%d]\t",sum);
    }
    //printf("\n");
    return sum;
}
int main()
{
    int n_fig;
    scanf("%d",&n_fig);

    int serial[n_fig];

    for (int i = 0; i < n_fig; i++)
    {
        int n;
        scanf("%d",&n);
        serial[i] = n;
    }
    
    int j=0;//numero de figurinhas total
    int m=0;//numero de figurinhas total

    int j_sum = 0;
    int m_sum = 0;

    int jo[1000000];//figurinhas de joao
    int ma[1000000];//figurinhas de maria

    for (int i = 0; i < n_fig; i++)//contador de figurinhas pra cada1
    {
        if(serial[i]%2 == 0)
        {
            jo[j] = serial[i];
            j = j+1; //contador de j
        }
        else
        {
            ma[m] = serial[i];
            m = m+1;    //contador de m
        }
    }
/*
    for (int i = 0; i < n_fig; i++)
    {
        
            printf("ma[%d] = %d\n", i,ma[i]);
    }
    
    
    for (int i = 0; i < j; i++)// analisa se há repetição JOAO
    {
        if (jo[i] == jo[i+1])
        {
            
            break;
        }
        else
        {
            int old_sum = j_sum;
            j_sum = jo[i] + old_sum;
        }
    }

    for (int i = 0; i < m ; i++)// analisa se há repetição MARIA
    {
        int analisado;
        ma[i] = analisado;
        
        for (int l = 0; l < m; l++)
        {
            if
        }
        
        
    }
*/
    printf("%d\n%d\n",j,m); //IMPRIME OS DOIS PRIMEIROS VALORES

    equal_finder(jo,j);
    zera_iguais(jo,j);
    j_sum = sominha(jo,n_fig);
    memset(eq,0,sizeof(eq)/sizeof(eq[0]));


    equal_finder(ma,m);
    zera_iguais(ma,m);
    m_sum = sominha(ma,n_fig);
    memset(eq,0,sizeof(eq)/sizeof(eq[0]));


    if (m_sum > j_sum)
    {
        printf("%d\n",m_sum);
    }
    else
    {
        printf("%d\n",j_sum);
    }
    
        
    return 0;
}

/*
void equal_checker(int a[], int tamanho, int indice)
{
    for (int i = 0; i < tamanho; i++)
    {
        if(a[indice] != a[i])
        {
            unicos[indice] == a[]
        }
    }   
    return equal_checker(a,tamanho, indice+1); 
}*/