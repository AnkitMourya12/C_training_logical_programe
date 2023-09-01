#include<stdio.h>
#define ADD(T) T*T

int mpec (int t)
{
    return (t*t);
}
int main()
{
    printf("%d \n",ADD(2+3));
    printf("%d \n",mpec(2+3));
    return 0;
}
// O/P--->11
//        25