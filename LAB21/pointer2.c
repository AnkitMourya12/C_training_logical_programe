#include<stdio.h>
int main()
{
    char *p1;
    int *p2;
    float *p3;
    double *p4;
    printf("%d %d\n",sizeof(p1),sizeof(p2));
    printf("%d %d",sizeof(p3),sizeof(p4));
}