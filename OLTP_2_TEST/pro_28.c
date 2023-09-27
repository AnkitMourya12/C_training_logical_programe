#include<stdio.h>
enum hi{a,b,c};
enum hello{c,d,e};
main()
{
    enum hi h;
    h=b;
    printf("%d",h);//error
    return 0;
}