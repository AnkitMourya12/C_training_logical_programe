//lCM  of two number

#include<iostream>
using namespace std;

int  main()
{
    int num1,num2;
    cout<<"enter the two  numbers :";
    cin>>num1>>num2;
    int lcm;
    int max=(num1>num2)?num1:num2;
    int i=max;
    while(1)
    {
    if(i%num1==0 && i%num2==0)
    {
         lcm=i;
        break;
    }
    i+=max;
    }
    cout<<"Lcm is:"<<lcm;
    return 0;
}
