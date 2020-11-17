#include <stdio.h>
#include <math.h>

// <10  -- 0
// >=11 <= 30 -- 1 (20 reais máx)
// >=31 <=100 -- 2 (140 reais máx)
// >100 -- 5       
//7 reais da assinatura básica
//7+20+140 = 167
int faixa2(int x)
{
    if (((x-11) >= 0) && ((x-30) <= 0 ))
    {
        return (x-10);
    }
    else if (x>30)
    {
        return 20;
    }
    else
    {
        return 0;
    }
}

int faixa3(int x)
{
   if (((x-30) > 0 ) && ((x-100) <= 0))
   {
       return (x-30)*2;
   }
   else if (x>100)
   {
       return 140;
   }
   else
   {
       return 0;
   }
   
}

int faixa4(int x)
{
    if ((x-101) >= 0)
    {
        return ((x-100)*5);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int consumo, valorfinal;
    int v0 = 7;
    
    scanf("%d", &consumo);
    valorfinal = v0 + faixa2(consumo) + faixa3(consumo) + faixa4(consumo);
    
    printf("%d\n", valorfinal);
    
    return 0;
}