#include<stdio.h>

int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d",i);
        if(i==5)
        {
            printf("\n Reached 5. Breaking out of the loop.\n");
            break;
        }
        
    }
    return 0;
}