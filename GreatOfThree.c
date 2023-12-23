#include<stdio.h>

int main()
{
    int num1,num2,num3;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    //logic
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("num1 %d is greatest \n",num1);
        }
    }
    else if(num2>num3)
    {
        printf("num2 %d is the greatest \n",num2);
    }
    else
    {
        printf("num3 %d is the greatest \n",num3);
    }
    
}