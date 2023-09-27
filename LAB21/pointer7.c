#include<stdio.h>
int main()
{
    
    int age[]={11,22,33,44};
    
     int *p1=age;
    int n=sizeof(age)/sizeof(age[0]);
    int i;
    int *temp=p1;
    printf(" ponter %u %u\n",p1,temp);
    for(i=0;i<4;i++)
    { 
        printf("%d\n",*(p1+i));  
        printf("%u\n",*temp);
        temp++; 
        
    }
    printf(" pointer %u %u",p1,temp);
    

    
    
}