#include<stdio.h>

void main()
{
    int num;
    printf("Enter the number to check even or not : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is even \n",num);
    }
    else{
        printf("%d is not even \n",num);
    }
}