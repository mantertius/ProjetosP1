#include <stdio.h>
 
int main() {
 
    int cod1,num1, cod2,num2;
    float val1,val2;
    scanf("%d %d %f", &cod1, &num1, &val1); 
    scanf("%d %d %f", &cod2, &num2, &val2);
    float total1,total2;
    total1 = num1*val1;
    total2 = num2*val2;
    float TOT = total1+total2;

        printf ("VALOR A PAGAR: R$ %.2f\n", TOT);
    return 0;
}