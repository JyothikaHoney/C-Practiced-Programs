#include<stdio.h>

int main()
{
    int siddu,bunny;
    printf("Enter age of siddu ");
    scanf("%d",&siddu);
    printf("Enter the age of bunny ");
    scanf("%d",&bunny);

    //logic
    if(siddu>bunny)
    {
        printf("siddu is elder and his age is %d ",siddu);

    }
else
{
    printf("bunny is elder and his age is %d ",bunny);
}
    
}