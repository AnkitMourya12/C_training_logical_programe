#include<stdio.h>

int main()
{ int i,n,sum=0;
int avg;
printf("enetr the subject_no \n:");
scanf("%d",&n);
int mark[n];
for(i=0;i<n;i++)
{
    printf("subject %d\n:",i+1);
    scanf("%d",&mark[i]);


}
printf("total marks and  average\n");
for(i=0;i<n;i++)
{
    sum=sum+mark[i];
}

for(i=0;i<n;i++)
{
    sum=sum+mark[i];
    avg=sum/n;
}
printf("total marks: %d",sum);
printf("avrage marks:%d",avg);

return 0;

}