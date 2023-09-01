//Write a program to find reverse of given number

//check the given no. is palindrom or not

#include<iostream>
using namespace std;

int  main()
{
    int rem,num,rev=0;
    cout<<"enter the number :";
    cin>>num;
    int n=num;
    int l=num;
    while(num!=0)
    {rem=num%10;
    rev=(rev*10)+rem;
    num=num/10;
    }
  
   if(n==rev)
   {
    cout<<"it is the Number "<<rev<<" is Palindrom";
   }
   else 
   {
    cout<<"Not a palindrom";
   }
}