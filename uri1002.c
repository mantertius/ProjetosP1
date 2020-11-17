#include <stdio.h>
int main() {
 
    double pi = 3.14159;
    double r;
    
    scanf("%lf",&r);
    double area = pi*r*r;
    
    printf("A=%.4lf",area);
 
    return 0;
}