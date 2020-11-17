    //huxley 1524
    #include <stdio.h>
    /*
    Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
    a) salários até R$ 280,00 (incluindo) : aumento de 20%
    b)salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
    c)salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
    d)salários de R$ 1500,00 em diante : aumento de 5% 

    o salário antes do reajuste;
    o percentual de aumento aplicado;
    o valor do aumento;
    o novo salário, após o aumento.

    */
    int main ()
    {
        double old_sal;
        scanf("%lf",&old_sal);
        
        if (old_sal <= 280)
        {
            float aumento = 0.20;
            float val_aumento = old_sal*aumento;
            float new_sal = old_sal + val_aumento;
            printf ("%.2f\n", old_sal);
            printf ("%.0f\n", aumento*100);
            printf ("%.2f\n", val_aumento);
            printf ("%.2f\n", new_sal);
        }
        else if (old_sal <= 700)
        {
            float aumento = 0.15;
            float val_aumento = old_sal*aumento;
            float new_sal = old_sal + val_aumento;
            printf ("%.2f\n", old_sal);
            printf ("%.0f\n", aumento*100);
            printf ("%.2f\n", val_aumento);
            printf ("%.2f\n", new_sal);
        }
        else if (old_sal < 1500)
        {
            float aumento = 0.10;
            float val_aumento = old_sal*aumento;
            float new_sal = old_sal + val_aumento;
            printf ("%.2f\n", old_sal);
            printf ("%.0f\n", aumento*100);
            printf ("%.2f\n", val_aumento);
            printf ("%.2f\n", new_sal);
        }  
        else
        {
            float aumento = 0.05;
            float val_aumento = old_sal*aumento;
            float new_sal = old_sal + val_aumento;
            printf ("%.2f\n", old_sal);
            printf ("%.0f\n", aumento*100);
            printf ("%.2f\n", val_aumento);
            printf ("%.2f\n", new_sal);
        }


        return 0;
    }
    