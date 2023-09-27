#include<stdio.h>
int main()
{
    char nam[]="ankti";
    int age[]={11,22,33,44};
    char *p1=&nam[0];
    int (*p2)[4]=&age;

    printf("%c %d\n",*p1,*p2);
    p1++;
    p2=p2+1;
    printf("%c %d\n",*p1,*p2);
}