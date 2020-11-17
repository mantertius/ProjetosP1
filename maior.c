#include <stdio.h>
#include <stdlib.h>

int maior(int x, int y, int z)
{
    int maiorXY = (x + y + abs(x-y))/2;
    int maiorXYZ  = (maiorXY + z + abs(maiorXY-z))/2;
    return maiorXYZ;
} 

int main()
{
    int n1,n2,n3;
    scanf("%d%d%d", &n1,&n2,&n3);
    printf("%d\n", maior(n1,n2,n3));
    return 0;
}