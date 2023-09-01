// check wether the no. is perfact or not
#include<iostream>
using namespace std;

int  main()
{
    int num,sum=0;
    int i=1;
    int fact;
    cout<<"enter the  numbers :";
    cin>>num;
    while(i<num)
    {
        if(num%i==0)
        sum=sum+i;
        i++;
    }
    if(sum==num)
    {
        cout<<num<<" No is perfact Number";
    }
    else
     cout<<num<<" No. is not perfact Number";
     return 0;
}
