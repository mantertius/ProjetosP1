#include <stdio.h>

void ler_linha(int i, int j, int m, double notas[][m])
{
    if (j < m)
    {
        scanf("%lf", &notas[i][j]);

        ler_linha(i, j + 1, m, notas);
    }
}

void ler_matriz(int i, int n, int m, double notas[][m])
{
    if (i < n)
    {
        ler_linha(i, 0, m, notas);

        ler_matriz(i + 1, n, m, notas);
    }
}

void print_matrix(int i, int j, int n, int m, double notas[][m])
{
    if(i < n)
    {
        if(j < m-1)
        {
            printf("%.2lf\t", notas[i][j]);

            return print_matrix(i, j+1, n, m, notas);
        }
        else
        {
            printf("%.2lf\n", notas[i][j]);

            return print_matrix(i+1,0,n,m,notas);
        }
    }
}
void print_matrix_transpost(int i, int j, int n, int m, double notas[][m])
{
    if(j < m)
    {
        if(i < n-1)
        {
            printf("%.2lf\t", notas[i][j]);

            return print_matrix_transpost(i+1, j, n, m, notas);
        }
        else
        {
            printf("%.2lf\n", notas[i][j]);

            return print_matrix_transpost(0 ,j+1, n, m, notas);
        }
    }
}

int main()
{
    double notas[5][4];

    ler_matriz(0, 5, 4, notas);
    print_matrix(0, 0, 5, 4, notas);
    printf("############## TRANSPOSTA\n");
    print_matrix_transpost(0, 0, 5, 4, notas);

/*
    printf("#########\n%lf\n", notas[0][0]);
    printf("%lf\n", notas[0][1]);
    printf("%lf\n", notas[0][2]);
    printf("%lf\n", notas[0][3]);

    printf("#########\n%lf\n", notas[1][0]);
    printf("%lf\n", notas[1][1]);
    printf("%lf\n", notas[1][2]);
    printf("%lf\n", notas[1][3]);

    printf("#########\n%lf\n", notas[2][0]);
    printf("%lf\n", notas[2][1]);
    printf("%lf\n", notas[2][2]);
    printf("%lf\n", notas[2][3]);

    printf("#########\n%lf\n", notas[3][0]);
    printf("%lf\n", notas[3][1]);
    printf("%lf\n", notas[3][2]);
    printf("%lf\n", notas[3][3]);

    printf("#########\n%lf\n", notas[4][0]);
    printf("%lf\n", notas[4][1]);
    printf("%lf\n", notas[4][2]);
    printf("%lf\n", notas[4][3]);
*/
    return 0;
}