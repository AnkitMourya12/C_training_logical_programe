//Write a program to find Sum of digits of a number

#include<iostream>
using namespace std;

int  main()
{
    int rem,num,sum=0;
    cout<<"enter the no:";
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    cout<<"sum of digit is:"<<sum;
}