#include <stdio.h>
#include <time.h>
/*void verificaPRIMO(int x,int n) //verifica se um numero é primo
{   
    
    int verificationPOS = 6*n+1;
    int verificationNEG = 6*n-1;
    if (n<x && (verificationNEG == x||verifi))
    
}*/
int crescente(int x)
{
   if (x == 100)
   {
       return x;
   }
    return crescente(x+1);
}
void print()
{
    printf("%d\n",crescente(1));
}
int main ()
{   
    print();
    //verificaPRIMO(1);
    return 0;
}