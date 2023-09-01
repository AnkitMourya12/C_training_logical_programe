// check wether the no. is strong number or not 

#include<iostream>
using namespace std;

int  main()
{
    int num,sum=0;
    int rem;
    int fact;
    cout<<"enter the  numbers :";
    cin>>num;
    int origNo=num;
    while(num>0)
    { fact=1;
        rem=num%10;
        for(int i=1;i<=rem;i++)
        {
        fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
        
    }
    if(origNo==sum)
    {
        cout<<origNo<<" is strong Number";
    }
    else
    cout<<origNo<<" is not strong Number";
    return 0;
}