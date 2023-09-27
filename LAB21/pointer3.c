#include<stdio.h>
int main()
{
    char nam[]="ankti";
    int age[]={11,22,33,44};
    char *p1=&nam[3];
    int *p2=&age[3];

    printf("%c %d\n",*p1,*p2);
    printf("%c %d\n",*p1,*p2);
}