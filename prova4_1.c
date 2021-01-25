#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    int i,j;
    for (i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            int k;
            scanf("%d",&k);
            matrix[i][j] = k;
            //printf("matrix[%d][%d] = %d\t",i,j,k);
        }
        //printf("\n");
    }

    int princ = 0;
    int secu  = 0;
    for (i = 0; i < n; i++)
    {
        princ = matrix[i][i]+princ;
        printf("princ[%d]=%d\n", i,princ);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j == n-1)
            {
                secu = secu + matrix[i][j];
                printf("secu[%d][%d]=%d\n", i,j, sec);
            }
            
        }
        
    }
    

    if (princ > secu)
    {
        printf("Principal\n");
    }
    else if (princ == secu)
    {
        printf("Empate\n");
    }
    else
    {
        printf("Secundaria\n");
    }
    
    
    
	return 0;
}