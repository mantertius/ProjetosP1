#include <stdio.h>

    int main()
    {
        int tempo0,sec,min,hora,dia;
        sec = 1;
        min = 60;
        hora = 3600;
        dia = 86400;//129600(1,5dia)

            scanf("%d",&tempo0); /*scans the initial time */
                int tempoD = tempo0/dia; //descobre a quantidade de dias
                int restoD = tempo0%dia; //descobre a quantidade inteira de dias não divididos
                int tempo_horas = restoD/hora;//é o tempo0 em horas que sobraram
           
                int tempoD2 = restoD/hora; /*scans the rest of the restoD to take it as a hora*/
                int restoD2 = restoD%hora; //restoD2 é o tempo0 em dias que restou
                int tempo_minutos = restoD2/min;// é o tempo0 em minutos que sobraram
               
                int tempoD4 = restoD2/min;
                int restoD3 = restoD2%min;
                int tempo_segundos = restoD3/sec; //é o tempo em segundos que sobraram
            
            //if (tempo0 >= 86400)//o problema desse IF é que ele olha o valor inicial, ele deve olhar o valor dos intervalos! 
            //{
                printf("%d\n%d\n%d\n%d\n",tempoD,tempo_horas,tempo_minutos,tempo_segundos);
                printf("restoD:%d,restoD2:%d,restoD3:%d\n", restoD,restoD2,restoD3);
                printf("[%d]",86000/86400);
                printf("$%d$",3569/3600);
                printf("p%dq",66/60);
            //} 
            
            
           /* else if (3600 <= tempo0 && tempo0 < 86400)
                {  
                    int tempoH = tempo0/hora;
                    int restoH = tempo0%hora;
                    printf("0\n%d\n0\n0\n",tempoH);                  
                }


                    else if (60 <= tempo0 && tempo0 <3600)
                        {
                        int tempoM = tempo0/min;
                        printf("0\n0\n%d\n0\n",tempoM);
                        }

                            else if (1 <= tempo0 && tempo0 < 60)
                                {
                                    printf("0\n0\n0\n%d\n",tempo0);
                                }    */

        return 0;
    }       //no final das contas, não precisava usar o if já que o recurso de % já cumpria todos os requerimentos. Não sei por qual motivo
    //inventei de usar if e else, talvez por não ter um profundo entendimento do que acontecia por baixo dos panos.
    //foi um problema divertido para aprender como funcionam os operadores matemáticos de divisão e de resto.