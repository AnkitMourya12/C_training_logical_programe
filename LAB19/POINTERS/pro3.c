#include<stdio.h>
int main()
{
    int p=22;
    int *p1=&p;
    int **p2=&p1;
    int ***p3=&p2;
    
    printf("%d %d %d %d\n",p,*p1,*p2,**p3);
        printf("%d %d %d %d",p,&p1,p2,*p3);
}
// o/p--   22 22 6422296 6422296
//        22 6422292 6422292 6422292