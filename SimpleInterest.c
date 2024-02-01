#include<stdio.h>

void main()
{
    int p,t,r;
    float si;
    printf ("Enter price, time and rate of interest:\n");
    scanf ("%d%d%d",&p,&t,&r);
    si=(p*t*r)/100;
    printf("Simple Interest=%f",si);
}