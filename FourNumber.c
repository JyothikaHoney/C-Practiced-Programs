#include<stdio.h>

void main()
{
    //declaring the variables
    int num1,num2,num3,num4,sum;

    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    printf("Enter the 3rd number : ");
    scanf("%d",&num3);
    printf("Enter the 4th number : ");
    scanf("%d",&num4);

    //logic
    sum=num1+num2+num3+num4;

    printf("Addition of 4numbers is %d\n",sum);
}