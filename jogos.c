//https://thehuxley.com/problem/341?quizId=5563
#include <stdio.h>
#include <string.h>
double p_analist(int diff, double valor, int i)
{
    if (i == 3)
    {
        return valor;
    }
    if (valor > 100)
    {
        if(diff == 0)
        {
            double new_valor = valor - (valor*0.25);
            if (new_valor <= 45.0)
            {
                new_valor = 45.0;
                return p_analist(diff,new_valor,3);
            }
            return p_analist(diff,new_valor,i+1);
        }
        else if(diff == 1)
        {
            double new_valor = valor - (valor*0.20);
            if (new_valor <= 45.0)
            {
                new_valor = 45.0;
                return p_analist(diff,new_valor,3);
            }
            return p_analist(diff,new_valor,i+1);
        }
        else if(diff == 2)
        {
            double new_valor = valor - (valor*0.18);
            if (new_valor <= 45.0)
            {
                new_valor = 45.0;
                return p_analist(diff,new_valor,3);
            }
            return p_analist(diff,new_valor,i+1);
        }
        else if(diff == 3)
        {
            double new_valor = valor - (valor*0.15);
            if (new_valor <= 45.0)
            {
                new_valor = 45.0;
                return p_analist(diff,new_valor,3);
            }
            return p_analist(diff,new_valor,i+1);
        }
        else if(diff == 4)
        {
            double new_valor = valor - (valor*0.12);
            if (new_valor <= 45.0)
            {
                new_valor = 45.0;
                return p_analist(diff,new_valor,3);
            }
            return p_analist(diff,new_valor,i+1);
        }
        else if(diff == 5)
        {
            double new_valor = valor - (valor*0.1);
            if (new_valor <= 45.0)
            {
                new_valor = 45.0;
                return p_analist(diff,new_valor,3);
            }
            return p_analist(diff,new_valor,i+1);
        }
    }
    else if (valor > 45.0)
    {
        if(diff == 0)
        {
            double new_valor = valor - (valor*0.25/2);
            if (new_valor <= 45.0)
            {
                new_valor = 45.0;
                return p_analist(diff,new_valor,3);
            }
            return p_analist(diff,new_valor,i+1);
        }
        else if(diff == 1)
        {
            double new_valor = valor - (valor*0.20/2);
            if (new_valor <= 45.0)
            {
                new_valor = 45.0;
                return p_analist(diff,new_valor,3);
            }
            return p_analist(diff,new_valor,i+1);
        }
        else if(diff == 2)
        {
            double new_valor = valor - (valor*0.18/2);
            if (new_valor <= 45.0)
            {
                new_valor = 45.0;
                return p_analist(diff,new_valor,3);
            }
            return p_analist(diff,new_valor,i+1);
        }
        else if(diff == 3)
        {
            double new_valor = valor - (valor*0.15/2);
            if (new_valor <= 45.0)
            {
                new_valor = 45.0;
                return p_analist(diff,new_valor,3);
            }
            return p_analist(diff,new_valor,i+1);
        }
        else if(diff == 4)
        {
            double new_valor = valor - (valor*0.12/2);
            if (new_valor <= 45.0)
            {
                new_valor = 45.0;
                return p_analist(diff,new_valor,3);
            }
            return p_analist(diff,new_valor,i+1);
        }
        else if(diff == 5)
        {
            double new_valor = valor - (valor*0.1/2);
            if (new_valor <= 45.0)
            {
                new_valor = 45.0;
                return p_analist(diff,new_valor,3);
            }
            return p_analist(diff,new_valor,i+1);
        }
    }
    else
    {
        return p_analist(diff,valor,3);
    }
}
void scanner(int n_max, int i)
{
    if(i == n_max)
    {
        return;
    }
    else
    {
        int diff;
        double valor;
        scanf("%d",&diff);
        scanf("%lf",&valor);

        double new_value = p_analist(diff,valor,0);
        
        printf("Jogo[%d] = R$%.2lf\n",i,new_value);

        return scanner(n_max,i+1);
    }
    
}
int main ()
{
    int n;
    scanf("%d",&n);
    scanner(n,0);
    return 0;
}