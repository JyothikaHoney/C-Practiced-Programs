#include<stdio.h>
#define PI 3.14159
#define MAX(a,b)((a)>(b)?(a):(b))
int main()
{
    printf("The value of PI is %f\n",PI);
    printf("The maximum of 10 and 20 is %d\n",MAX(10,20));
    return 0;
}