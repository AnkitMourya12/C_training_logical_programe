#include<stdio.h>
int main()
{
    int a=13,b=3;
    int c=a%b;
    int d=-a%b;
    int e=a%-b;
    int f=-a%-b;
    printf("c=%d\n",c);            //c=1
                                  // d=-1
                                  //          in modulo cases--> on depande on numerator sign
                                  // e=1
                                 // f=-1
    printf("d=%d\n",d);
    printf("e=%d\n",e);
    printf("f=%d\n",f);
}
