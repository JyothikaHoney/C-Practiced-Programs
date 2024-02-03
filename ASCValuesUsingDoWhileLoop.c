#include<stdio.h>

void main()
{
    int i, n;
    printf("Enter i, n values :\n ");
    scanf("%d%d",&i,&n);
    do
    {
     printf("%d-% c\t",i,i);
     i++;   /* code */
    } while (i<=n);
    
    
}