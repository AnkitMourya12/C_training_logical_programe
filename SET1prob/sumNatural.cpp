//Write a program to find Sum of N natural numbers

#include<iostream>
using namespace std;

int  main()
{
    int num,sum=0;
    cout<<"enter the natural number for sum:";
    cin>>num;
    int l=num;
    while(num!=0)
    {
        sum+=num;
        num--;
    }
    cout<<"sum of "<<l<<" natural number is:"<<sum;


}