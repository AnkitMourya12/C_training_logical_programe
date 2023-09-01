#include<stdio.h>
int main()
{
    int a=20;
    int *ankit=&a;
    printf("%d\n",a);
    *ankit=40;
    printf("%d",a);
    return 0;
}