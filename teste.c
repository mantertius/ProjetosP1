#include <stdio.h>
#include <string.h>
int f(char string[],double V[], double numero, int i, int dias, int num)
{
    if (i > dias+1)
    {
        return num;
    }
    while (scanf("%lf",&numero) != 1)
    {
        scanf("%s",string);
        
        int bruh = strlen(string);
        //if(s)
        for (int i = 0; i < bruh; i++)
        {
            printf("%c",string[i]);
        }
        num = num +1;
        printf(" ");
        
    }
    printf("\n############\n");
    V[i] = numero;
    printf("{%.2lf}\n",numero);
    numero = 0;
    printf("NUMERO DE FRUTAS= [%d]\n", num);

    return f(string,V,numero,i+1,dias, num);

}
int main()
{
    char string[100001];
    double numero;
    int num;
    int dias;
    double valor[100001];
    scanf("%d",&dias);
    f(string,valor,numero,0,dias,num);
    
/*    
    while (scanf("%lf",&numero) != 1)
    {
        scanf("%s",string);
        
        int bruh = strlen(string);
        //if(s)
        for (int i = 0; i < bruh; i++)
        {
            printf("\nstring[%d] = %c",i,string[i]);
        }
        num = num +1;
        printf("\n");
        printf("############\n");
    }
    printf("{%.2lf}\n",numero);
    printf("NUMERO DE FRUTAS= [%d]\n", num);
    

*/


//   while(scanf("%lf",valor) == 1)



    return 0;
}