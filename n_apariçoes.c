#include <stdio.h>
#include <string.h>

int repeat_check(int a[], int w, int repeat, int i)
{
    int rep = 0;
    for (i = 0; i < 11; i++)
    {
        if(w == a[i])
        {
            rep = rep+1;
            //printf("repeat=%d\n",rep);
        }
        
    }
    printf("%d\n",rep);
    return repeat;
}

void scan_array(int a[])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        int n;
        scanf("%d",&n);
        a[i] = n;
    }
    

    return;
}

int main()
{
    int a[10];
    scan_array(a);

    int wanted;
    scanf("%d",&wanted);

    repeat_check(a,wanted,0,0);
    
    return 0;

}