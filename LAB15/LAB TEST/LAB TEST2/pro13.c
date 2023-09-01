#include<stdio.h>
int main()
{
    int i;
    char ch[5]={'a','e','i','o','u'};
    char cha;
    scanf("%c",&cha);
    for(i=0;i<5;i++)
    {
        if(ch[i]==cha)
        printf("enter the character is vovel");
        break;
    }
    if(i>5)
    {
        printf("entre the charater is not vovel");
    }


}