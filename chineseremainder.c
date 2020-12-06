#include <stdio.h>
int pA(int n1, int m1, int q)
{   
    int a1,k;
    k = m1;
    int b1 = a1 + k;
    printf("%d + %d*%d", n1,m1,q);
    pA(n1, m1, q+1);
    
}
int chineseremainder(int n1, int m1, int n2, int m2, int n3, int m3)
{
    int N = n1*n2*n3;



    return 0;
}
int main()
{
    int n1,n2,n3,m1,m2,m3;
    scanf("%d%d",&n1,&m1);
    scanf("%d%d",&n2,&m2);
    scanf("%d%d",&n3,&m3);
    printf("%d mod %d,\n%d mod %d,\n%d mod %d");
    chineseremainder(n1,m1,n2,m2,n3,m3);
    return 0;
}