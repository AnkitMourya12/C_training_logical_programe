#include<stdio.h>
int main()
{
    char name[10];
    char name2[20];
printf("entre your name");
gets(name);
strcpy(name2,name);         //  return void
printf("%s%s",name2,name);

}
