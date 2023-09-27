#include<stdio.h>
int* f()
{
    int x=5;
    return &x;//<----
}
 main()///<----
{

   printf("%d\n",*f());  //o/p--> error
}