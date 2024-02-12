#include<stdio.h>
#include<string.h>

void main()
{
    char str1[12]="Hello";
    char str2[12]="WoRLd";
    char str3[12];
    int len;
    strcpy(str3,str1);//copy str1 into str3
    printf("strcpy(str3,str1): %s\n",str3);
    strcat(str1,str2);//concatenates str1 and str2
    printf("strcat(str1,str2):%s\n",str1);
    len=strlen(str1);//total length of str1 after concatenatio
    printf("strlen(str1):%d\n",len);
    (strcmp(str1,str3)==0)?printf("Strings ar equal\n"):printf("Strings are not equal\n");
    
}