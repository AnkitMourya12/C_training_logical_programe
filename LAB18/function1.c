#include<stdio.h>

void add1();
void add2(int,int);
int add3();

int add4(int,int);

int main()
{
    int a=3;
    int b=2;
   int s=add4(a,b);
   printf("add4 :%d",s);
   printf("\n");
   s=add3();
    printf("add3 :%d",s);
      printf("\n");
    add1();
    add2(a,b);


 return 0;
}

int add4(int a,int b)
{
    int ad=a+b;
    return ad;
}

int add3()
{
    int a=2;
int b=3;
    int ad=a+b;
    return ad;
}
void add1()
{
    int a=2;
int b=3;
    int ad=a+b;
     printf("add1 :%d",ad);
       printf("\n");
    
}

void add2(int a,int b)
{
    
    int ad=a+b;
     printf("add2 :%d",ad);
       printf("\n");
    
}


