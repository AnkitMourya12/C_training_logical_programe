#include<stdio.h>
int main()
{
    char name[30];
    printf("enter name-");
    gets(name);// not use any formated symbol
    puts(name);
    printf("\nhello dear %s",name); //use formating

}