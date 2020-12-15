//https://thehuxley.com/problem/1109?quizId=5562
/*Escreva um programa que receba como entrada a quantidade de programas e a quantidade de linhas de cdigo feitas por ele em
cada um dos sete dias da semana, e exiba em quantos dias ele cumpriu as duas metas 
e o dia em que ele mais produziu linhas de cdigo. 

Assuma que o primeiro dia da semana  DOMINGO.

Se a produo de programas for a mesma todos os dias, ser exibido o ltimo dia da semana
QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: 7
DIA QUE MAIS PRODUZIU: SABADO
META: 5 programas e 100 linhas*/
#include <stdio.h>
#include <string.h>

char dias[7]={'d','s','t','r','n','x','b'};
int programas[7];
int linhas[7];


int scan(int n) //pega os valores de p e de l
{
    if (n == 7)
    {
        //printf("okokokokookoko\n");
        return 0;
    }
    int p,l;

        scanf("%d",&p);
        programas[n] = p;
        //printf("p[%d]:%d\n",n,programas[n]);
   
        scanf("%d",&l);
        linhas[n] = l;
        //printf("l[%d]:%d\n",n,linhas[n]);
    
    scan(n+1);
}
void p_analist(int numero_do_dia, int dias_bons) //analisa os valores p, para saber se chegou at a media; n = 7
{

    if (numero_do_dia >= 7)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n",dias_bons);
        return;
    }
    if (programas[numero_do_dia] >= 5)
    {
       int new_dias_bons = dias_bons+1;
       //printf("okokokokookoko P2\n");
      p_analist(numero_do_dia+1,new_dias_bons);
    }
   else
   {
        p_analist(numero_do_dia+1, dias_bons);
   }
   
   

}

void l_analist(int numero_do_dia, int dias_bons) //analisa os valores p, para saber se chegou at a media; n = 7
{
    
    if (numero_do_dia >= 7)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n",dias_bons);
        return;
    }
    if (linhas[numero_do_dia] >= 100)
    {
        int new_dias_bons = dias_bons+1;
        //printf("okokokokookoko L2\n");
        l_analist(numero_do_dia+1,new_dias_bons);
        
    }
    else
    {
        l_analist(numero_do_dia+1, dias_bons);
    }
    
}

int bubble_sort(int numero, int tamanho, int count, int numero_inicial) //vai retornar o maior dias[] e ordernar dias[]
{
    //printf("okokokokookoko B1\n");
    int aux;
    if (count == 7) 
    {
        return dias[6];
    }
    if (numero == tamanho-1)
    {
        //printf("okokokokookoko ifB2\n");
        return bubble_sort(numero_inicial,tamanho,count+1,numero_inicial);
    }
    if (linhas[numero]>linhas[numero+1])
    {
        /* 
            int temp = *xp; 
            *xp = *yp; 
            *yp = temp;
        */
        aux = dias[numero+1];
        dias[numero+1] = dias[numero];
        dias[numero] = aux;
        
        aux = linhas[numero+1];
        linhas[numero+1] = linhas[numero];
        linhas[numero] = aux;
        //printf("okokokokookoko B3\n");
    }
    //printf("okokokokookoko B4\n");
    bubble_sort(numero+1, tamanho, count, numero_inicial);
} 

void best_day()
{
    int dia = bubble_sort(0,7,0,0);
    
    if(dia == 'd')
    {
        printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
    }   
    if(dia == 's')
    {
        printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
    }
    if(dia == 't')
    {
        printf("DIA QUE MAIS PRODUZIU: TERÇA\n");
    }  
    if(dia == 'r')
    {
        printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
    } 
    if(dia == 'n')
    {
        printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
    } 
    if(dia == 'x')
    {
        printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
    }  
    if(dia == 'b')
    {
        printf("DIA QUE MAIS PRODUZIU: SABADO\n");
    }
    
}
int main ()
{
    scan(0);
    p_analist(0,0);
    l_analist(0,0);
    best_day();

    return 0;
}