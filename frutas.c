#include <stdio.h>
#include <string.h>
/*
3
9.85
Mamao Maca Melao
2.65
Melancia
9.54
Pera Uva Goiaba
*/

void scan_valor(int i, int valor[])
{
    double n;
    scanf("%lf",&n);
    valor[i] = n;
}

int scan_nome(int i, char nome[])
{
    int espaços;
    while(scanf("%c",nome) == 1)
    {
       return
    }

}

int main()
{
    int dias;
    scanf("%d",&dias);

    double valor[dias];
    char nome[1000001];

    for (int i = 0; i < dias; i++)
    {
        scan_valor(i);
        scan_nome(i);
    }
    

    return 0;
}
