#include <stdio.h>
unsigned long int conversao(int x)
{
    return x*(31536000);
}

int main()
{
    int anos;
    scanf("%d", &anos);
    unsigned long int sec;
    sec = conversao(anos);
    
    printf("%ld\n", sec);

    
    return 0;

}