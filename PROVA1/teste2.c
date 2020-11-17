#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char nationality;
    int idade;
    char sexo;
    double val_ing;
    scanf(" %c",&nationality);
    scanf("%d",&idade);
    getchar();
    scanf("%c",&sexo);
    scanf("%lf",&val_ing);  
    //Nacionalidades: Todo o alfabeto maiúsculo da tabela ASCII, atente para a legislaCão e descontos destes países: 
    //(B)rasileira, (A)rgentina, (F)rancesa, (C)roata, (I)taliana e (R)ussa, onde '(C)' é um caractere.
    //	printf("[%c] [%d] [%c] [%.0lf]\n", nationality,idade,sexo,val_ing);
    //Brasil e Argentina - maioridade é obtida aos 18 anos (idade >= 18); ingressos podem ser vendidos para qualquer um.
    //FranCa e Croácia - maioridade é obtida aos 21 anos (idade >= 21); ingressos só podem ser vendidos para maiores.
    //Itália e Rússia - maioridade é obtida aos 16 anos (idade >= 16), ingressos podem ser vendidos para qualquer um.
    if (idade > 120 || idade <= 0)
    {
        printf("idade invalida!\n");
    }
    else if (nationality == 'B' || nationality == 'A') // brasileiro ou argentino       OK
    {
        if(idade >= 18) //brasileiro e argentino adulto
        {
           if (nationality == 'B') //brasileiro adulto                                  OK
           {
            float desc_nac = 0.5; //desconto nacional
            float price = val_ing*(1-desc_nac);
            printf("R$ %.2f\n",price);
           }
           else if (nationality == 'A') // argentino adulto
           {
              if (sexo == 'M') //argentino macho adulto                                 OK
              {
                float desc_nac = 0.0; //desconto nacional
                float price = val_ing*(1-desc_nac);
                printf("R$ %.2f\n",price);
              }
              else //argentino femea adulto                                             OK
              {
                  float desc_nac = 0.2;
                  float price = val_ing*(1-desc_nac);
                  printf("R$ %.2f\n",price);
              } 
           } 
        }
        else //brasileiro e argentino crianCa
        {
            if (nationality == 'B') //brasileiro crianCa                                OK
            {
            float desc_nac = 0.5; //desconto nacional
            float price = val_ing*(1-desc_nac);
            printf("R$ %.2f\n",price);
            }

            else if (nationality == 'A') // argentino crianCa                           OK
            {  
                float desc_nac = 0.2; //desconto nacional
                float price = val_ing*(1-desc_nac);
                printf("R$ %.2f\n", price);
            } 
        }
        
    }
    else if (nationality == 'F' || nationality == 'C') // frances ou croata
    {
        if(idade >= 21) //france e croata adulto                                        OK
        {
            float desc_nac = 0.3;
            float price = val_ing*(1-desc_nac);
            printf("R$ %.2f\n",price);  
        }
        else ////france e croata crianCa                                                OK   
        {
            printf("nao pode comprar\n");
        }  
    }
    else if (nationality == 'I' || nationality == 'R') // italiano ou russo
    {
        if(idade >= 16) //italiano e russo adulto
        {
            float desc_nac = 0.3;
            float price = val_ing*(1-desc_nac);
            printf("R$ %.2f\n",price);
        }
        else //italiano e russo crianCa
        {
            float desc_nac = 0.4;
            float price = val_ing*(1-desc_nac);
            printf("R$ %.2f\n",price);
        }
    }
    else if (((nationality != 'B') && (nationality != 'A')) && ((nationality != 'C') && (nationality != 'F')) && ((nationality != 'I') && (nationality != 'R')))
    {
        if (sexo == 'F')
        {
            float desc_nac = 0.1;
            float price = val_ing*(1-desc_nac);
            printf("R$ %.2f\n",price);
        }
        else
        {
            float desc_nac = 0.0;
            float price = val_ing*(1-desc_nac);
            printf("R$ %.2f\n",price);
        }
    }
    return 0;
}