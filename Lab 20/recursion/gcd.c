#include <stdio.h> // buat semua library
int gcd(int a,int b);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",gcd(a,b));
	return 0;
}
int gcd(int a,int b)
{
	if(a == 0) return b;
	if(b == 0) return a;
	if(a>b)
     return gcd(a %b , b);
	if(b>a)
     return gcd(a,b % a); 
}