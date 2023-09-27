#include<stdio.h>
int main()
{
    int t=7;
    int s= ++t;
    switch(s>>1)
    {
       

        case 3:
             printf("c 4");
        case 5:
             printf("c 5");
        default:
             printf("traffic");

        case 9:
             printf("c 9");// traffic c 9 c 0
    case 0:
             printf("c 0");
    }
 }
