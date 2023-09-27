#include<stdio.h>
int main()
{
    int id;
    char nam;
    int i;
    int j;
    int arr[3]={{105,'aman',93},{105,'aman',93},{105,'aman',93}};
    int (*p)[3]=&arr;
    for(i=0;i<3;i++)
    {
        for(j=0;i<3;j++)
        {
         printf("%d %s %d\n",arr[arr[i]]);////// wrong 
        }
    }
}