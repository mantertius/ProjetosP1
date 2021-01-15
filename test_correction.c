//https://thehuxley.com/problem/76?quizId=5564

#include <stdio.h>
#include <string.h>
char gab[10];
int notas[100000];
int iguais[11];

double equal_checker(char gab[], char a[])
{
    double ans = 0.0;
    for (i = 0; i < 10; i++)
    {
        if(gab[i]==a[i])
        {
            ans = ans+1.0;
        }
    }
    return ans;
}

void scan_nn(char a[], int i)
{
    int n;
    scanf("%d",&n);
    if(n==9999)
    {
        return;
    }
    else
    {
        scanf("%s",&a); //obtem as repostas do aluno n
        double nota = equal_checker(gab,a); //dá a nota do aluno n
        notas[n] = nota;
        printf("%d ", n);
        printf("%.1lf\n", nota);

        memset(a, 0, sizeof(a));
        
        return scan_nn(a,i+1);
    }
    
}

int main()
{

    scanf("%s", gab;

    char respostas[10];
    scan_nn(respostas, 1);

    int qtd = strlen(notas);


    return 0;

}