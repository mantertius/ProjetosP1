//https://thehuxley.com/problem/2339
#include <stdio.h>
void function(int *a, int *b)
{
    int aux;//cria um espaço aleatório
    aux = *a;   
    *a = *b;
    *b = aux;

    printf("a: %d b: %d\n",*a,*b);
 


}
int main()
{
    int a,b;//aloca o espaço
    a = 231;
    b = 3312;
    scanf("%d",&a); //escreve no endereço passado por &
    scanf("%d",&b);
    printf("a: %d b: %d\n", a,b);
    function(&a,&b);//passa o endereço 


    
}