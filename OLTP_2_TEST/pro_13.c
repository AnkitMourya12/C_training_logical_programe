#include<stdio.h>
int main()
{
    char s1[50], s2[50]= "hello";
    s1=s2;
    printf("%s",s1);// op-->error
}