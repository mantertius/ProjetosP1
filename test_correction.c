//https://thehuxley.com/problem/76?quizId=5564

#include <stdio.h>
#include <string.h>
char gab[10]; //10 respostas no gabarito
double notas[100000];//cada aluno é indexado com uma nota. notas começa em [1] que é o primeiro aluno
int iguais[11];//so podem ter 11 notas, de 0 a 10
int iguaiz = 0;

void result_frequency(int qtd, int nota) // aluno começa em 1, nota começa em 0
{ //travar 1 nota, rodar por todos os alunos
    if (nota > 10.0)
    {
        return;
    }
    
    int i;
    int equals = 0;
    for (i = 1; i<qtd; i++) //conta quantas vezes uma nota apareceu, o index é o valor da nota em iguais[_valor_da_nota_], 
                            //o valor de iguais[nota] é qtd de vezes que aquela nota apareceu 
    {
        if (nota == notas[i])//notas[numero_do_aluno]; nota é fixo a cada chamada da função result_frequency
        {
            equals = equals+1;
            iguaiz = iguaiz+1;
            //printf("nota = %d\t", nota);
            //printf("i = [%d] iguaiz=[%d]\n",i,iguaiz);
        }
    }
    iguais[nota] = equals;
    
    //printf("iguais[%d]=%d\n",nota,iguais[nota]);
    return result_frequency(qtd,nota+1);
}

double equal_checker(char gab[], char a[])//checa as respostas dos alunos
{
    double ans = 0.0;
    for (int i = 0; i < 10; i++)
    {
        if(gab[i]==a[i])
        {
            ans = ans+1.0;
        }
    }
    return ans;
}

int scan_nn(char a[], int i)//scaneia as respostas dos alunos
{
    int n;
    scanf("%d",&n);
    if(n==9999)
    {
        //printf("[%d]",i-1);
        return i;//numero de alunos+1
    }
    else
    {
        scanf("%s", a); //obtem as repostas do aluno n
        double nota = equal_checker(gab,a); //dá a nota do aluno n
        notas[n] = nota;
        printf("%d ", n);
        printf("%.1lf\n", nota);

        memset(a, 0, sizeof(a)/sizeof(a[0]));

        return scan_nn(a,i+1);
    }
    
}

double approved_percentage(double a[], int qtd)
{   
    
    int boa = 0;
    for (int i = 1; i < qtd+1; i++)
    {
        if(a[i] >= 6.0)
        {
            boa = boa+1;
            //printf("boa=[%d]\t",boa);
        }
    }

    return (boa*100.0)/(qtd*1.0);
    
}

double array_greatest(int a[], int indice, int tamanho, double maior,int indice_maior) //imprime o valor maior do array, com seu indice
{
    if(indice == tamanho)
    {
        return indice_maior;
    }
    if(a[indice] > a[indice_maior])
    {
        maior = a[indice];
        indice_maior = indice;
    }
    //printf("[%d] MAIOR:%.1lf, INDICE DO MAIOR:%d\n",indice, maior,indice_maior);
    return array_greatest(a,indice+1,tamanho,maior,indice_maior);
}

int main()
{

    scanf("%s", gab);

    char respostas[10];

    int qtd = scan_nn(respostas, 1) - 1;

    //printf("qtd = [%d]\n",qtd);//quantidade de alunos

    double app = approved_percentage(notas,qtd);//porcentagem de aprovados
    printf("%.1lf%%\n",app);


    result_frequency(qtd,0.0);

    double maior = array_greatest(iguais,0,11,0,0);

   if (maior == 0.0)
    {
        if(qtd == 1)
        {
            printf("%.1lf\n",notas[1]);
        }
        else
        {
           printf("%.1lf\n",maior);  
        }  
    }
    else
    {
        printf("%.1lf\n",maior);  
    }
    
    return 0;

}