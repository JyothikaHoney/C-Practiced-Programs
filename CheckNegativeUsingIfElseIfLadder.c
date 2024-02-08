#include<stdio.h>

int main()
{
    int num;
    printf("Enter any number");
    scanf("%d\n",&num);
    if(num<0)
    {
        printf("NUMBER IS NEGATIVE");
    }
    else if(num==0)
    {
        printf("NUMBER IS ZERO");
    }
    else
    {
        printf("NUMBER IS POSITIVE");
    }
    return 0;
}