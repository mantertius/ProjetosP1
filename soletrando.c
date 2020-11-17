#include <stdio.h>
#include <string.h>

int LoopScan(int i)
int main()
{
    
    char letras[] = "O ceu é rosa ao por do sol";
    int count = 0;

    for (int i=0; i < strlen(letras); i++)
    {
        if(letras[i] != ' ')
        {
            count++;
            printf("contagem: %d\n", count); 
        }
    }
    return 0;
}