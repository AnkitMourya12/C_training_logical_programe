#include<stdio.h>
int main(){
int i,j,arr[3][3]={1,0,3,0,5,0,7,8,9};
int zero=0;
int sum=0;
printf("2d array is:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
printf("digonal element are:");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        //if(arr[i][j]!=0)
        if(i==j)
        {
    printf("%d ",arr[i][j]);
    sum=sum+arr[i][j];
        }
    }
}
printf("\nsum of digonal element:%d",sum);
//printf("",zero);
}