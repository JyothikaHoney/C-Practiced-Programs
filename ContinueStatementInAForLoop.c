#include<stdio.h>

int main()
{
    int i;
    for(i = 0;i < 10;i++)
    {
        if(i == 5||i == 7)
        {
            continue;
        }
        printf("%d\n", i);

    }
    return 0;
}