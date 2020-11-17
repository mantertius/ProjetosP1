/*  Level	Potência (em W)
     1-20 	20 + (level)^3
    21-40	8000 + (level - 10)^2
    41-60	9000 + 5*level
    61-80	9300 + 2*level
    81-100	9500 + level */
#include <stdio.h>
#include <math.h>
int main()
{
    int level;
    scanf("%d", &level);
    int pot1 = 20 + pow(level,3);
    int pot2 = 8000 + pow((level - 10),2);
    int pot3 = 9000 + (5*level);
    int pot4 = 9300 + (2*level);
    int pot5 = 9500 + level;
    
    if (level>= 1 && level <= 20)
    {
        printf("Potencia de : %d W\n", pot1);
    }
    else if (level>= 21 && level <= 40)
    {
        printf("Potencia de : %d W\n", pot2);
    }
    else if (level>= 41 && level <= 60)
    {
        printf("Potencia de : %d W\n", pot3);
    }
    else if (level>= 61 && level <= 80)
    {
        printf("Potencia de : %d W\n", pot4);
    }
    else if (level>= 81 && level <= 100)
    {
        printf("Potencia de : %d W\n", pot5);
    }
    return 0;

}