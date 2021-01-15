#include <stdio.h>
#include <string.h>

#define MAX 10001

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

int main()
{
    double matriz1[MAX][MAX];
    double matriz2[MAX][MAX];
    double resultado[MAX][MAX];
    ler_matriz(0,)


}