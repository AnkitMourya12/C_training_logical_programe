#include<stdio.h>
int main()
{
    int p=22;
    int *p1=&p;
    int **p2=&p1;
    int ***p3=&p2;
    
    printf("%d %d %d %d",p,*p1,**p2,***p3);
}
