#include<stdio.h>

int main()
{
    //declaring variables
    float num1;
    float num2;

    //taking inputs from the user
    printf("Enter frist num ");
    scanf("%f",&num1);
    printf("Enter second num ");
    scanf("%f",&num2);

    //logic to find greatest
    if(num1>num2)
    {
        printf("%f is greatest",num1);
    }
    else{
        printf("%f is greatest ",num2);

    }


}