#include <stdio.h>

int mdc(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return mdc(b%a, a); 
}
//*x é um ponteiro, ou seja, todo valor 
void gcdExtended(int a, int b, int *x, int *y) 
{ 
    // Base Case 
    if (a == 0) 
    { 
        *x = 0; 
        *y = 1; 
        return; 
    } 
  
    int x1, y1; // To store results of recursive call 
    gcdExtended(b%a, a, &x1, &y1); 
  
    // Update x and y using results of recursive call 
    *x = y1 - (b/a) * x1; //inicializa os valores de x e y
    *y = x1; 
   printf ("%ls*%d + %ls*%d\n", x,a,y,b);
    return;
} 
  
/* Driver Program 
int main() 
{ 
    int x, y; 
    int a = 35, b = 15; 
    int g = gcdExtended(a, b, &x, &y); 
    printf("gcd(%d, %d) = %d", a, b, g); 
    return 0; 
} 
*/
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int z,k;
    gcdExtended(x,y,&z,&k);
    printf("MDC(%d,%d) = %d\n",x,y,mdc(x,y));
}