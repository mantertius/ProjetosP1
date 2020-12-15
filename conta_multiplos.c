#include <stdio.h>
//TODO: multiplier_comparator

int encontra_mult(int x, int y, int y2, int counter)
{   
    int z = y;
    if ((y2 < x) || (y > y2))
    {
        if (y == 0)
        {
            printf("INEXISTENTE\n");
        }

        return counter;  
    }
    else if (y%x == 0)
    {
        b[counter] = z;
        encontra_mult(x,y+1,y2,counter+1);  
    }
    else if (y%x != 0)
    {
        encontra_mult(x,y+1,y2,counter);
    }
}
int multiplier_comparator(int a[],int b[], int tamanho_a, int tamanho_b, int incremento, int counter) //  b>a sempre
{
    if (a[counter] == b[counter])
    {
        return multiplier_comparator(a,b,tamanho_a,tamanho_b,incremento+1,counter+1);
    }
    if (incremento == tamanho_a)
    {
        a[tamanho_a] == incremento;
    }
    if (incremento == tamanho_b)
    {
        return counter;
    }

}
int comparador_de_array(int a[], int b[], int tamanho_a, int tamanho_b, int semelhantes, int index_atual, int index_secundario) //  b>a sempre
{
    if  (index_atual == tamanho_a) //index secundário vai até tamanho b e index_atual até tamanho_a
    {   
        if(index_secundario == tamanho_b)
        {
            return semelhantes; // aqui tá ok
        }
        else if (index_secundario < tamanho_b)
        {
            if (a[index_atual] == b[index_secundario])
            {
                return comparador_de_array(a,b,tamanho_a,tamanho_b,semelhantes+1,index_atual+1,index_secundario+1);
            }
            else
            {
                return comparador_de_array(a,b,tamanho_a,tamanho_b,semelhantes,index_atual,index_secundario+1);
            }
        }
           
    }
    else if (index_atual < tamanho_a && index_secundario == tamanho_b) //a = 15, b = 17 → atual < 15 e sec == 17 
    {
        if (a[index_atual] == b[index_secundario])
        {
            return comparador_de_array(a,b,tamanho_a,tamanho_b,semelhantes+1,index_atual+1,0);
        }
        else
        {
            return comparador_de_array(a,b,tamanho_a,tamanho_b,semelhantes,index_atual+1,0);
        }
    }
}

void bubble(int a[], int indice, int tamanho, int count, int tamanho_inicial) //vai retornar o maior array2[],
{
    int aux;
    if (tamanho == 0)
    {
        bubble(a,indice+1,tamanho_inicial, count+1, tamanho_inicial);
    }
    if (count == tamanho_inicial)
    {
        return;
    }
    if (array1[indice]>array1[indice+1])//faz o swap pra frente
    {
        swap_element(array1[indice],array1[indice+1]);
        
        bubble(a,indice+1,tamanho-1, count, tamanho_inicial);
    }
    else
    {
        bubble(a,indice+1,tamanho-1, count, tamanho_inicial);
    }
    
}

int main()
{   

    int a[]={0};
    int b[]={0};
    int n1,n2; //cria um espaço rotulado na memoria
    scanf("%d%d",&n1,&n2); //associa um valor no espaço 

    if (n1 <0 || n2<0)
    {
        return 0;
    }
    if (n1 == 1 || n2 == 1)
    {
        if(n1==1)
        {
            int m1 = encontra_mult(n2,n2+1,50,0);
            printf("%d\n",m1);
            return 0;
        }
        else
        {
            int m1 = encontra_mult(n1,n1+1,50,0);
            printf("%d\n",m1);
            return 0;
        }
        
    }
    if (n1==0 || n2 == 0)
    {
        printf("0\n");
    }

    int m1 = encontra_mult(n1,n1+1,50,0); // numero de multiplos de n1
    int m2 = encontra_mult(n2,n2+1,50,0);// numero de multiplos de n2

    if(m1>m2)
    {
        comparador_de_array(b,a,m2,m1,0,0,0);
    }
    else
    {
       comparador_de_array(a,b,m1,m2,0,0,0);
    }

    return 0;
    
}   