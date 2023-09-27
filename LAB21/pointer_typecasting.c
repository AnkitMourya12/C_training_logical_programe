#include<stdio.h>
int main()
{
    void *p;
    int n=54;
    char ch='o';
    p=&n;
    printf("%d\n",*(int*)p);
    
    printf("ok");
}