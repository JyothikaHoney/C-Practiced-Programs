#include<stdio.h>

int main()
{
    //Implicit type conversion
    int a=10;
    float b=3.14;
    float c=a+b;
    printf("c=%f\n",c);
    //Explicit type conversion using type cast operator
    int d=(int)b;
    printf("d=%d\n",d);
    return 0;
}