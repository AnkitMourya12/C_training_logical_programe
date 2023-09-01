#include<stdio.h>
int main()
{
    int year;
    printf("entre the year");
    scanf("%d",&year);
if(year%400==0 && year%4==0)
    {
        printf("year is leap year");
    }
    else 
    printf("year is not a leap yaer");
}