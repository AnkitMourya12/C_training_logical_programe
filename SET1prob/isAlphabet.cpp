//Write a program to identify if the character is an alphabet or not
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter the character:";
    cin>>c;
    if(isalpha(c))
    {
        cout<<"it is  a character";
    }
    else{
         cout<<"it is not a character";
    }
}