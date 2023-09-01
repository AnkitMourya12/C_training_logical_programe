#include<stdio.h>
int main()
{
    int a=printf("MPECe"); //printf return the intger value  (no. of character) hold by variable a;
    printf(" %d\n",a);

    int b=scanf("\n%d",&a);//scanf return the intger value  (no. input) hold by variable b;
    printf("%d",b);
}