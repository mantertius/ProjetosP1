#include <stdio.h>
void scan()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    if ((n1 == -1) || (n2 == -1))
    {
        return;
    }
    restfinder(n1,n2);
    scan();
}
int restfinder(int x, int y)
{
    int rest;
    if (x>y)
    {
        rest = x%y;
        printf("%d%%%d = %d\n", x, y, rest);
        
    }
    else
    {
        printf("%d%%%d = %d\n", x, y, rest);
    }
    scan();
    return 0;
}
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    restfinder(n1,n2);
    return 0;