#include <stdio.h>

    int main()
    {
        int workminutes, procnumb, procmin;
         workminutes = 8*60;




        printf("Digite quantos minutos você leva para analisar cada processo:\n");
            scanf("%d",&procmin);



        procnumb = workminutes/procmin;
        printf("Você trabalhou em %d processos.", procnumb);


        return 0;
    }