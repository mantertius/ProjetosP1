//https://thehuxley.com/problem/398

#include <stdio.h>

#define MAXN 10000
int array[MAXN];
int brray[MAXN];

int encontra_mult(int x, int y, int y2, int counter, int tipo)
{   
    int z = y;
    if ((y2 < x) || (y > y2))
    {
       // printf("(%d) multiplos de %d\n",counter,x);
        return counter;  
    }
    else if (y%x == 0)
    {   
        if(tipo == 2)
        {
            brray[counter] = z;
          //  printf("barray[%d] = %d\n",counter,z);
        }
        else
        {
            array[counter] = z;
           // printf("array[%d] = %d\n",counter,z);
        }
        //printf("multiplo de %d: %d\n",x,y);
        return encontra_mult(x,y+1,y2,counter+1,tipo);  
    }
    else if (y%x != 0)
    {
        return encontra_mult(x,y+1,y2,counter,tipo);
    }
}

int comparador_de_array(int menor[], int maior[], int tamanho_menor, int tamanho_maior, int semelhantes, int index_atual, int index_secundario) //  maior>menor sempre
{
    //printf("começou o processo [%d]\n",index_secundario);
    //printf("------------menor[%d]=%d e maior[%d]=%d------------\n",index_atual,menor[index_atual],index_secundario,maior[index_secundario]);

    if  (index_atual >= tamanho_menor-1) //index secundário vai até tamanho_maior e index_atual até tamanho_menor
    {   
        
        if(index_secundario == tamanho_maior-1)
        {
            if (menor[index_atual] == maior[index_secundario])
            {
                int aux = semelhantes+1;
                //printf("SEMENLANTES[%d]\n",aux);
               // printf("FIM\n");
                return aux;
                
            } // aqui tá ok
            else
            {
                return semelhantes;
            }
            
        }
        else if (index_secundario < tamanho_maior-1)
        {
            if (menor[index_atual] == maior[index_secundario])
            {   
               
                //printf("%d == %d\n",menor[index_atual],maior[index_secundario]);
                //printf("SEMELHANTES: [%d]\n",semelhantes+1);

                return comparador_de_array(menor,maior,tamanho_menor,tamanho_maior,semelhantes+1,index_atual+1,index_secundario+1);
            }
            else
            {
                  //  printf("quase no fim\n");
                return comparador_de_array(menor,maior,tamanho_menor,tamanho_maior,semelhantes,index_atual,index_secundario+1);
            }
        }
           
    }
    else if (index_atual < tamanho_menor-1) //menor = 15, maior = 17 → atual < 15 e sec == 17 
    {
        //printf("elif\n");
        if (index_secundario == tamanho_maior-1)
        {
            if (menor[index_atual] == maior[index_secundario])
            {
                //printf("%d == %d\n",menor[index_atual],maior[index_secundario]);
                //printf("SEMELHANTES: [%d]\n",semelhantes+1);

                return comparador_de_array(menor,maior,tamanho_menor,tamanho_maior,semelhantes+1,index_atual+1,0);
            }
            else
            {
                return comparador_de_array(menor,maior,tamanho_menor,tamanho_maior,semelhantes,index_atual+1,0);
            }
        }
        else//(index_secundario != tamanho maior)
        {
            if (menor[index_atual] == maior[index_secundario])
            {
                //printf("%d == %d\n",menor[index_atual],maior[index_secundario]);
               // printf("SEMELHANTES: [%d]\n",semelhantes+1);


                return comparador_de_array(menor,maior,tamanho_menor,tamanho_maior,semelhantes+1,index_atual+1,index_secundario+1);
            }
            else
            {        
            return comparador_de_array(menor,maior,tamanho_menor,tamanho_maior,semelhantes,index_atual,index_secundario+1);
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
       // printf("indo comparar 1\n");
        int result;
        result = comparador_de_array(brray,array,m2,m1,0,0,0);
        printf("%d\n",result);
        return 0;
    }
    else
    {
        //printf("indo comparar 2\n");
       int result;
       result = comparador_de_array(array,brray,m1,m2,0,0,0);
       printf("%d\n",result);
       return 0;
    }
  
}   