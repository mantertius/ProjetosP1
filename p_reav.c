#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#define MAX 10001

int blue(int n, int a[][7])
{
    //printf("analisanndo a[%d]\n",n);
    if(a[n][0] == 0)//so pode ser 1 e 4
    {
        if(a[n][5] == 1)
        {
            return 4;
        }
        else
        {
            return 1;
        }
        
    }
    else if (a[n][6] == 0 && a[n][4] == 1)
    {
        return 0;
    }
    else if(a[n][6]==0 && a[n][4] == 0 && a[n][0]==1)
    {
        return 7;
    }
    else if(a[n][2] == 0)
    {
        return 2;
    }
    else if (a[n][4] == 0 && a[n][5] == 0 && a[n][6] == 1)
    {
        return 3;
    }
    else if(a[n][1] == 0)
    {
        if (a[n][4] == 0)
        {
            return 5;
        }
        else
        {
            return 6;
        }  
    }
    else if (a[n][4] == 0 && a[n][0] == 1 && a[n][1] == 1 && a[n][2] == 1 && a[n][3] == 1 && a[n][5] == 1 && a[n][6] == 1)
    {
        return 9;
    }
    else
    {
        return 8;
    }
}

void scan_array(int i, int n, int a[][7])
{
    if(i>n-1)
    {
        return;
    }
    for (int j = 0; j < 7; j++)
    {
        int k;
        scanf("%d", &k);
        a[i][j] = k;
    }
    //printf("OK");
    int resposta = blue(i,a);
    printf("%d",resposta);

    return scan_array(i+1,n,a);

 
}
int main() 
{
    int n;
    int display[10001][7];//i = numero do display, j = configuração do display
    scanf("%d",&n);
    scan_array(0,n,display);
    printf("\n");

	return 0;
}