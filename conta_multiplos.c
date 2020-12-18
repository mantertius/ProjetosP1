#include <stdio.h>
//TODO: multiplier_comparator
int array[]={0};
int brray[]={0};

int encontra_mult(int x, int y, int y2, int counter, int tipo)
{   
    int z = y;
    if ((y2 < x) || (y > y2))
    {
        if (y == 0)
        {
            printf("INEXISTENTE\n");
        }
        printf("(%d) multiplos de %d\n",counter,x);
        return counter;  
    }
    else if (y%x == 0)
    {   
        if(tipo == 1)
        {
            brray[counter] = z;
            printf("b[%d] = %d\n",counter,z);
        }
        else
        {
            array[counter] = z;
            printf("a[%d] = %d\n",counter,z);
        }
        //printf("multiplo de %d: %d\n",x,y);
        encontra_mult(x,y+1,y2,counter+1,tipo);  
    }
    else if (y%x != 0)
    {
        encontra_mult(x,y+1,y2,counter,tipo);
    }
}

int comparador_de_array(int a[], int b[], int tamanho_a, int tamanho_b, int semelhantes, int index_atual, int index_secundario) //  b>a sempre
{
    printf("começou o processo [%d]\n",index_secundario);
    printf("------------a[%d]=%d e b[%d]=%d------------\n",index_atual,a[index_atual],index_secundario,b[index_secundario]);
    if  (index_atual == tamanho_a) //index secundário vai até tamanho b e index_atual até tamanho_a
    {   
        printf("index_atual == tamanho_a (1)\n");
        if(index_secundario == tamanho_b)
        {
            printf("index_secundario == tamanho_b\n");
            return semelhantes; // aqui tá ok
        }
        else if (index_secundario < tamanho_b)
        {
            if (a[index_atual] == b[index_secundario])
            {   
                printf("a[index_atual] == b[index_secundario]\n");
                printf("%d == %d\n",a[index_atual],b[index_secundario]);

                return comparador_de_array(a,b,tamanho_a,tamanho_b,semelhantes+1,index_atual+1,index_secundario+1);
            }
            else
            {
                printf("a[index_atual] != b[index_secundario]\n");
                return comparador_de_array(a,b,tamanho_a,tamanho_b,semelhantes,index_atual,index_secundario+1);
            }
        }
           
    }
    else if (index_atual < tamanho_a) //a = 15, b = 17 → atual < 15 e sec == 17 
    {
        if (index_secundario == tamanho_b)
        {
            printf("encaixa aqui\n");
            if (a[index_atual] == b[index_secundario])
            {
                printf("depois aqui\n");
                printf("a[index_atual] == b[index_secundario]\n");
                printf("%d == %d\n",a[index_atual],b[index_secundario]);
                return comparador_de_array(a,b,tamanho_a,tamanho_b,semelhantes+1,index_atual+1,0);
            }
            else
            {
                printf("ou aqui\n");
                return comparador_de_array(a,b,tamanho_a,tamanho_b,semelhantes,index_atual+1,0);
            }
        }
        else//(index_secundario != tamanho b)
        {
            if (a[index_atual] == b[index_secundario])
            {
                printf("a[index_atual] == b[index_secundario]\n");
                printf("%d == %d\n",a[index_atual],b[index_secundario]);
                printf("1111\n");
                return comparador_de_array(a,b,tamanho_a,tamanho_b,semelhantes+1,index_atual+1,index_secundario+1);
            }
            else
            {
            printf("22222\n");
            return comparador_de_array(a,b,tamanho_a,tamanho_b,semelhantes,index_atual,index_secundario+1);
            }
        }
        
        
    }
}

int main()
{   

    int n1,n2; //cria um espaço rotulado na memoria
    scanf("%d%d",&n1,&n2); //associa um valor no espaço 

    if (n1 == 1 || n2 == 1)
    {
        if(n1==1)
        {
            int m1 = encontra_mult(n2,n2,49,0,2);
            printf("%d\n",m1);
            return 0;
        }
        else
        {
            int m1 = encontra_mult(n1,n1,49,0,1);
            printf("%d\n",m1);
            return 0;
        }
        
    }
    if (n1==0 || n2 == 0 || n1==50 || n2==50) 
    {
        printf("0\n");
    }

    int m1 = encontra_mult(n1,n1,49,0,1); // numero de multiplos de n1
    int m2 = encontra_mult(n2,n2,49,0,2);// numero de multiplos de n2

    if(m1>m2)
    {
        printf("indo comparar 1\n");
        int result;
        result = comparador_de_array(brray,array,m2,m1,0,0,0);
        printf("%d\n",result);
        return 0;
    }
    else
    {
        printf("indo comparar 2\n");
       int result;
       result = comparador_de_array(array,brray,m1,m2,0,0,0);
       printf("%d\n",result);
       return 0;
    }
  
}   