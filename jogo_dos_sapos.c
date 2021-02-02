#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct sapos
{
    int casa_inicial;
    int casa_atual;
}Sapo;
int main() {
    int n,m,o;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&o);
    int casas[n];
    
    Sapo s[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",casas[i]);
    }

    for(int i = 0; i<o ; i++)
    {
        scanf("%d", s[i].casa_atual);
    }
	return 0;
}