#include<stdio.h>
int main()
{
    int unit;
    float bill;
    printf("enter the electricity unit charges");
    scanf("%d",&unit);
    if(unit<=50)
    {
        bill=unit*0.50;
        printf(" unit charge is:%d->bill: %.2f",unit,bill);

        
    }
    else if(unit<=150 && unit>50)
    {
        bill=unit*0.75;
        printf(" unit charge is:%d->bill: %.2f",unit,bill);
    }
    else if(unit<=250 && unit>150)
    {
        bill=unit*1.20;
        printf(" unit charge is:%d->bill: %.2f",unit,bill);
    }
    else
   { bill=unit*1.50;
    printf("Total bill is:%.2f",bill);
   }

}