//https://thehuxley.com/problem/713 
#include <stdio.h>
static int numero_mult = 0;
void num_mult (int z)
{
    numero_mult = numero_mult + 1;
    printf("%d\n",z);
}
void encontra_mult(int x, int y, int y2)
{   
    int z = y;
    if ((y2 < x) || (y > y2))
    {
        if (numero_mult == 0)
        {
            printf("INEXISTENTE\n");
        }
        return;  
    }
    else if (y%x == 0)
    {
        num_mult(z);
        encontra_mult(x,y+1,y2);
    }
    else if (y%x != 0)
    {
        encontra_mult(x,y+1,y2);
    }
}
int main()
{
    int num,interval1,interval2;
    
    scanf("%d",&num);
    scanf("%d",&interval1);
    scanf("%d",&interval2);
 
    encontra_mult(num, interval1, interval2);

    return 0;
}