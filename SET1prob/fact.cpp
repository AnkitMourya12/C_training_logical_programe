
// factorial of given number
#include <iostream>
using namespace std;
int fact(int num)
{
	if(num==1)
	{
		return 1;
	}
	else 
	return num*fact(num-1);
}

int main()
{
	int val;
	cout<<"enter the number:";
	cin>>val;
	int f=fact(val);
	cout<<"factorial is:"<<f;
}