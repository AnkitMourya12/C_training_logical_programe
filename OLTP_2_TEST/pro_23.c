#include<stdio.h>
int main()
{int a=16,n=0;
while(n<=~(~a))
    {
        n++;
    }
    a=n;
    printf("%d",~a);//16
}