#include<stdio.h>
void logic();
int main()
{
    logic();
    printf("main func ");
    logic();
    logic();
}
void logic()
{
    static int loc=20;
    loc++;
    printf("%d ",loc);
}
