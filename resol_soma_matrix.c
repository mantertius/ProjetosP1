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

void ler_matriz_com_for(int n, int m, double matriz[][m])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }

    // Exemplo de execução:
    // 1. i: 0   j: ?        n: 2    m: 2
    // 2. i: 0   j: 0        n: 2    m: 2
    // 3. i: 0   j: 1        n: 2    m: 2
    // 4. i: 0   j: 2        n: 2    m: 2
    // 5. i: 1   j: 2        n: 2    m: 2
    // 6. i: 1   j: 0        n: 2    m: 2
    // 7. i: 1   j: 1        n: 2    m: 2
    // 8. i: 1   j: 2        n: 2    m: 2
    // 9. i: 2   j: 2        n: 2    m: 2
}

void imnprimir_matriz_com_for(int n, int m, double matriz[][m])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (j + 1 == m)
            {
                printf("%lf\n", matriz[i][j]);    
            }
            else
            {
                printf("%lf\t", matriz[i][j]);
            }
        }
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

void adicao(int i, int j, int n, int m, double a[][m], double b[][m],
        double r[][m])
{
    if (j == m)
    {
        j = 0;
        i++;
    }

    if (i < n)
    {
        r[i][j] = a[i][j] + b[i][j];

        adicao(i, j + 1, n, m, a, b, r);
    }
}

int main()
{
    int n, m;

    scanf("%d%d", &n, &m);

    double matriz1[n][m];
    double matriz2[n][m];
    double resultado[n][m];

    ler_matriz_com_for(n, m, matriz1);
    ler_matriz_com_for(n, m, matriz2);

    adicao(0, 0, n, m, matriz1, matriz2, resultado);

    printf("#################\n");

    // imprimir_matriz(0, n, m, resultado);
    imnprimir_matriz_com_for(n, m, resultado);

    return 0;
}