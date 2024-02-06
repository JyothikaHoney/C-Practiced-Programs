#include<stdio.h>

void main()
{
    int a=10,b=12,temp;
    printf("a=%d,b=%d\n",a,b);
    temp=a,a=b,b=temp;
    printf("a=%d,b=%d\n",a,b);

}

