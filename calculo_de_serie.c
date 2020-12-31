//https://thehuxley.com/problem/1114?quizId=5563

#include <stdio.h>
#include <string.h>
#include <math.h>

double result[120000];

double par(int n)
{
    double numerator = pow(2,n-1);
    double denominator = 3*(n/2);
    //printf("%.0lf/%.0lf +",numerator,denominator);
    double ans = numerator/denominator;

    return ans;
}
double impar(int n)
{
    double denominator = pow(2,n-1);
    double numerator = n;
    //printf("%.0lf/%.0lf +",numerator,denominator);
    double ans = numerator/denominator;

    return ans;
    
}
double series(int n_max, double ans, int i)
{
    if (i == n_max+1)
    {
        return ans;
    }
    else
    {
        if(i%2 == 0)
        {
            double now = par(i);
            double new_ans = now+ans;
            //printf("new_ans=%.2lf\n",new_ans);
            return series(n_max,new_ans,i+1);
        }
        else if(i%2 != 0)
        {
            double now = impar(i);
            double new_ans = now+ans;
            //printf("new_ans=%.2lf\n",new_ans);
            return series(n_max,new_ans,i+1);
        }
    }
    
}


int main()
{
    int n;
    scanf("%d",&n);
    if (n == 0)
    {
        double result = 0.00;
        printf("S: %.2lf\n",result);

    }
    else if (n == 1)
    {
        double result = 1.00;
        printf("S: %.2lf\n",result);
    }
    else if (n < 0)
    {
        return 0;
    }
    else
    {
        double tre = series(n,1,2);
        printf("S: %.2lf\n",tre);
        return 0;
    }
    
    
}