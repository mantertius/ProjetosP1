#include <stdio.h>
#include <string.h>

#define MAX 1000001
int delta_3(int m, int a[][m])
{
    int delta = 0;
    int p_sum = (a[0][0]*a[1][1])*a[2][2] + a[0][1]*(a[1][2]*a[2][0]) + a[0][2]*(a[1][0]*a[2][1]);
    int n_sum = (a[0][0]*a[1][2])*a[2][1] + a[0][1]*(a[1][0]*a[2][2]) + a[0][2]*(a[1][1]*a[2][0]);
    printf("%d\t", p_sum);
    printf("%d\n", n_sum);

    delta = p_sum - n_sum;
    return delta;

}
int great(int m, int a[][m], int N)
{
    int i,j;
    int blau = -10001;
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            int n1,n2;
            n1 = a[i][j];
            n2 = a[i][j+1];
            if (n1 < n2)
            {
                printf("a[%d][%d]=[%d]\n",i,j+1, a[i][j+1]);
                if (j+1 >= 3)
                {
                    printf("FIM?[%d]\n", a[i][j+1]);
                    break;
                }
                
                blau =  a[i][j+1];
                printf("blau = %d\t",blau);

            } 
            printf("MAIOR: %d\n",blau);
        }
        
    }
    return blau;
    
}
int main()
{
    int i,j;
    int matrix[3][3];
    
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            int n;
            scanf("%d",&n);
            matrix[i][j] = n;
            printf("matrix[%d][%d] = %d\t",i,j,n);
        }
        printf("\n");
    }
    
    int sum = 0;
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            sum = sum + matrix[i][j];
        }
        
    }

    double media = (double) sum/9;
    printf("%.2lf ",media);
    



    int delta;
    int maior = great(3,matrix,9);
    printf("%d ", maior);
    if (maior > 0)
    {
        delta = 1;
    }
    else if (maior < 0)
    {
        delta = -1;
    }
    else
    {
        delta = 0;
    }
    
    printf("%d ",delta);
    int princ = matrix[0][0]+matrix[1][1]+matrix[2][2];
    printf("%d\n",princ);

    
    return 0;
}