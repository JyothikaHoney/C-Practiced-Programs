#include<stdio.h>
#define SUM(x,y) ((x)+(y))
#define PROD(x,y) ((x)*(y))
#define MIN(a,b) ((a)<(b)?(a):(b))
void main()
{
    int I,m,i,j,a=5,b=3;
    float p,q;
    I=SUM(a,b);
    m=PROD(a,b);
    i=SUM(4,6);
    j=PROD(4,6);
    p=SUM(2.2,3.4);
    q=PROD(2.2,3.4);
    printf("I=%d,m=%d,i=%d,j=%d,p=%d.1f,q=%.1f\n",I,m,i,j,p,q);
    printf("Minimum between 10 and 20 is %d\n",MIN(10,20));
}