int main() {
    
      int tempo0,sec,min,hora,dia;
        sec = 1;
        min = 60;
        hora = 3600;
        dia = 84600;

        scanf("%d",&tempo0);

            if (tempo0 >= 84600)
            {
                int tempoD = tempo0/dia;
                printf("%d\n0\n0\n0\n",tempoD);
            } 

 
                else if (3600 <= tempo0 && tempo0 < 84600)
                    {  
                    int tempoH = tempo0/hora;
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
                                }    

	return 0;
}