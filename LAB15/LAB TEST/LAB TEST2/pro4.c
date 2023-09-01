#include<stdio.h>
#define N 6

int main()
{
    int i,c=0;
    int arr[N]={1,2,3,4,5,6};
    for(i=0;i<N;i++)
    {
        if(arr[i]==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("array is none zero");
    }
    else{
        printf("array is have zero alement");
    }
}
