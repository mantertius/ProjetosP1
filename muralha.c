// https://thehuxley.com/problem/2072
#include <stdio.h>
//reta: x = y
//toda vez que muda de região, paga 1 prata


static int gold = -1; //dinheiro necessário
static int x = 0;
static int y = 0;
static int scan_num = 0;
static int lado = 0;
static int side[100000] = {0};


void direction_analist(char direction)
{
    if (direction == 'C')
    {
        x = x+1;
    }
    else if (direction == 'D')
    {
        y = y+1;
    }
    return;
}
int side_analist()
{
    if (x>y)
    {
        lado = -1;
    }
    if (x<y)
    {
        lado = 1;
    }
    return lado;
}
void gold_analist(int p)
{
    if (side[p] != side[p-1])
    {
        gold++;
    }
}
void scan(int x)
{
    if (x > 0)
    {
        scan_num++;
        char direction;
        scanf(" %c",&direction); //scaneia a direção
        direction_analist(direction); //soma as coordenadas.
        side[scan_num] = side_analist(); //analiza o lado e atribui um valor a scan_num
        gold_analist(scan_num);
        scan(x-1);
        //printf("%c",direction);
    }
    else
    {
        printf("%d\n", gold);
        return;
    } 
}
int main()
{
    int dias;
    scanf("%d",&dias);
    scan(dias);
    return 0;
}