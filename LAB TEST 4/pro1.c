#include<stdio.h>
int main()
{
    int items;
    int  cost;
    float avg;
    int sum=0;
    printf("enter the no. of item \n");
    
    scanf("%d",&items);
    cost=items;
   
    int  item[cost];
    int itwet[items];

   
    int i;
    for(i=0;i<items;i++)
    {
        printf("enter the weight of item: %d:\n",i+1);
        scanf("%d",&item[i]);
        
        printf("entre the purchase item %d:\n",i+1);
        scanf("%d",&itwet[i]);
    }
    
    
    
    
    for(i=0;i<items;i++)
    {
     sum=sum+item[i]*itwet[i];
     
    }
    avg=sum/(cost+items);
    printf(" avrage is:%.2f",avg);
    

    

}