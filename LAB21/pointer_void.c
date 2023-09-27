#include<stdio.h>
int main()
{
    // void a; ///error void not a data type
    void *a;
    printf("heloo %d",sizeof(a));// o/p-->helloo 4 (pointer depend on environment)--32 bit-->4
    
}