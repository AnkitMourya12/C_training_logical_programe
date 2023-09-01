//Write a program to identify if the character is a vowel or consonant
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter the alphabet"<<endl;
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        cout<<"it is vovel:"<<c<<endl;
    }
    else{
        cout<<"it is consonent";
    }
    return 0;
}
