#include <stdio.h>
/*
1 livro para até 8 alunos --> Conceito A
1 livro para entre 9 e 12 alunos --> Conceito B
1 livro para entre 13 e 18 alunos --> Conceito C
1 livro para mais de 18 alunos --> Conceito D
*/
int main()
{
    int livros, alunos;
    scanf("%d%d", &livros,&alunos);
    float razao = (1000*alunos)/livros;
    if (razao <= 8000)
    {
        printf("A\n");
    }
    else if (razao > 8000 && razao <= 12000)
    {
        printf("B\n");
    }
    else if (razao > 12000 && razao <= 18000)
    {
        printf("C\n");
    }
    else if (razao > 18000)
    {
        printf("D\n");
    } 
    return 0;

}