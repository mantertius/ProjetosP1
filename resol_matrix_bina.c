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

void imprimir_linha(int i, int j, int m, double notas[][m])
{
    if (j < m)
    {
        if (j + 1 == m)
        {
            printf("%lf\n", notas[i][j]);    
        }
        else
        {
            printf("%lf\t", notas[i][j]);
        }

        imprimir_linha(i, j + 1, m, notas);
    }
}

void imprimir_matriz(int i, int n, int m, double notas[][m])
{
    if (i < n)
    {
        imprimir_linha(i, 0, m, notas);

        imprimir_matriz(i + 1, n, m, notas);
    }
}

void imprimir_coluna(int i, int j, int n, int m, double notas[][m])
{
    if (i < n)
    {
        if (i + 1 == n)
        {
            printf("%lf\n", notas[i][j]);    
        }
        else
        {
            printf("%lf\t", notas[i][j]);
        }

        imprimir_coluna(i + 1, j, n, m, notas);
    }
}

void imprimir_matriz_transposta(int j, int n, int m, double notas[][m])
{
    if (j < m)
    {
        imprimir_coluna(0, j, n, m, notas);

        imprimir_matriz_transposta(j + 1, n, m, notas);
    }
}

/**
 * @author Helder Lima
 */
void print_matriz_linha(int num_lin, int num_col, double m[][num_col], int lin, int col)
{
    if (col == num_col)
    {
        col = 0;
        lin += 1;
    }
 
    if (lin < num_lin)
    {
        if (col + 1 == num_col)
        {
            printf("%.1lf\n", m[lin][col]);
        }
        else
        {
            printf("%.1lf\t", m[lin][col]);
        }
        
        print_matriz_linha(num_lin, num_col, m, lin, col+1);
    }
}

int main()
{
    double notas[5][4];

    ler_matriz(0, 5, 4, notas);

    print_matriz_linha(5, 4, notas, 0, 0);

    printf("#################\n");

    imprimir_matriz(0, 5, 4, notas);

    printf("################# TRANSPOSTA\n");

    imprimir_matriz_transposta(0, 5, 4, notas);
    
    return 0;
}