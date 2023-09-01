// factor of no.

#include<iostream>
using namespace std;
int main()
{
    int num;
 
    cout<<"enter the base value:";
    cin>>num;
cout<<"factor of this No.:";
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
        }
    }
}