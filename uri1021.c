#include <stdio.h>
 
int main() {
 
   int val,frac;
   scanf("%d.%d",&val);
   
   int n100,n50,n20,n10,n5,n2;
   n100 = val/100;
   n50 = (val%100)/50;
   n20 = ((val%100)%50)/20;
   n10 = (((val%100)%50)%20)/10;
   n5 = ((((val%100)%50)%20)%10)/5;
   n2 = (((((val%100)%50)%20)%10)%5)/2;

   int c1,c50,c25,c10,c05,c01;
   c1 = ((((((val%100)%50)%20)%10)%5)%2)/1;
   c50 = (((((((val%100)%50)%20)%10)%5)%2)%1)/0.5;
   c25 = ((((((((val%100)%50)%20)%10)%5)%2)%1)%0.5)/0.25;
   c10 = (((((((((val%100)%50)%20)%10)%5)%2)%1)%0.5)%0.25)/0.1;
   c05 = ((((((((((val%100)%50)%20)%10)%5)%2)%1)%0.5)%0.25)%0.1)/0.05;
   c01 = (((((((((((val%100)%50)%20)%10)%5)%2)%1)%0.5)%0.25)%0.1)%0.05)/0.01;
   
   printf("NOTAS:\n");
   printf("%f nota(s) de R$100.00\n",n100);
   printf("%f nota(s) de R$50.00\n",n50);
   printf("%f nota(s) de R$20.00\n",n20);
   printf("%f nota(s) de R$10.00\n",n10);
   printf("%f nota(s) de R$5.00\n",n5);
   printf("%f nota(s) de R$2.00\n",n2);

   printf("MOEDAS:\n");
   printf("%f moeda(s) de R$1.00\n",c1);
   printf("%f moeda(s) de R$0.50\n",c50);
   printf("%f moeda(s) de R$0.25\n",c25);
   printf("%f moeda(s) de R$0.10\n",c10);
   printf("%f moeda(s) de R$0.05\n",c05);
   printf("%f moeda(s) de R$0.01\n",c01);
   
    return 0;
}