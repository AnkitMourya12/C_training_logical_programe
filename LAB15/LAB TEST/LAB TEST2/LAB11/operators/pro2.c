// conditional operator

#include<stdio.h>
int main()
{
    int a=10;
    int b=11;
    int c=0;
    int d;
    d=a>b?c=11:c=22;  //exp1 ? exp2:exp3;

   
    printf("%d %d",c,d);
}