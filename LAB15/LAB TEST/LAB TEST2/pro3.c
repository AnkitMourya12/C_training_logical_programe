// even eliment print
#include<stdio.h>

int main()
{ int n,i;

printf("enter the size of array:");
scanf("%d",&n);
int arr[n];
printf("entre the element:\n");

for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);

}
printf("\narray is:");
for(i=0;i<n;i++)
{
    if(arr[i]%2==0)
    {
        printf("%d ",arr[i]);
    }
    
}
return 0;
}
 
   

    
   