#include <stdio.h>
#include <math.h>

int main()
{
    double passados, resolvidos;
    scanf("%lf%lf", &passados, &resolvidos);
    double razao = ((100*resolvidos)/passados);
    double pessimo = 4.40;
    double ruim = 31.65;
    double bom = 56.82;
    double muito = 80.00;
    double excelent = 94.00;
 //   double wtf = resolvidos/passados;
 //   printf("``wtf - %lf``\n", wtf);
 //   printf("razao : %lf, (resolvidos/passados) [[%d]]\n",razao, (resolvidos/passados));
 //
    if (razao < 20)
    {
        printf("%.2lf%% %.2lf%% Pessimo\n", razao, pessimo);
    }
    else if ((razao >= 20) && (razao < 40))
    {
        printf("%.2lf%% %.2lf%% Ruim\n", razao, ruim);
    }
    else if ((razao >= 40) && (razao < 60))
    {
        printf("%.2lf%% %.2lf%% Bom\n", razao, bom);
    }
    else if ((razao >= 60) && (razao < 80))
    {
        printf("%.2lf%% %.2lf%% Muito Bom\n", razao, muito);
    }
    else if ((razao >= 80) && (razao <= 100))
    {
        printf("%.2lf%% %.2lf%% Excelente\n", razao, excelent);
    }
    return 0;
}