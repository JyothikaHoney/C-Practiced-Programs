#include<stdio.h>

int main()
{
    int i;
    for(i=1; i<=5; i++)
    {
        if (i==3)
        {
            break;
        }
        printf("Inside the loop.i = %d\n",i);
    }
    printf("Outside the loop. Loop exited at i = %d\n",i);
    return 0;
}