#include <stdio.h>
#include <string.h>

#define MAX 100001



void print_string(char array[], int tamanho)
{
    //printf("\n################\n");
    int i;
    for (i=0; i<tamanho; i++)
    {  
        printf("%c", array[i]);
    }
    printf("\n");
}

void inverter(char array[], int tamanho)
{
    int i;
    char aux;
    for (i=0; i <= tamanho/2; i++)
    {
        //printf("\n-----<i = %d>----\n",i);
        //printf("antes:[%c]\t",array[i]); // valor desinvertido
        
        aux = array[i]; //valor inicial
        array[i] = array[tamanho-i]; //var inicial == var final
        array[tamanho-i] = aux; // var final == var inicial
        
        //printf("depois:[%c]\t",array[i]); // valor invertido
    }
    
}

int main()
{

    char string[MAX];
    scanf("%s",string);
    
    int tamanho_array = strlen(string);

    inverter(string,tamanho_array-1);
    print_string(string,tamanho_array);
    
    
    return 0;
    
}