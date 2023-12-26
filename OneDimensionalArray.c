#include<stdio.h>

void main()
{
    int arraysize=5;
    int rollnumber[arraysize];
    printf("Enter %d roll number:\n",arraysize);
    for(int i=0;i<arraysize;i++)
    {
        printf("Roll Number %d",i+1);
        scanf("%d",&rollnumber[i]);
    }

}