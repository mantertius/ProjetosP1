#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>



int square(int a)
{
    return a*a;
}

int triplex(int a)
{
    return a*a*a;
}

int myMap (int array[], int (*f)(int))      // Accepts any array and any function.
{
    for (int i = 0; i < 5; i++)
    {
        int ans = f(array[i]);
        printf("%d\n",ans);
    }
    printf("###############################\n");
}

int isEven (int n)
{
    if (n%2 == 0)
    {
        return 1;
    }
    else return 0;
    
}
void arrAdd(int arr[], int numero_avaliado, int index)
{
    arr[index] = numero_avaliado;
}   

int myFilter(int array[], int (*f)(int), int EV[], int OD[])
{
    int even = 0, odd = 0;
    for (int i = 0; i < 5; i++)
    {
        if (f(array[i]) == 1)
        {   
            arrAdd(EV,array[i],even);
            even++;
        }
        else
        {
            arrAdd(OD,array[i],odd);
            odd++;
        }
    }
    printf("PARES: ");
    for (int i = 0; i < even; i++)
    {
        printf("%d ", EV[i]);
    }
    printf("\nIMPARES: ");
    for (int i = 0; i < odd; i++)
    {
        printf("%d ",OD[i]);
    }
    printf("\n");    
}
int main()
{

    int array[]= {1,2,3,4,5};
    myMap(array, square);    //Squares everything and prints it.
    myMap(array, triplex);    //Elevates to the third and prints it.
    int EV[5];
    int ODD[5];
    
    myFilter(array,isEven,EV,ODD);
    return 0;

}