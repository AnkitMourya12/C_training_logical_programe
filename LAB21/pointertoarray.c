#include<stdio.h>
int main()
{
    int arr[]={11,22,33,44,55};
   int *p=arr;
   //printf("%d",*(p+2));
    printf("%d",(*p+2));
     printf("\n%d",*p++);
}