#include <stdio.h>
#include <string.h>

void sum_matrixes(int m, int a[][m], int b[][m], int r[][m])
{
    int i=0,j=0;
    
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            r[i][j] = a[i][j] + b[i][j];
            //printf("%d\t",r[i][j]);
        }
        //printf("\n"); 
    }
}
void scan_matrix_for(int m, int a[][m])
{
    int i,j;
    for (i = 0; i < m; i++)
    {
        for ( j = 0; j < m; j++)
        {
            int n;
            scanf("%d",&n);
            a[i][j] = n;
            //printf("%d\t",n);
        }
        //printf("\n");
    }
    //printf("\n");
}

void print_array(int m, int a[][m])
{
    int i,j;
    for (i = 0; i < m; i++)
    {
        for ( j = 0; j < m; j++)
        {
            int n = a[i][j];
            printf("%d\n",n);
        }
    }
}

int not_empty_finder(int m, int a[][m])// 0 para vazia e 1 para nao vazia
{
    int i,j;
    int ans = 0;
    for (i = 0; i < m; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if (a[i][j] != 0)
            {
                ans = 1;
            }
            
        }
    }
    return ans;
}

int main()
{
    int N;
    scanf("%d",&N);

    int m1[N][N];
    int n1[N][N];
    int r[N][N];

    
    scan_matrix_for(N,m1);
    scan_matrix_for(N,n1);

    sum_matrixes(N,m1,n1,r);

    int ans = not_empty_finder(N,r);
    if (ans == 1)
    {
        print_array(N,r);
    }
    else
    {
        printf("Vazia\n");
    }

    return 0;
}