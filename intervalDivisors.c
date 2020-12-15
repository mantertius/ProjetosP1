//https://thehuxley.com/problem/713 ALTERADO
#include <stdio.h>
static int numero_divisores = 0;
void num_div (int z)
{
    numero_divisores = numero_divisores + 1;
    printf("%d\n",z);
}
void encontradivisores(int x, int y, int y2)
{   
    int z = y2;
    if ((y2 <= 1) || (y > y2))
    {
        if (numero_divisores == 0)
        {
            printf("INEXISTENTE\n");
        }
        return;  
    }
    else if (x%y2 == 0)
    {
        num_div(z);
        encontradivisores(x,y,y2-1);
    }
    else if (x%y2 != 0)
    {
        encontradivisores(x,y,y2-1);
    }
}
int main()
{
    int num,interval1,interval2;
    
    scanf("%d",&num);
    scanf("%d",&interval1);
    scanf("%d",&interval2);
 
    encontradivisores(num, interval1, interval2);

    return 0;
}