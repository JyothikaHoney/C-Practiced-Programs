#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("\n%d is the biggest number",a);
        else
        printf("\n%d is the biggest number",c);
    }
      else
      {
        if(c>b)
        printf("\n%d is the biggest number",c);
        else
        printf("\n%d is the biggest number",b);
      }
}