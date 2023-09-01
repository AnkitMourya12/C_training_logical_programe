#include<stdio.h>
int main()
{
    int num,last,r;
    int sum;
    scanf("%d",&num);
    last=num%10;
    while(num!=0)
    {
      r=num%10;
      sum=r;
      num=num/10;
      

    }
    printf("%d",last+sum);


   
}