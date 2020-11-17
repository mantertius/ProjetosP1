#include <stdio.h>
// ou||
// e &&
int maior(int x, int y, int z)
{
    if( (x>=y && y>=z) || (x>=z && z>=y) )
    {
        return x;
    }
    else if ( (z>=x && x>=y) || (z>=y && y>=x) )
    {
        return z;
    } 
    else if ((y>=x && x>=z) || (y>=z && z>=x) )
    {
        return y;
    }
}

int main()
{
    int n1,n2,n3;
    scanf("%d%d%d",&n1, &n2, &n3);
    printf("[%d]\n",maior(n1,n2,n3));
    return 0;
}