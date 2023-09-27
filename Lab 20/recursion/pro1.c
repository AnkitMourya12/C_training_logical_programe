#include<stdio.h>
int fun(int);
int main()
{
    int n=4;
   int s = fun(4);

}
int fun(int s)
{
    if(s==0)
    {
        return 1;
    }
    printf("%d ",s);
   return fun(s-1);
}