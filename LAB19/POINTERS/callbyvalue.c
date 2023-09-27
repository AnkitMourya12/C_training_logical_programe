#include<stdio.h>
int add(int *,int *);
int main()
{
    int a=22;
    int b=22;
    int s=add(&a,&b);
    printf("add:%d",s);
    return 0;

}

int add(int *x,int *y)
{
    int z=*x + *y;
    return z;
}