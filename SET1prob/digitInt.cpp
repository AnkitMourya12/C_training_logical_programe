//Write a program to find Number of digits in an integer
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int c=0;
    while(num!=0)
    {
        num=num/10;
        c++;
    }
    cout<<"no. of digit is="<<c;
}

