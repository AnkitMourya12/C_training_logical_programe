//Write a program to find reverse of given number

#include<iostream>
using namespace std;

int  main()
{
    int rem,num,rev=0;
    cout<<"enter the number :";
    cin>>num;
    int l=num;
    while(num!=0)
    {rem=num%10;
    rev=(rev*10)+rem;
    num=num/10;
    }
    cout<<"reverse of given no. is:"<<rev;
}