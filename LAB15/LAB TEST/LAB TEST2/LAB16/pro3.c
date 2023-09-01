#include<stdio.h>
int main()
{
    char name[]="amit";//// include '\0' character in amit then size is 5 
    printf("%d %d",sizeof(name),strlen(name));/////o/p----> 5 4
}