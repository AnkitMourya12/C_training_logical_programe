#include<stdio.h>
int add(int ,int);
int main()
{
    int a=2;
    int b=3;
    int s=add(a,b);
     printf("add=%d a=%d  b=%d",s,a,b);
     return 0;

}
int add(int x,int y)
{
    int z=x+y;
    x++;
    y++;
    printf("add=%d x=%d  y=%d\n",z,x,y);
    return z;
    
}