//WAP to find power of no.
#include<iostream>
using namespace std;
int main()
{
    int base,expo;
    long long res=1;
    cout<<"enter the base value:";
    cin>>base;

    cout<<"enter the exponent:";
    cin>>expo;
    while(expo!=0)
    {
        res*=base;
        expo--;
    }
    cout<<"the power of given base value. is:"<<res;
}