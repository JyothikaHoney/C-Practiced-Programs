#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter the values of two numbers:");
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    printf("a&b=%d\n",a,b);
    printf("a|b=%d\n",a,b);
    printf("a^b=%d\n",a,b);
    printf("~a=%d\n",~a);
    printf("a<<2=%d\n",a<<2);
    printf("a>>2=%d\n",a>>2);
}
