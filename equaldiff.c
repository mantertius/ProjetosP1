#include <stdio.h>

int main()
{
    int n1,n2,n3;
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 == n2 && n2 == n3)
    {
        printf("1\n"); //0 diferentes
    }
    else if (n1 != n2 && n1 != n3 && n2 != n3)
    {
        printf("2\n"); //todos diferentes
    }

    else 
    {
        printf("3\n"); //1 diferente
    }
    return 0;
}